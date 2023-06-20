/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_Window;
    QAction *actionsave_as;
    QAction *actionfind;
    QAction *actionfind_and_replace;
    QAction *actionclear_highlight;
    QAction *actiongo_to_line;
    QAction *actionviewfullscreen;
    QAction *actionexitfullscreen;
    QAction *actionpreferences;
    QAction *actionkeyboard_shortcuts;
    QAction *actionhelp;
    QAction *actionabout_sEdit;
    QAction *actionbold;
    QAction *actionsuper_script;
    QAction *actionsub_script;
    QAction *actionremove_super_subscript;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_open;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_resume;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_save;
    QTextEdit *textEdit_area;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menuText_Formatter;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 595);
        actionNew_Window = new QAction(MainWindow);
        actionNew_Window->setObjectName(QString::fromUtf8("actionNew_Window"));
        actionsave_as = new QAction(MainWindow);
        actionsave_as->setObjectName(QString::fromUtf8("actionsave_as"));
        actionfind = new QAction(MainWindow);
        actionfind->setObjectName(QString::fromUtf8("actionfind"));
        actionfind->setEnabled(false);
        actionfind_and_replace = new QAction(MainWindow);
        actionfind_and_replace->setObjectName(QString::fromUtf8("actionfind_and_replace"));
        actionfind_and_replace->setEnabled(false);
        actionclear_highlight = new QAction(MainWindow);
        actionclear_highlight->setObjectName(QString::fromUtf8("actionclear_highlight"));
        actionclear_highlight->setEnabled(false);
        actiongo_to_line = new QAction(MainWindow);
        actiongo_to_line->setObjectName(QString::fromUtf8("actiongo_to_line"));
        actionviewfullscreen = new QAction(MainWindow);
        actionviewfullscreen->setObjectName(QString::fromUtf8("actionviewfullscreen"));
        actionexitfullscreen = new QAction(MainWindow);
        actionexitfullscreen->setObjectName(QString::fromUtf8("actionexitfullscreen"));
        actionpreferences = new QAction(MainWindow);
        actionpreferences->setObjectName(QString::fromUtf8("actionpreferences"));
        actionpreferences->setEnabled(false);
        actionkeyboard_shortcuts = new QAction(MainWindow);
        actionkeyboard_shortcuts->setObjectName(QString::fromUtf8("actionkeyboard_shortcuts"));
        actionkeyboard_shortcuts->setEnabled(false);
        actionhelp = new QAction(MainWindow);
        actionhelp->setObjectName(QString::fromUtf8("actionhelp"));
        actionabout_sEdit = new QAction(MainWindow);
        actionabout_sEdit->setObjectName(QString::fromUtf8("actionabout_sEdit"));
        actionbold = new QAction(MainWindow);
        actionbold->setObjectName(QString::fromUtf8("actionbold"));
        actionsuper_script = new QAction(MainWindow);
        actionsuper_script->setObjectName(QString::fromUtf8("actionsuper_script"));
        actionsub_script = new QAction(MainWindow);
        actionsub_script->setObjectName(QString::fromUtf8("actionsub_script"));
        actionremove_super_subscript = new QAction(MainWindow);
        actionremove_super_subscript->setObjectName(QString::fromUtf8("actionremove_super_subscript"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_open = new QPushButton(centralwidget);
        pushButton_open->setObjectName(QString::fromUtf8("pushButton_open"));

        horizontalLayout->addWidget(pushButton_open);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_resume = new QPushButton(centralwidget);
        pushButton_resume->setObjectName(QString::fromUtf8("pushButton_resume"));

        horizontalLayout->addWidget(pushButton_resume);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_save = new QPushButton(centralwidget);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));

        horizontalLayout->addWidget(pushButton_save);


        verticalLayout->addLayout(horizontalLayout);

        textEdit_area = new QTextEdit(centralwidget);
        textEdit_area->setObjectName(QString::fromUtf8("textEdit_area"));

        verticalLayout->addWidget(textEdit_area);


        verticalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menubar->setLayoutDirection(Qt::RightToLeft);
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menuText_Formatter = new QMenu(menubar);
        menuText_Formatter->setObjectName(QString::fromUtf8("menuText_Formatter"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menuText_Formatter->menuAction());
        menu->addAction(actionNew_Window);
        menu->addAction(actionsave_as);
        menu->addSeparator();
        menu->addAction(actionfind);
        menu->addAction(actionfind_and_replace);
        menu->addAction(actionclear_highlight);
        menu->addAction(actiongo_to_line);
        menu->addSeparator();
        menu->addAction(actionviewfullscreen);
        menu->addAction(actionexitfullscreen);
        menu->addSeparator();
        menu->addAction(actionpreferences);
        menu->addSeparator();
        menu->addAction(actionkeyboard_shortcuts);
        menu->addAction(actionhelp);
        menu->addAction(actionabout_sEdit);
        menuText_Formatter->addAction(actionbold);
        menuText_Formatter->addAction(actionsuper_script);
        menuText_Formatter->addAction(actionsub_script);
        menuText_Formatter->addAction(actionremove_super_subscript);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew_Window->setText(QCoreApplication::translate("MainWindow", "new file", nullptr));
        actionsave_as->setText(QCoreApplication::translate("MainWindow", "save as", nullptr));
        actionfind->setText(QCoreApplication::translate("MainWindow", "find", nullptr));
        actionfind_and_replace->setText(QCoreApplication::translate("MainWindow", "find and replace", nullptr));
        actionclear_highlight->setText(QCoreApplication::translate("MainWindow", "clear highlight", nullptr));
        actiongo_to_line->setText(QCoreApplication::translate("MainWindow", "go to line", nullptr));
        actionviewfullscreen->setText(QCoreApplication::translate("MainWindow", "view full screen", nullptr));
        actionexitfullscreen->setText(QCoreApplication::translate("MainWindow", "exit full screen", nullptr));
        actionpreferences->setText(QCoreApplication::translate("MainWindow", "preferences", nullptr));
        actionkeyboard_shortcuts->setText(QCoreApplication::translate("MainWindow", "keyboard shortcuts", nullptr));
        actionhelp->setText(QCoreApplication::translate("MainWindow", "help", nullptr));
        actionabout_sEdit->setText(QCoreApplication::translate("MainWindow", "about sEdit", nullptr));
        actionbold->setText(QCoreApplication::translate("MainWindow", "bold/unbold", nullptr));
        actionsuper_script->setText(QCoreApplication::translate("MainWindow", "super script", nullptr));
        actionsub_script->setText(QCoreApplication::translate("MainWindow", "sub script", nullptr));
        actionremove_super_subscript->setText(QCoreApplication::translate("MainWindow", "remove super/subscript", nullptr));
        pushButton_open->setText(QCoreApplication::translate("MainWindow", "open", nullptr));
        pushButton_resume->setText(QCoreApplication::translate("MainWindow", "About Me", nullptr));
        pushButton_save->setText(QCoreApplication::translate("MainWindow", "save", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "Three bars (click for options)", nullptr));
        menuText_Formatter->setTitle(QCoreApplication::translate("MainWindow", "Text formatter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
