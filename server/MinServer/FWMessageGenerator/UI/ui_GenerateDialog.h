/********************************************************************************
** Form generated from reading UI file 'GenerateDialog.ui'
**
** Created: Sat 4. Sep 20:42:42 2010
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERATEDIALOG_H
#define UI_GENERATEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GenerateDialog
{
public:
    QLabel *label_8;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *leMessageID;
    QPushButton *btnBrowseID;
    QLabel *label_2;
    QLineEdit *leMessageReg;
    QPushButton *btnBrowseReg;
    QLabel *label_4;
    QLineEdit *leModulePath;
    QPushButton *btnBrowseModulePath;
    QLabel *label_6;
    QLineEdit *leMessageID_Client;
    QPushButton *btnBrowseID_Client;
    QLabel *label_5;
    QLineEdit *leMessageClassesPath;
    QPushButton *btnBrowseClassesPath;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QLineEdit *leModulePrefix;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnCancel;
    QPushButton *btnGenerate;

    void setupUi(QDialog *GenerateDialog)
    {
        if (GenerateDialog->objectName().isEmpty())
            GenerateDialog->setObjectName(QString::fromUtf8("GenerateDialog"));
        GenerateDialog->resize(772, 460);
        label_8 = new QLabel(GenerateDialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 10, 751, 81));
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_8->setWordWrap(true);
        layoutWidget = new QWidget(GenerateDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 100, 754, 212));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        leMessageID = new QLineEdit(layoutWidget);
        leMessageID->setObjectName(QString::fromUtf8("leMessageID"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(4);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(leMessageID->sizePolicy().hasHeightForWidth());
        leMessageID->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(leMessageID, 0, 2, 1, 1);

        btnBrowseID = new QPushButton(layoutWidget);
        btnBrowseID->setObjectName(QString::fromUtf8("btnBrowseID"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnBrowseID->sizePolicy().hasHeightForWidth());
        btnBrowseID->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(btnBrowseID, 0, 3, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        leMessageReg = new QLineEdit(layoutWidget);
        leMessageReg->setObjectName(QString::fromUtf8("leMessageReg"));
        sizePolicy1.setHeightForWidth(leMessageReg->sizePolicy().hasHeightForWidth());
        leMessageReg->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(leMessageReg, 2, 2, 1, 1);

        btnBrowseReg = new QPushButton(layoutWidget);
        btnBrowseReg->setObjectName(QString::fromUtf8("btnBrowseReg"));
        sizePolicy2.setHeightForWidth(btnBrowseReg->sizePolicy().hasHeightForWidth());
        btnBrowseReg->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(btnBrowseReg, 2, 3, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        leModulePath = new QLineEdit(layoutWidget);
        leModulePath->setObjectName(QString::fromUtf8("leModulePath"));
        sizePolicy1.setHeightForWidth(leModulePath->sizePolicy().hasHeightForWidth());
        leModulePath->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(leModulePath, 5, 2, 1, 1);

        btnBrowseModulePath = new QPushButton(layoutWidget);
        btnBrowseModulePath->setObjectName(QString::fromUtf8("btnBrowseModulePath"));
        sizePolicy2.setHeightForWidth(btnBrowseModulePath->sizePolicy().hasHeightForWidth());
        btnBrowseModulePath->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(btnBrowseModulePath, 5, 3, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        leMessageID_Client = new QLineEdit(layoutWidget);
        leMessageID_Client->setObjectName(QString::fromUtf8("leMessageID_Client"));
        sizePolicy1.setHeightForWidth(leMessageID_Client->sizePolicy().hasHeightForWidth());
        leMessageID_Client->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(leMessageID_Client, 1, 2, 1, 1);

        btnBrowseID_Client = new QPushButton(layoutWidget);
        btnBrowseID_Client->setObjectName(QString::fromUtf8("btnBrowseID_Client"));
        sizePolicy2.setHeightForWidth(btnBrowseID_Client->sizePolicy().hasHeightForWidth());
        btnBrowseID_Client->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(btnBrowseID_Client, 1, 3, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        leMessageClassesPath = new QLineEdit(layoutWidget);
        leMessageClassesPath->setObjectName(QString::fromUtf8("leMessageClassesPath"));

        gridLayout->addWidget(leMessageClassesPath, 3, 2, 1, 1);

        btnBrowseClassesPath = new QPushButton(layoutWidget);
        btnBrowseClassesPath->setObjectName(QString::fromUtf8("btnBrowseClassesPath"));
        sizePolicy2.setHeightForWidth(btnBrowseClassesPath->sizePolicy().hasHeightForWidth());
        btnBrowseClassesPath->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(btnBrowseClassesPath, 3, 3, 1, 1);


        horizontalLayout_2->addLayout(gridLayout);

        layoutWidget1 = new QWidget(GenerateDialog);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 320, 753, 131));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout->addWidget(label_7);

        leModulePrefix = new QLineEdit(layoutWidget1);
        leModulePrefix->setObjectName(QString::fromUtf8("leModulePrefix"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(leModulePrefix->sizePolicy().hasHeightForWidth());
        leModulePrefix->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(leModulePrefix);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(751, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        btnCancel = new QPushButton(layoutWidget1);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        horizontalLayout_3->addWidget(btnCancel);

        btnGenerate = new QPushButton(layoutWidget1);
        btnGenerate->setObjectName(QString::fromUtf8("btnGenerate"));

        horizontalLayout_3->addWidget(btnGenerate);


        verticalLayout->addLayout(horizontalLayout_3);

        QWidget::setTabOrder(leMessageID, btnBrowseID);
        QWidget::setTabOrder(btnBrowseID, leMessageID_Client);
        QWidget::setTabOrder(leMessageID_Client, btnBrowseID_Client);
        QWidget::setTabOrder(btnBrowseID_Client, leMessageReg);
        QWidget::setTabOrder(leMessageReg, btnBrowseReg);
        QWidget::setTabOrder(btnBrowseReg, leMessageClassesPath);
        QWidget::setTabOrder(leMessageClassesPath, btnBrowseClassesPath);
        QWidget::setTabOrder(btnBrowseClassesPath, leModulePath);
        QWidget::setTabOrder(leModulePath, btnBrowseModulePath);
        QWidget::setTabOrder(btnBrowseModulePath, leModulePrefix);
        QWidget::setTabOrder(leModulePrefix, btnCancel);
        QWidget::setTabOrder(btnCancel, btnGenerate);

        retranslateUi(GenerateDialog);

        QMetaObject::connectSlotsByName(GenerateDialog);
    } // setupUi

    void retranslateUi(QDialog *GenerateDialog)
    {
        GenerateDialog->setWindowTitle(QApplication::translate("GenerateDialog", "Generate Message Files", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("GenerateDialog", "When you click on \"Generate\" this will create or re-create message classes, message ID declarations, as well as message handler declarations and implementations.\n"
"Inside the message registry file the mapping for message IDs to message handlers is done.\n"
"A server module class represents each meassage group. The module class contains a handler implementation for each message of the message group it represents (unless the generate server handler flag is set to no for a given message). The module files will use a prefix in their file name which you can set below. Missing module files will be created.", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("GenerateDialog", "Message IDs: Server", 0, QApplication::UnicodeUTF8));
        btnBrowseID->setText(QApplication::translate("GenerateDialog", "Choose ...", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("GenerateDialog", "Message Registry", 0, QApplication::UnicodeUTF8));
        btnBrowseReg->setText(QApplication::translate("GenerateDialog", "Choose ...", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("GenerateDialog", "Module Classes (Path)", 0, QApplication::UnicodeUTF8));
        btnBrowseModulePath->setText(QApplication::translate("GenerateDialog", "Choose ...", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("GenerateDialog", "Message IDs: Client/Java", 0, QApplication::UnicodeUTF8));
        btnBrowseID_Client->setText(QApplication::translate("GenerateDialog", "Choose ...", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("GenerateDialog", "Message Classes (Path)", 0, QApplication::UnicodeUTF8));
        btnBrowseClassesPath->setText(QApplication::translate("GenerateDialog", "Choose ...", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("GenerateDialog", "Prefix for Modules", 0, QApplication::UnicodeUTF8));
        leModulePrefix->setText(QApplication::translate("GenerateDialog", "Module", 0, QApplication::UnicodeUTF8));
        btnCancel->setText(QApplication::translate("GenerateDialog", "Cancel", 0, QApplication::UnicodeUTF8));
        btnGenerate->setText(QApplication::translate("GenerateDialog", "Generate", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GenerateDialog: public Ui_GenerateDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERATEDIALOG_H
