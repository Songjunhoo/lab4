/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *AC_btn;
    QPushButton *zero_btn;
    QPushButton *divi_btn;
    QPushButton *one_btn;
    QPushButton *two_btn;
    QPushButton *three_btn;
    QPushButton *four_btn;
    QPushButton *five_btn;
    QPushButton *six_btn;
    QPushButton *equal_btn;
    QPushButton *min_btn;
    QPushButton *mult_btn;
    QPushButton *seven_btn;
    QPushButton *eight_btn;
    QPushButton *nine_btn;
    QPushButton *plus_btn;
    QLineEdit *firstEdit;
    QLineEdit *secondEdit;
    QLineEdit *resultEdit;
    QLabel *expr_symbol;
    QLabel *expr_equal;
    QMenuBar *menuBar;
    QMenu *menuYongjjang_s_Caculator;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(451, 307);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        AC_btn = new QPushButton(centralWidget);
        AC_btn->setObjectName(QStringLiteral("AC_btn"));
        AC_btn->setGeometry(QRect(20, 220, 80, 22));
        zero_btn = new QPushButton(centralWidget);
        zero_btn->setObjectName(QStringLiteral("zero_btn"));
        zero_btn->setGeometry(QRect(130, 220, 80, 22));
        divi_btn = new QPushButton(centralWidget);
        divi_btn->setObjectName(QStringLiteral("divi_btn"));
        divi_btn->setGeometry(QRect(350, 220, 80, 22));
        one_btn = new QPushButton(centralWidget);
        one_btn->setObjectName(QStringLiteral("one_btn"));
        one_btn->setGeometry(QRect(20, 180, 80, 22));
        two_btn = new QPushButton(centralWidget);
        two_btn->setObjectName(QStringLiteral("two_btn"));
        two_btn->setGeometry(QRect(130, 180, 80, 22));
        three_btn = new QPushButton(centralWidget);
        three_btn->setObjectName(QStringLiteral("three_btn"));
        three_btn->setGeometry(QRect(240, 180, 80, 22));
        four_btn = new QPushButton(centralWidget);
        four_btn->setObjectName(QStringLiteral("four_btn"));
        four_btn->setGeometry(QRect(20, 140, 80, 22));
        five_btn = new QPushButton(centralWidget);
        five_btn->setObjectName(QStringLiteral("five_btn"));
        five_btn->setGeometry(QRect(130, 140, 80, 22));
        six_btn = new QPushButton(centralWidget);
        six_btn->setObjectName(QStringLiteral("six_btn"));
        six_btn->setGeometry(QRect(240, 140, 80, 22));
        equal_btn = new QPushButton(centralWidget);
        equal_btn->setObjectName(QStringLiteral("equal_btn"));
        equal_btn->setGeometry(QRect(240, 220, 80, 22));
        min_btn = new QPushButton(centralWidget);
        min_btn->setObjectName(QStringLiteral("min_btn"));
        min_btn->setGeometry(QRect(350, 180, 80, 22));
        mult_btn = new QPushButton(centralWidget);
        mult_btn->setObjectName(QStringLiteral("mult_btn"));
        mult_btn->setGeometry(QRect(350, 140, 80, 22));
        seven_btn = new QPushButton(centralWidget);
        seven_btn->setObjectName(QStringLiteral("seven_btn"));
        seven_btn->setGeometry(QRect(20, 100, 80, 22));
        eight_btn = new QPushButton(centralWidget);
        eight_btn->setObjectName(QStringLiteral("eight_btn"));
        eight_btn->setGeometry(QRect(130, 100, 80, 22));
        nine_btn = new QPushButton(centralWidget);
        nine_btn->setObjectName(QStringLiteral("nine_btn"));
        nine_btn->setGeometry(QRect(240, 100, 80, 22));
        plus_btn = new QPushButton(centralWidget);
        plus_btn->setObjectName(QStringLiteral("plus_btn"));
        plus_btn->setGeometry(QRect(350, 100, 80, 22));
        firstEdit = new QLineEdit(centralWidget);
        firstEdit->setObjectName(QStringLiteral("firstEdit"));
        firstEdit->setGeometry(QRect(20, 40, 111, 22));
        secondEdit = new QLineEdit(centralWidget);
        secondEdit->setObjectName(QStringLiteral("secondEdit"));
        secondEdit->setGeometry(QRect(170, 40, 101, 22));
        resultEdit = new QLineEdit(centralWidget);
        resultEdit->setObjectName(QStringLiteral("resultEdit"));
        resultEdit->setGeometry(QRect(312, 40, 121, 22));
        expr_symbol = new QLabel(centralWidget);
        expr_symbol->setObjectName(QStringLiteral("expr_symbol"));
        expr_symbol->setGeometry(QRect(150, 40, 16, 21));
        expr_equal = new QLabel(centralWidget);
        expr_equal->setObjectName(QStringLiteral("expr_equal"));
        expr_equal->setGeometry(QRect(285, 40, 21, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 451, 19));
        menuYongjjang_s_Caculator = new QMenu(menuBar);
        menuYongjjang_s_Caculator->setObjectName(QStringLiteral("menuYongjjang_s_Caculator"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuYongjjang_s_Caculator->menuAction());

        retranslateUi(MainWindow);
        QObject::connect(AC_btn, SIGNAL(clicked()), firstEdit, SLOT(clear()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        AC_btn->setText(QApplication::translate("MainWindow", "AC", Q_NULLPTR));
        zero_btn->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        divi_btn->setText(QApplication::translate("MainWindow", "/", Q_NULLPTR));
        one_btn->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        two_btn->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        three_btn->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        four_btn->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        five_btn->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        six_btn->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        equal_btn->setText(QApplication::translate("MainWindow", "=", Q_NULLPTR));
        min_btn->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        mult_btn->setText(QApplication::translate("MainWindow", "x", Q_NULLPTR));
        seven_btn->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        eight_btn->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        nine_btn->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        plus_btn->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        expr_symbol->setText(QString());
        expr_equal->setText(QApplication::translate("MainWindow", "=", Q_NULLPTR));
        menuYongjjang_s_Caculator->setTitle(QApplication::translate("MainWindow", "Yongjjang's Caculator", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
