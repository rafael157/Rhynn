#include "UserSession.h"
#include "../FWWorld.h"
#include "DBHelper.h"
#include <iostream>

using namespace fwworld;

UserSession::UserSession(FWWorld& world) : DBSynchObject(world),
userId(0),
characterId(0),
status(UserSessionStatus::normal),
keyActionLog(""),
errorLog(""),
suspiciousLog(""),
debugLog(""),
sessionStart(),
sessionEnd(),
sessionDuration(0),
sessionStartTS(0),
sessionEndTS(0)
{
}


UserSession::~UserSession() {
}

bool UserSession::storeToDB() {
	mysqlpp::Query query = world.conn.query();
	if (id == 0) {
		// insert new user record
		query	<< "insert into user_sessions (user_id, character_id, session_start, session_end, session_duration, key_action_log, error_log, suspicious_log, debug_log, status)"
			<< "values ("
			// note how the id is not a guid but an id auto-generated by the usersessions table
            << userId << ","
			<< characterId << ","
			<< mysqlpp::quote << sessionStart.strSQL() << ","
			<< mysqlpp::quote << sessionEnd.strSQL() << ","
			<< ((long)sessionDuration) << ","
			<< mysqlpp::quote << keyActionLog << ","
			<< mysqlpp::quote << errorLog << ","
			<< mysqlpp::quote << suspiciousLog << ","
			<< mysqlpp::quote << debugLog << ","
			<< mysqlpp::quote << status.str()
			<< ")";
	} else {
		// update usersession record
		query	<< "update user_sessions set "
			<< "user_id = " << mysqlpp::quote << userId << ","
			<< "character_id = " << mysqlpp::quote << characterId << ","
			<< "session_start = " << mysqlpp::quote << sessionStart.strSQL() << ","
			<< "session_end = " << mysqlpp::quote << sessionEnd.strSQL() << ","
			<< "session_duration = " << (long)sessionDuration << ","
			<< "key_action_log = " << mysqlpp::quote << keyActionLog<< ","
			<< "error_log = " << mysqlpp::quote << errorLog << ","
			<< "suspicious_log = " << mysqlpp::quote << suspiciousLog << ","
			<< "debug_log = " << mysqlpp::quote << debugLog << ","
			<< "status = " << mysqlpp::quote << status.str()
			<< " where id = " << id;
	}
	if (storeByQuery(query, "UserSession store")) {
		emptyLog();
		return true;
	}
	return false;
}


bool UserSession::loadFromDB(unsigned int existingId) {
	mysqlpp::Query query = world.conn.query();
	query << "select * from user_sessions where id = " << existingId;
	mysqlpp::StoreQueryResult res;

	fwutil::DBHelper::select(query, &res, "user session load");

	if (res && res.num_rows() > 0) {
		mysqlpp::Row row = res[0];
		id = row["id"];
		userId = row["user_id"];
		characterId = row["character_id"];
		status = row["status"].c_str();
		sessionStart.setFromSQL(row["session_start"].c_str());
		sessionEnd.setFromSQL(row["session_start"].c_str());
		sessionDuration = row["session_duration"];
		keyActionLog = row["key_action_log"].c_str();
		errorLog = row["error_log"].c_str();
		suspiciousLog = row["suspicious_log"].c_str();
		debugLog = row["debug_log"].c_str();

		onSuccessfulLoad();
		return true;
	}
	return false;
}


bool UserSession::removeFromDB() {
	if (id > 0) {
		mysqlpp::Query query = world.conn.query();
		query << "delete from user_sessions where id = " << mysqlpp::quote << id;
		return removeByQuery(query, "UserSession remove");
	}
	return false;
}



void UserSession::logKeyAction(const std::string& msg) {
	keyActionLog += "[" + world.clock.getDateTime().strSQL() + "] " + msg + "\n";
}

void UserSession::logError(const std::string& msg) {
	addLogMessage(errorLog, msg);
	if (status != UserSessionStatus::critical) {
		setStatus(UserSessionStatus::critical);
	}
}

void UserSession::logSuspiciousAction(const std::string& msg) {
	addLogMessage(suspiciousLog, msg);
	if (status == UserSessionStatus::normal) {
		setStatus(UserSessionStatus::abnormal);
	}
}

void UserSession::logDebug(const std::string& msg) {
	addLogMessage(debugLog, msg);
}

void UserSession::addLogMessage(std::string& msgBuffer, const std::string msg) {
	std::string timestamp = "[" + world.clock.getTimestampStr(true) + "] ";
	msgBuffer += timestamp + msg + "\n";
	std::cout << timestamp << " " << userId << ":" << characterId << " " << msg << std::endl;
}
