/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pb_confirm;
    QLabel *label_age;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QRadioButton *rd_31;
    QRadioButton *rd_41;
    QRadioButton *rd_19;
    QRadioButton *rd_7;
    QTextBrowser *textBrowser;
    QLabel *label_movie;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QCheckBox *cb_Avengers;
    QCheckBox *cb_Pirates;
    QCheckBox *cb_Passenger;
    QCheckBox *cb_Mission;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QRadioButton *rd_boy;
    QRadioButton *rd_girl;
    QLabel *label_gender;
    QLabel *label_thanks;
    QLabel *label;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QRadioButton *rd_Action;
    QRadioButton *rd_Science;
    QRadioButton *rd_Love;
    QRadioButton *rd_Drama;
    QRadioButton *rd_Suspense;
    QRadioButton *rd_Fantasy;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(773, 738);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pb_confirm = new QPushButton(centralWidget);
        pb_confirm->setObjectName(QString::fromUtf8("pb_confirm"));
        pb_confirm->setGeometry(QRect(70, 460, 121, 61));
        label_age = new QLabel(centralWidget);
        label_age->setObjectName(QString::fromUtf8("label_age"));
        label_age->setGeometry(QRect(420, 10, 121, 61));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(420, 60, 181, 106));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        rd_31 = new QRadioButton(gridLayoutWidget);
        rd_31->setObjectName(QString::fromUtf8("rd_31"));

        gridLayout->addWidget(rd_31, 2, 0, 1, 1);

        rd_41 = new QRadioButton(gridLayoutWidget);
        rd_41->setObjectName(QString::fromUtf8("rd_41"));

        gridLayout->addWidget(rd_41, 3, 0, 1, 1);

        rd_19 = new QRadioButton(gridLayoutWidget);
        rd_19->setObjectName(QString::fromUtf8("rd_19"));

        gridLayout->addWidget(rd_19, 1, 0, 1, 1);

        rd_7 = new QRadioButton(gridLayoutWidget);
        rd_7->setObjectName(QString::fromUtf8("rd_7"));

        gridLayout->addWidget(rd_7, 0, 0, 1, 1);

        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(250, 440, 481, 141));
        label_movie = new QLabel(centralWidget);
        label_movie->setObjectName(QString::fromUtf8("label_movie"));
        label_movie->setGeometry(QRect(10, 170, 381, 31));
        gridLayoutWidget_2 = new QWidget(centralWidget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 210, 381, 161));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        cb_Avengers = new QCheckBox(gridLayoutWidget_2);
        cb_Avengers->setObjectName(QString::fromUtf8("cb_Avengers"));

        gridLayout_2->addWidget(cb_Avengers, 1, 0, 1, 1);

        cb_Pirates = new QCheckBox(gridLayoutWidget_2);
        cb_Pirates->setObjectName(QString::fromUtf8("cb_Pirates"));

        gridLayout_2->addWidget(cb_Pirates, 3, 0, 1, 1);

        cb_Passenger = new QCheckBox(gridLayoutWidget_2);
        cb_Passenger->setObjectName(QString::fromUtf8("cb_Passenger"));

        gridLayout_2->addWidget(cb_Passenger, 0, 0, 1, 1);

        cb_Mission = new QCheckBox(gridLayoutWidget_2);
        cb_Mission->setObjectName(QString::fromUtf8("cb_Mission"));

        gridLayout_2->addWidget(cb_Mission, 2, 0, 1, 1);

        gridLayoutWidget_3 = new QWidget(centralWidget);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(30, 70, 160, 80));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        rd_boy = new QRadioButton(gridLayoutWidget_3);
        rd_boy->setObjectName(QString::fromUtf8("rd_boy"));

        gridLayout_3->addWidget(rd_boy, 0, 0, 1, 1);

        rd_girl = new QRadioButton(gridLayoutWidget_3);
        rd_girl->setObjectName(QString::fromUtf8("rd_girl"));

        gridLayout_3->addWidget(rd_girl, 1, 0, 1, 1);

        label_gender = new QLabel(centralWidget);
        label_gender->setObjectName(QString::fromUtf8("label_gender"));
        label_gender->setGeometry(QRect(20, 20, 171, 41));
        label_thanks = new QLabel(centralWidget);
        label_thanks->setObjectName(QString::fromUtf8("label_thanks"));
        label_thanks->setGeometry(QRect(60, 600, 611, 61));
        label_thanks->setStyleSheet(QString::fromUtf8("font: 57 14pt \"Adobe Myungjo Std M\";"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(420, 180, 301, 41));
        gridLayoutWidget_4 = new QWidget(centralWidget);
        gridLayoutWidget_4->setObjectName(QString::fromUtf8("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(420, 230, 251, 181));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        rd_Action = new QRadioButton(gridLayoutWidget_4);
        rd_Action->setObjectName(QString::fromUtf8("rd_Action"));

        gridLayout_4->addWidget(rd_Action, 2, 0, 1, 1);

        rd_Science = new QRadioButton(gridLayoutWidget_4);
        rd_Science->setObjectName(QString::fromUtf8("rd_Science"));

        gridLayout_4->addWidget(rd_Science, 0, 0, 1, 1);

        rd_Love = new QRadioButton(gridLayoutWidget_4);
        rd_Love->setObjectName(QString::fromUtf8("rd_Love"));

        gridLayout_4->addWidget(rd_Love, 3, 0, 1, 1);

        rd_Drama = new QRadioButton(gridLayoutWidget_4);
        rd_Drama->setObjectName(QString::fromUtf8("rd_Drama"));

        gridLayout_4->addWidget(rd_Drama, 1, 0, 1, 1);

        rd_Suspense = new QRadioButton(gridLayoutWidget_4);
        rd_Suspense->setObjectName(QString::fromUtf8("rd_Suspense"));

        gridLayout_4->addWidget(rd_Suspense, 4, 0, 1, 1);

        rd_Fantasy = new QRadioButton(gridLayoutWidget_4);
        rd_Fantasy->setObjectName(QString::fromUtf8("rd_Fantasy"));

        gridLayout_4->addWidget(rd_Fantasy, 5, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 773, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pb_confirm->setText(QApplication::translate("MainWindow", "send out", nullptr));
        label_age->setText(QApplication::translate("MainWindow", "How old are you?", nullptr));
        rd_31->setText(QApplication::translate("MainWindow", "31~40", nullptr));
        rd_41->setText(QApplication::translate("MainWindow", "41\342\206\221", nullptr));
        rd_19->setText(QApplication::translate("MainWindow", "19~30", nullptr));
        rd_7->setText(QApplication::translate("MainWindow", "7~18", nullptr));
        label_movie->setText(QApplication::translate("MainWindow", "Which movies below have you seen?", nullptr));
        cb_Avengers->setText(QApplication::translate("MainWindow", "Avengers: Endgame", nullptr));
        cb_Pirates->setText(QApplication::translate("MainWindow", "Pirates of the Caribbean:Dead Men Tell No Tales", nullptr));
        cb_Passenger->setText(QApplication::translate("MainWindow", "Passenger", nullptr));
        cb_Mission->setText(QApplication::translate("MainWindow", "Mission Impossible: Fallout", nullptr));
        rd_boy->setText(QApplication::translate("MainWindow", "Male", nullptr));
        rd_girl->setText(QApplication::translate("MainWindow", "Female", nullptr));
        label_gender->setText(QApplication::translate("MainWindow", "Are you a boy or a girl?", nullptr));
        label_thanks->setText(QString());
        label->setText(QApplication::translate("MainWindow", "What type of movie do you like the most?", nullptr));
        rd_Action->setText(QApplication::translate("MainWindow", "Action", nullptr));
        rd_Science->setText(QApplication::translate("MainWindow", "Science-fiction", nullptr));
        rd_Love->setText(QApplication::translate("MainWindow", "Love", nullptr));
        rd_Drama->setText(QApplication::translate("MainWindow", "Drama", nullptr));
        rd_Suspense->setText(QApplication::translate("MainWindow", "Suspense", nullptr));
        rd_Fantasy->setText(QApplication::translate("MainWindow", "Fantasy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
