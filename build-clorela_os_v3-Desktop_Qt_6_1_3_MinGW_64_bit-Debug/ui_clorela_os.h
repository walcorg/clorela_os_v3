/********************************************************************************
** Form generated from reading UI file 'clorela_os.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLORELA_OS_H
#define UI_CLORELA_OS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Clorela_OS
{
public:
    QAction *actionMY_PROFILE;
    QAction *actionINITIATE_UPLOAD;
    QAction *actionSTOP_UPLOAD;
    QAction *actionSIGN_OFF;
    QAction *actionUSER_DATA;
    QAction *actionADDRESS_WALLETT;
    QAction *actionLANGUAGE;
    QAction *actionGRAPHIC;
    QAction *actionNUMERIC;
    QAction *actionCONFIGURE_WI_FI;
    QAction *actionCONFIGURE_SERVER;
    QAction *actionSEARCH_FOR_UPDATES;
    QAction *actionCONNECTION_PROPERTIES;
    QAction *actionABOUT_CLORELA;
    QAction *actionABOUT_WALCORG;
    QAction *actionREPORT_PROBLEM;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuACCOUNT;
    QMenu *menuMY_PROFILE;
    QMenu *menuINTERFACE;
    QMenu *menuUI;
    QMenu *menuSETTINGS;
    QMenu *menuOPTIONS;
    QMenu *menuHELP;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Clorela_OS)
    {
        if (Clorela_OS->objectName().isEmpty())
            Clorela_OS->setObjectName(QString::fromUtf8("Clorela_OS"));
        Clorela_OS->resize(800, 600);
        actionMY_PROFILE = new QAction(Clorela_OS);
        actionMY_PROFILE->setObjectName(QString::fromUtf8("actionMY_PROFILE"));
        actionINITIATE_UPLOAD = new QAction(Clorela_OS);
        actionINITIATE_UPLOAD->setObjectName(QString::fromUtf8("actionINITIATE_UPLOAD"));
        actionSTOP_UPLOAD = new QAction(Clorela_OS);
        actionSTOP_UPLOAD->setObjectName(QString::fromUtf8("actionSTOP_UPLOAD"));
        actionSIGN_OFF = new QAction(Clorela_OS);
        actionSIGN_OFF->setObjectName(QString::fromUtf8("actionSIGN_OFF"));
        actionUSER_DATA = new QAction(Clorela_OS);
        actionUSER_DATA->setObjectName(QString::fromUtf8("actionUSER_DATA"));
        actionADDRESS_WALLETT = new QAction(Clorela_OS);
        actionADDRESS_WALLETT->setObjectName(QString::fromUtf8("actionADDRESS_WALLETT"));
        actionLANGUAGE = new QAction(Clorela_OS);
        actionLANGUAGE->setObjectName(QString::fromUtf8("actionLANGUAGE"));
        actionGRAPHIC = new QAction(Clorela_OS);
        actionGRAPHIC->setObjectName(QString::fromUtf8("actionGRAPHIC"));
        actionNUMERIC = new QAction(Clorela_OS);
        actionNUMERIC->setObjectName(QString::fromUtf8("actionNUMERIC"));
        actionCONFIGURE_WI_FI = new QAction(Clorela_OS);
        actionCONFIGURE_WI_FI->setObjectName(QString::fromUtf8("actionCONFIGURE_WI_FI"));
        actionCONFIGURE_SERVER = new QAction(Clorela_OS);
        actionCONFIGURE_SERVER->setObjectName(QString::fromUtf8("actionCONFIGURE_SERVER"));
        actionSEARCH_FOR_UPDATES = new QAction(Clorela_OS);
        actionSEARCH_FOR_UPDATES->setObjectName(QString::fromUtf8("actionSEARCH_FOR_UPDATES"));
        actionCONNECTION_PROPERTIES = new QAction(Clorela_OS);
        actionCONNECTION_PROPERTIES->setObjectName(QString::fromUtf8("actionCONNECTION_PROPERTIES"));
        actionABOUT_CLORELA = new QAction(Clorela_OS);
        actionABOUT_CLORELA->setObjectName(QString::fromUtf8("actionABOUT_CLORELA"));
        actionABOUT_WALCORG = new QAction(Clorela_OS);
        actionABOUT_WALCORG->setObjectName(QString::fromUtf8("actionABOUT_WALCORG"));
        actionREPORT_PROBLEM = new QAction(Clorela_OS);
        actionREPORT_PROBLEM->setObjectName(QString::fromUtf8("actionREPORT_PROBLEM"));
        centralwidget = new QWidget(Clorela_OS);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Clorela_OS->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Clorela_OS);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuACCOUNT = new QMenu(menubar);
        menuACCOUNT->setObjectName(QString::fromUtf8("menuACCOUNT"));
        menuMY_PROFILE = new QMenu(menuACCOUNT);
        menuMY_PROFILE->setObjectName(QString::fromUtf8("menuMY_PROFILE"));
        menuINTERFACE = new QMenu(menubar);
        menuINTERFACE->setObjectName(QString::fromUtf8("menuINTERFACE"));
        menuUI = new QMenu(menuINTERFACE);
        menuUI->setObjectName(QString::fromUtf8("menuUI"));
        menuSETTINGS = new QMenu(menubar);
        menuSETTINGS->setObjectName(QString::fromUtf8("menuSETTINGS"));
        menuOPTIONS = new QMenu(menubar);
        menuOPTIONS->setObjectName(QString::fromUtf8("menuOPTIONS"));
        menuHELP = new QMenu(menubar);
        menuHELP->setObjectName(QString::fromUtf8("menuHELP"));
        Clorela_OS->setMenuBar(menubar);
        statusbar = new QStatusBar(Clorela_OS);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Clorela_OS->setStatusBar(statusbar);

        menubar->addAction(menuACCOUNT->menuAction());
        menubar->addAction(menuINTERFACE->menuAction());
        menubar->addAction(menuSETTINGS->menuAction());
        menubar->addAction(menuOPTIONS->menuAction());
        menubar->addAction(menuHELP->menuAction());
        menuACCOUNT->addAction(actionMY_PROFILE);
        menuACCOUNT->addAction(menuMY_PROFILE->menuAction());
        menuACCOUNT->addAction(actionINITIATE_UPLOAD);
        menuACCOUNT->addAction(actionSTOP_UPLOAD);
        menuACCOUNT->addAction(actionSIGN_OFF);
        menuMY_PROFILE->addAction(actionUSER_DATA);
        menuMY_PROFILE->addAction(actionADDRESS_WALLETT);
        menuINTERFACE->addAction(menuUI->menuAction());
        menuINTERFACE->addAction(actionLANGUAGE);
        menuUI->addAction(actionGRAPHIC);
        menuUI->addAction(actionNUMERIC);
        menuSETTINGS->addAction(actionCONFIGURE_WI_FI);
        menuSETTINGS->addAction(actionCONFIGURE_SERVER);
        menuOPTIONS->addAction(actionSEARCH_FOR_UPDATES);
        menuOPTIONS->addAction(actionCONNECTION_PROPERTIES);
        menuHELP->addAction(actionABOUT_CLORELA);
        menuHELP->addAction(actionABOUT_WALCORG);
        menuHELP->addAction(actionREPORT_PROBLEM);

        retranslateUi(Clorela_OS);

        QMetaObject::connectSlotsByName(Clorela_OS);
    } // setupUi

    void retranslateUi(QMainWindow *Clorela_OS)
    {
        Clorela_OS->setWindowTitle(QCoreApplication::translate("Clorela_OS", "Clorela_OS", nullptr));
        actionMY_PROFILE->setText(QCoreApplication::translate("Clorela_OS", "SIGN IN", nullptr));
        actionINITIATE_UPLOAD->setText(QCoreApplication::translate("Clorela_OS", "INITIATE UPLOAD", nullptr));
        actionSTOP_UPLOAD->setText(QCoreApplication::translate("Clorela_OS", "STOP UPLOAD", nullptr));
        actionSIGN_OFF->setText(QCoreApplication::translate("Clorela_OS", "SIGN OFF", nullptr));
        actionUSER_DATA->setText(QCoreApplication::translate("Clorela_OS", "USER DATA", nullptr));
        actionADDRESS_WALLETT->setText(QCoreApplication::translate("Clorela_OS", "ADDRESS WALLETT", nullptr));
        actionLANGUAGE->setText(QCoreApplication::translate("Clorela_OS", "LANGUAGE", nullptr));
        actionGRAPHIC->setText(QCoreApplication::translate("Clorela_OS", "GRAPHIC", nullptr));
        actionNUMERIC->setText(QCoreApplication::translate("Clorela_OS", "NUMERIC", nullptr));
        actionCONFIGURE_WI_FI->setText(QCoreApplication::translate("Clorela_OS", "CONFIGURE WI-FI", nullptr));
        actionCONFIGURE_SERVER->setText(QCoreApplication::translate("Clorela_OS", "CONFIGURE SERVER", nullptr));
        actionSEARCH_FOR_UPDATES->setText(QCoreApplication::translate("Clorela_OS", "SEARCH FOR UPDATES", nullptr));
        actionCONNECTION_PROPERTIES->setText(QCoreApplication::translate("Clorela_OS", "CONNECTION PROPERTIES", nullptr));
        actionABOUT_CLORELA->setText(QCoreApplication::translate("Clorela_OS", "ABOUT CLORELA", nullptr));
        actionABOUT_WALCORG->setText(QCoreApplication::translate("Clorela_OS", "ABOUT WALCORG", nullptr));
        actionREPORT_PROBLEM->setText(QCoreApplication::translate("Clorela_OS", "REPORT PROBLEM", nullptr));
        menuACCOUNT->setTitle(QCoreApplication::translate("Clorela_OS", "ACCOUNT", nullptr));
        menuMY_PROFILE->setTitle(QCoreApplication::translate("Clorela_OS", "MY PROFILE", nullptr));
        menuINTERFACE->setTitle(QCoreApplication::translate("Clorela_OS", "INTERFACE", nullptr));
        menuUI->setTitle(QCoreApplication::translate("Clorela_OS", "UI", nullptr));
        menuSETTINGS->setTitle(QCoreApplication::translate("Clorela_OS", "SETTINGS", nullptr));
        menuOPTIONS->setTitle(QCoreApplication::translate("Clorela_OS", "OPTIONS", nullptr));
        menuHELP->setTitle(QCoreApplication::translate("Clorela_OS", "HELP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Clorela_OS: public Ui_Clorela_OS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLORELA_OS_H
