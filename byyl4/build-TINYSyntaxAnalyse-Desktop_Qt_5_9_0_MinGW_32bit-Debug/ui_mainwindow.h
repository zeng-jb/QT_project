/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *openFileBtn;
    QPushButton *saveCodeBtn;
    QPushButton *getSyntaxTreeBtn;
    QPushButton *saveSyntaxTreeBtn;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QTextEdit *codeText;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QTextBrowser *syntaxTreeText;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        openFileBtn = new QPushButton(centralwidget);
        openFileBtn->setObjectName(QStringLiteral("openFileBtn"));

        gridLayout->addWidget(openFileBtn, 0, 0, 1, 1);

        saveCodeBtn = new QPushButton(centralwidget);
        saveCodeBtn->setObjectName(QStringLiteral("saveCodeBtn"));

        gridLayout->addWidget(saveCodeBtn, 0, 1, 1, 1);

        getSyntaxTreeBtn = new QPushButton(centralwidget);
        getSyntaxTreeBtn->setObjectName(QStringLiteral("getSyntaxTreeBtn"));

        gridLayout->addWidget(getSyntaxTreeBtn, 0, 2, 1, 1);

        saveSyntaxTreeBtn = new QPushButton(centralwidget);
        saveSyntaxTreeBtn->setObjectName(QStringLiteral("saveSyntaxTreeBtn"));

        gridLayout->addWidget(saveSyntaxTreeBtn, 0, 3, 1, 1);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        codeText = new QTextEdit(groupBox);
        codeText->setObjectName(QStringLiteral("codeText"));

        gridLayout_2->addWidget(codeText, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox, 1, 0, 1, 2);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        syntaxTreeText = new QTextBrowser(groupBox_2);
        syntaxTreeText->setObjectName(QStringLiteral("syntaxTreeText"));

        gridLayout_3->addWidget(syntaxTreeText, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox_2, 1, 2, 1, 2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        openFileBtn->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", Q_NULLPTR));
        saveCodeBtn->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230\346\272\220\347\240\201", Q_NULLPTR));
        getSyntaxTreeBtn->setText(QApplication::translate("MainWindow", "\347\224\237\346\210\220\350\257\255\346\263\225\346\240\221", Q_NULLPTR));
        saveSyntaxTreeBtn->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230\350\257\255\346\263\225\346\240\221", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "TINY\346\272\220\347\240\201", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\350\257\255\346\263\225\346\240\221", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
