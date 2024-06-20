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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *joint7RButton;
    QPushButton *joint1RButton;
    QLabel *label_9;
    QPushButton *joint5FButton;
    QPushButton *joint2FButton;
    QPushButton *joint7FButton;
    QPushButton *joint6RButton;
    QPushButton *joint3FButton;
    QLabel *label_16;
    QPushButton *joint5RButton;
    QLabel *label_17;
    QPushButton *joint1FButton;
    QPushButton *joint3RButton;
    QPushButton *joint6FButton;
    QPushButton *joint4FButton;
    QPushButton *joint2RButton;
    QLabel *label_12;
    QPushButton *joint4RButton;
    QLabel *label_13;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *joint5TurnLineEdit;
    QPushButton *joint2TurnButton;
    QPushButton *joint5TurnButton;
    QLineEdit *joint1TurnLineEdit;
    QLineEdit *joint2TurnLineEdit;
    QLineEdit *joint6TurnLineEdit;
    QPushButton *joint3TurnButton;
    QPushButton *joint7TurnButton;
    QLineEdit *joint3TurnLineEdit;
    QLineEdit *joint4TurnLineEdit;
    QLineEdit *joint7TurnLineEdit;
    QPushButton *joint6TurnButton;
    QPushButton *joint1TurnButton;
    QPushButton *joint4TurnButton;
    QLabel *label_14;
    QLineEdit *velocityLineEdit_2;
    QSlider *horizontalSlider;
    QPushButton *idButton6;
    QPushButton *idButton5;
    QPushButton *idButton7;
    QPushButton *idButton4;
    QPushButton *idButton2;
    QPushButton *idButton1;
    QPushButton *idButton3;
    QWidget *tab_2;
    QLineEdit *lineEdit6;
    QLineEdit *lineEdit3;
    QPushButton *pushButton5;
    QLineEdit *lineEdit9;
    QPushButton *pushButton14;
    QPushButton *pushButton10;
    QPushButton *pushButton13;
    QLineEdit *lineEdit4;
    QPushButton *pushButton2;
    QLineEdit *lineEdit10;
    QPushButton *pushButton1;
    QLineEdit *lineEdit5;
    QPushButton *pushButton3;
    QLabel *label_015;
    QPushButton *pushButton7;
    QPushButton *pushButton11;
    QLineEdit *lineEdit8;
    QLineEdit *lineEdit2;
    QLineEdit *lineEdit13;
    QLabel *label_013;
    QLabel *label_017;
    QPushButton *pushButton8;
    QComboBox *comboBox;
    QLineEdit *lineEdit1;
    QPushButton *pushButton9;
    QLineEdit *lineEdit7;
    QPushButton *pushButton4;
    QPushButton *pushButton6;
    QPushButton *pushButton_15;
    QGroupBox *messagesGroupBox;
    QPushButton *clearButton;
    QTextBrowser *messagesTextBrowser;
    QGroupBox *deviceGroupBox;
    QPushButton *openDeviceButton;
    QPushButton *enableDeviceButton;
    QPushButton *disableDeviceButton;
    QLabel *label_18;
    QLabel *label_20;
    QLabel *label_22;
    QLabel *label_24;
    QLabel *label_26;
    QLabel *label_28;
    QPushButton *errorButton;
    QPushButton *pushButton15;
    QPushButton *pushButton16;
    QPushButton *pushButton17;
    QPushButton *pushButton18;
    QPushButton *pushButton19;
    QPushButton *pushButton20;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1280, 800);
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget,\n"
"QLabel{\n"
"color:white;\n"
"background-color:rgb(20,50,70);\n"
"font:14px \"\345\256\213\344\275\223\";\n"
"}\n"
"/*TabWidget*/\n"
"QTabWidget{\n"
"/*\347\273\231tabwidget\350\256\276\347\275\256etAttribute(Qt::WA_StyledBackground)*/\n"
"border: 1px solid white;\n"
"background-color:rgb(20,50,70);\n"
"}\n"
"QTabWidget::tab-bar{\n"
"alignment:left;\n"
"left:1px;\n"
"}\n"
"QTabWidget::pane { \n"
"/*background-color:rgb(20,50,70);*/\n"
"border:1px solid white;\n"
"} \n"
"QTabBar{\n"
"/*\345\217\252\346\234\211\346\234\211\346\214\211\351\222\256\347\232\204\345\234\260\346\226\271\346\211\215\346\230\257tabbar\357\274\214\347\251\272\347\231\275\345\244\204\346\230\257tabwidget\347\232\204*/\n"
"background-color:white;\n"
"}\n"
"QTabBar::tab{/*\351\241\265\347\255\276*/\n"
"min-height:28px;\n"
"padding:0 10px;\n"
"border:0;\n"
"margin:1px 1px 0 0;\n"
"background-color:rgb(20,50,70);\n"
"}\n"
"QTabBar::tab:first{\n"
"margin-left:1px;\n"
"}\n"
"QTabBar::tab:hover{\n"
"color:cyan;\n"
"}\n"
"QTabBar::ta"
                        "b:selected{\n"
"background-color: rgb(20, 100, 150);\n"
"}\n"
"QTabBar::tab:selected:hover{\n"
"}\n"
"/*\351\200\211\351\241\271\350\277\207\345\244\232\346\227\266\347\232\204\343\200\202\343\200\202\343\200\202*/\n"
"QTabBar::tear{\n"
"}\n"
"QTabBar::scroller{\n"
"}\n"
"/*\346\214\211\351\222\256*/\n"
"QPushButton{\n"
"border:1px solid white;\n"
"background-color:rgb(200,150,0);\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgb(255,170,0);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(255,255,0);}\n"
"#myTabWidget::tabWidget{\n"
"min-hight: 50px;\n"
"padding:0 20px;}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(250, 0, 811, 741));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        joint7RButton = new QPushButton(tab);
        joint7RButton->setObjectName(QStringLiteral("joint7RButton"));
        joint7RButton->setGeometry(QRect(300, 440, 101, 51));
        joint1RButton = new QPushButton(tab);
        joint1RButton->setObjectName(QStringLiteral("joint1RButton"));
        joint1RButton->setGeometry(QRect(300, 20, 101, 51));
        label_9 = new QLabel(tab);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(50, 450, 91, 31));
        joint5FButton = new QPushButton(tab);
        joint5FButton->setObjectName(QStringLiteral("joint5FButton"));
        joint5FButton->setGeometry(QRect(160, 300, 101, 51));
        joint2FButton = new QPushButton(tab);
        joint2FButton->setObjectName(QStringLiteral("joint2FButton"));
        joint2FButton->setGeometry(QRect(160, 90, 101, 51));
        joint7FButton = new QPushButton(tab);
        joint7FButton->setObjectName(QStringLiteral("joint7FButton"));
        joint7FButton->setGeometry(QRect(160, 440, 101, 51));
        joint6RButton = new QPushButton(tab);
        joint6RButton->setObjectName(QStringLiteral("joint6RButton"));
        joint6RButton->setGeometry(QRect(300, 370, 101, 51));
        joint3FButton = new QPushButton(tab);
        joint3FButton->setObjectName(QStringLiteral("joint3FButton"));
        joint3FButton->setGeometry(QRect(160, 160, 101, 51));
        label_16 = new QLabel(tab);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(50, 100, 67, 31));
        joint5RButton = new QPushButton(tab);
        joint5RButton->setObjectName(QStringLiteral("joint5RButton"));
        joint5RButton->setGeometry(QRect(300, 300, 101, 51));
        label_17 = new QLabel(tab);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(50, 30, 67, 31));
        joint1FButton = new QPushButton(tab);
        joint1FButton->setObjectName(QStringLiteral("joint1FButton"));
        joint1FButton->setGeometry(QRect(160, 20, 101, 51));
        joint3RButton = new QPushButton(tab);
        joint3RButton->setObjectName(QStringLiteral("joint3RButton"));
        joint3RButton->setGeometry(QRect(300, 160, 101, 51));
        joint6FButton = new QPushButton(tab);
        joint6FButton->setObjectName(QStringLiteral("joint6FButton"));
        joint6FButton->setGeometry(QRect(160, 370, 101, 51));
        joint4FButton = new QPushButton(tab);
        joint4FButton->setObjectName(QStringLiteral("joint4FButton"));
        joint4FButton->setGeometry(QRect(160, 230, 101, 51));
        joint2RButton = new QPushButton(tab);
        joint2RButton->setObjectName(QStringLiteral("joint2RButton"));
        joint2RButton->setGeometry(QRect(300, 90, 101, 51));
        label_12 = new QLabel(tab);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(50, 240, 67, 31));
        joint4RButton = new QPushButton(tab);
        joint4RButton->setObjectName(QStringLiteral("joint4RButton"));
        joint4RButton->setGeometry(QRect(300, 230, 101, 51));
        label_13 = new QLabel(tab);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(50, 170, 67, 31));
        label_10 = new QLabel(tab);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(50, 380, 67, 31));
        label_11 = new QLabel(tab);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(50, 310, 61, 31));
        joint5TurnLineEdit = new QLineEdit(tab);
        joint5TurnLineEdit->setObjectName(QStringLiteral("joint5TurnLineEdit"));
        joint5TurnLineEdit->setGeometry(QRect(490, 310, 101, 31));
        joint2TurnButton = new QPushButton(tab);
        joint2TurnButton->setObjectName(QStringLiteral("joint2TurnButton"));
        joint2TurnButton->setGeometry(QRect(630, 90, 91, 51));
        joint5TurnButton = new QPushButton(tab);
        joint5TurnButton->setObjectName(QStringLiteral("joint5TurnButton"));
        joint5TurnButton->setGeometry(QRect(630, 300, 91, 51));
        joint1TurnLineEdit = new QLineEdit(tab);
        joint1TurnLineEdit->setObjectName(QStringLiteral("joint1TurnLineEdit"));
        joint1TurnLineEdit->setGeometry(QRect(490, 30, 101, 31));
        joint2TurnLineEdit = new QLineEdit(tab);
        joint2TurnLineEdit->setObjectName(QStringLiteral("joint2TurnLineEdit"));
        joint2TurnLineEdit->setGeometry(QRect(490, 100, 101, 31));
        joint6TurnLineEdit = new QLineEdit(tab);
        joint6TurnLineEdit->setObjectName(QStringLiteral("joint6TurnLineEdit"));
        joint6TurnLineEdit->setGeometry(QRect(490, 380, 101, 31));
        joint3TurnButton = new QPushButton(tab);
        joint3TurnButton->setObjectName(QStringLiteral("joint3TurnButton"));
        joint3TurnButton->setGeometry(QRect(630, 160, 91, 51));
        joint7TurnButton = new QPushButton(tab);
        joint7TurnButton->setObjectName(QStringLiteral("joint7TurnButton"));
        joint7TurnButton->setGeometry(QRect(630, 440, 91, 51));
        joint3TurnLineEdit = new QLineEdit(tab);
        joint3TurnLineEdit->setObjectName(QStringLiteral("joint3TurnLineEdit"));
        joint3TurnLineEdit->setGeometry(QRect(490, 170, 101, 31));
        joint4TurnLineEdit = new QLineEdit(tab);
        joint4TurnLineEdit->setObjectName(QStringLiteral("joint4TurnLineEdit"));
        joint4TurnLineEdit->setGeometry(QRect(490, 240, 101, 31));
        joint7TurnLineEdit = new QLineEdit(tab);
        joint7TurnLineEdit->setObjectName(QStringLiteral("joint7TurnLineEdit"));
        joint7TurnLineEdit->setGeometry(QRect(490, 450, 101, 31));
        joint6TurnButton = new QPushButton(tab);
        joint6TurnButton->setObjectName(QStringLiteral("joint6TurnButton"));
        joint6TurnButton->setGeometry(QRect(630, 370, 91, 51));
        joint1TurnButton = new QPushButton(tab);
        joint1TurnButton->setObjectName(QStringLiteral("joint1TurnButton"));
        joint1TurnButton->setGeometry(QRect(630, 20, 91, 51));
        joint4TurnButton = new QPushButton(tab);
        joint4TurnButton->setObjectName(QStringLiteral("joint4TurnButton"));
        joint4TurnButton->setGeometry(QRect(630, 230, 91, 51));
        label_14 = new QLabel(tab);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(48, 540, 111, 21));
        velocityLineEdit_2 = new QLineEdit(tab);
        velocityLineEdit_2->setObjectName(QStringLiteral("velocityLineEdit_2"));
        velocityLineEdit_2->setGeometry(QRect(620, 520, 111, 51));
        horizontalSlider = new QSlider(tab);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(168, 530, 391, 51));
        horizontalSlider->setMinimum(0);
        horizontalSlider->setMaximum(2000);
        horizontalSlider->setSingleStep(5);
        horizontalSlider->setPageStep(5);
        horizontalSlider->setValue(500);
        horizontalSlider->setOrientation(Qt::Horizontal);
        idButton6 = new QPushButton(tab);
        idButton6->setObjectName(QStringLiteral("idButton6"));
        idButton6->setGeometry(QRect(450, 620, 51, 51));
        idButton5 = new QPushButton(tab);
        idButton5->setObjectName(QStringLiteral("idButton5"));
        idButton5->setGeometry(QRect(370, 620, 51, 51));
        idButton7 = new QPushButton(tab);
        idButton7->setObjectName(QStringLiteral("idButton7"));
        idButton7->setGeometry(QRect(530, 620, 51, 51));
        idButton4 = new QPushButton(tab);
        idButton4->setObjectName(QStringLiteral("idButton4"));
        idButton4->setGeometry(QRect(290, 620, 51, 51));
        idButton2 = new QPushButton(tab);
        idButton2->setObjectName(QStringLiteral("idButton2"));
        idButton2->setGeometry(QRect(130, 620, 51, 51));
        idButton1 = new QPushButton(tab);
        idButton1->setObjectName(QStringLiteral("idButton1"));
        idButton1->setGeometry(QRect(50, 620, 51, 51));
        idButton3 = new QPushButton(tab);
        idButton3->setObjectName(QStringLiteral("idButton3"));
        idButton3->setGeometry(QRect(210, 620, 51, 51));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        lineEdit6 = new QLineEdit(tab_2);
        lineEdit6->setObjectName(QStringLiteral("lineEdit6"));
        lineEdit6->setGeometry(QRect(250, 410, 113, 31));
        lineEdit3 = new QLineEdit(tab_2);
        lineEdit3->setObjectName(QStringLiteral("lineEdit3"));
        lineEdit3->setGeometry(QRect(250, 180, 113, 31));
        pushButton5 = new QPushButton(tab_2);
        pushButton5->setObjectName(QStringLiteral("pushButton5"));
        pushButton5->setGeometry(QRect(30, 330, 201, 51));
        lineEdit9 = new QLineEdit(tab_2);
        lineEdit9->setObjectName(QStringLiteral("lineEdit9"));
        lineEdit9->setGeometry(QRect(630, 40, 113, 31));
        pushButton14 = new QPushButton(tab_2);
        pushButton14->setObjectName(QStringLiteral("pushButton14"));
        pushButton14->setGeometry(QRect(420, 400, 181, 51));
        pushButton10 = new QPushButton(tab_2);
        pushButton10->setObjectName(QStringLiteral("pushButton10"));
        pushButton10->setGeometry(QRect(420, 100, 181, 51));
        pushButton13 = new QPushButton(tab_2);
        pushButton13->setObjectName(QStringLiteral("pushButton13"));
        pushButton13->setGeometry(QRect(420, 330, 181, 51));
        lineEdit4 = new QLineEdit(tab_2);
        lineEdit4->setObjectName(QStringLiteral("lineEdit4"));
        lineEdit4->setGeometry(QRect(250, 250, 113, 31));
        pushButton2 = new QPushButton(tab_2);
        pushButton2->setObjectName(QStringLiteral("pushButton2"));
        pushButton2->setGeometry(QRect(40, 100, 181, 51));
        lineEdit10 = new QLineEdit(tab_2);
        lineEdit10->setObjectName(QStringLiteral("lineEdit10"));
        lineEdit10->setGeometry(QRect(630, 110, 113, 31));
        pushButton1 = new QPushButton(tab_2);
        pushButton1->setObjectName(QStringLiteral("pushButton1"));
        pushButton1->setGeometry(QRect(40, 30, 181, 51));
        lineEdit5 = new QLineEdit(tab_2);
        lineEdit5->setObjectName(QStringLiteral("lineEdit5"));
        lineEdit5->setGeometry(QRect(250, 340, 113, 31));
        pushButton3 = new QPushButton(tab_2);
        pushButton3->setObjectName(QStringLiteral("pushButton3"));
        pushButton3->setGeometry(QRect(40, 170, 181, 51));
        label_015 = new QLabel(tab_2);
        label_015->setObjectName(QStringLiteral("label_015"));
        label_015->setGeometry(QRect(630, 180, 111, 21));
        pushButton7 = new QPushButton(tab_2);
        pushButton7->setObjectName(QStringLiteral("pushButton7"));
        pushButton7->setGeometry(QRect(20, 490, 221, 51));
        pushButton11 = new QPushButton(tab_2);
        pushButton11->setObjectName(QStringLiteral("pushButton11"));
        pushButton11->setGeometry(QRect(420, 170, 181, 51));
        lineEdit8 = new QLineEdit(tab_2);
        lineEdit8->setObjectName(QStringLiteral("lineEdit8"));
        lineEdit8->setGeometry(QRect(250, 570, 113, 31));
        lineEdit2 = new QLineEdit(tab_2);
        lineEdit2->setObjectName(QStringLiteral("lineEdit2"));
        lineEdit2->setGeometry(QRect(250, 110, 113, 31));
        lineEdit13 = new QLineEdit(tab_2);
        lineEdit13->setObjectName(QStringLiteral("lineEdit13"));
        lineEdit13->setGeometry(QRect(630, 340, 113, 31));
        label_013 = new QLabel(tab_2);
        label_013->setObjectName(QStringLiteral("label_013"));
        label_013->setGeometry(QRect(470, 250, 81, 31));
        label_017 = new QLabel(tab_2);
        label_017->setObjectName(QStringLiteral("label_017"));
        label_017->setGeometry(QRect(630, 400, 111, 31));
        pushButton8 = new QPushButton(tab_2);
        pushButton8->setObjectName(QStringLiteral("pushButton8"));
        pushButton8->setGeometry(QRect(20, 560, 221, 51));
        comboBox = new QComboBox(tab_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(630, 240, 111, 51));
        lineEdit1 = new QLineEdit(tab_2);
        lineEdit1->setObjectName(QStringLiteral("lineEdit1"));
        lineEdit1->setGeometry(QRect(250, 40, 113, 31));
        pushButton9 = new QPushButton(tab_2);
        pushButton9->setObjectName(QStringLiteral("pushButton9"));
        pushButton9->setGeometry(QRect(420, 30, 181, 51));
        lineEdit7 = new QLineEdit(tab_2);
        lineEdit7->setObjectName(QStringLiteral("lineEdit7"));
        lineEdit7->setGeometry(QRect(250, 500, 113, 31));
        pushButton4 = new QPushButton(tab_2);
        pushButton4->setObjectName(QStringLiteral("pushButton4"));
        pushButton4->setGeometry(QRect(40, 240, 181, 51));
        pushButton6 = new QPushButton(tab_2);
        pushButton6->setObjectName(QStringLiteral("pushButton6"));
        pushButton6->setGeometry(QRect(30, 400, 201, 51));
        pushButton_15 = new QPushButton(tab_2);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setGeometry(QRect(500, 530, 181, 81));
        tabWidget->addTab(tab_2, QString());
        messagesGroupBox = new QGroupBox(centralwidget);
        messagesGroupBox->setObjectName(QStringLiteral("messagesGroupBox"));
        messagesGroupBox->setGeometry(QRect(1060, 10, 221, 731));
        clearButton = new QPushButton(messagesGroupBox);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        clearButton->setGeometry(QRect(10, 660, 201, 61));
        messagesTextBrowser = new QTextBrowser(messagesGroupBox);
        messagesTextBrowser->setObjectName(QStringLiteral("messagesTextBrowser"));
        messagesTextBrowser->setGeometry(QRect(10, 30, 201, 621));
        deviceGroupBox = new QGroupBox(centralwidget);
        deviceGroupBox->setObjectName(QStringLiteral("deviceGroupBox"));
        deviceGroupBox->setGeometry(QRect(0, 10, 251, 731));
        openDeviceButton = new QPushButton(deviceGroupBox);
        openDeviceButton->setObjectName(QStringLiteral("openDeviceButton"));
        openDeviceButton->setGeometry(QRect(10, 70, 101, 51));
        enableDeviceButton = new QPushButton(deviceGroupBox);
        enableDeviceButton->setObjectName(QStringLiteral("enableDeviceButton"));
        enableDeviceButton->setGeometry(QRect(130, 70, 101, 51));
        disableDeviceButton = new QPushButton(deviceGroupBox);
        disableDeviceButton->setObjectName(QStringLiteral("disableDeviceButton"));
        disableDeviceButton->setGeometry(QRect(130, 170, 101, 51));
        label_18 = new QLabel(deviceGroupBox);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(140, 310, 81, 31));
        label_20 = new QLabel(deviceGroupBox);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(140, 380, 81, 31));
        label_22 = new QLabel(deviceGroupBox);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(140, 450, 81, 31));
        label_24 = new QLabel(deviceGroupBox);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(140, 520, 81, 31));
        label_26 = new QLabel(deviceGroupBox);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(140, 590, 81, 31));
        label_28 = new QLabel(deviceGroupBox);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(140, 660, 81, 31));
        errorButton = new QPushButton(deviceGroupBox);
        errorButton->setObjectName(QStringLiteral("errorButton"));
        errorButton->setGeometry(QRect(10, 170, 101, 51));
        pushButton15 = new QPushButton(deviceGroupBox);
        pushButton15->setObjectName(QStringLiteral("pushButton15"));
        pushButton15->setGeometry(QRect(10, 300, 121, 51));
        pushButton16 = new QPushButton(deviceGroupBox);
        pushButton16->setObjectName(QStringLiteral("pushButton16"));
        pushButton16->setGeometry(QRect(10, 370, 121, 51));
        pushButton17 = new QPushButton(deviceGroupBox);
        pushButton17->setObjectName(QStringLiteral("pushButton17"));
        pushButton17->setGeometry(QRect(10, 440, 121, 51));
        pushButton18 = new QPushButton(deviceGroupBox);
        pushButton18->setObjectName(QStringLiteral("pushButton18"));
        pushButton18->setGeometry(QRect(10, 510, 121, 51));
        pushButton19 = new QPushButton(deviceGroupBox);
        pushButton19->setObjectName(QStringLiteral("pushButton19"));
        pushButton19->setGeometry(QRect(10, 580, 121, 51));
        pushButton20 = new QPushButton(deviceGroupBox);
        pushButton20->setObjectName(QStringLiteral("pushButton20"));
        pushButton20->setGeometry(QRect(10, 650, 121, 51));
        radioButton_5 = new QRadioButton(deviceGroupBox);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        radioButton_5->setGeometry(QRect(140, 240, 31, 28));
        radioButton_7 = new QRadioButton(deviceGroupBox);
        radioButton_7->setObjectName(QStringLiteral("radioButton_7"));
        radioButton_7->setGeometry(QRect(200, 240, 31, 28));
        radioButton_3 = new QRadioButton(deviceGroupBox);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(80, 240, 31, 28));
        radioButton_6 = new QRadioButton(deviceGroupBox);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));
        radioButton_6->setGeometry(QRect(170, 240, 31, 28));
        radioButton_4 = new QRadioButton(deviceGroupBox);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(110, 240, 31, 28));
        radioButton_2 = new QRadioButton(deviceGroupBox);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(50, 240, 31, 28));
        radioButton = new QRadioButton(deviceGroupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(20, 240, 31, 28));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        joint7RButton->setText(QApplication::translate("MainWindow", "\345\244\271\347\264\247", Q_NULLPTR));
        joint1RButton->setText(QApplication::translate("MainWindow", "\351\200\237\345\272\246\351\200\206\347\202\271\345\212\250", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "\345\244\271\347\210\252", Q_NULLPTR));
        joint5FButton->setText(QApplication::translate("MainWindow", "\351\200\237\345\272\246\346\255\243\347\202\271\345\212\250", Q_NULLPTR));
        joint2FButton->setText(QApplication::translate("MainWindow", "\351\200\237\345\272\246\346\255\243\347\202\271\345\212\250", Q_NULLPTR));
        joint7FButton->setText(QApplication::translate("MainWindow", "\346\235\276\345\274\200", Q_NULLPTR));
        joint6RButton->setText(QApplication::translate("MainWindow", "\351\200\237\345\272\246\351\200\206\347\202\271\345\212\250", Q_NULLPTR));
        joint3FButton->setText(QApplication::translate("MainWindow", "\351\200\237\345\272\246\346\255\243\347\202\271\345\212\250", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "\344\272\214\350\275\264", Q_NULLPTR));
        joint5RButton->setText(QApplication::translate("MainWindow", "\351\200\237\345\272\246\351\200\206\347\202\271\345\212\250", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "\344\270\200\350\275\264", Q_NULLPTR));
        joint1FButton->setText(QApplication::translate("MainWindow", "\351\200\237\345\272\246\346\255\243\347\202\271\345\212\250", Q_NULLPTR));
        joint3RButton->setText(QApplication::translate("MainWindow", "\351\200\237\345\272\246\351\200\206\347\202\271\345\212\250", Q_NULLPTR));
        joint6FButton->setText(QApplication::translate("MainWindow", "\351\200\237\345\272\246\346\255\243\347\202\271\345\212\250", Q_NULLPTR));
        joint4FButton->setText(QApplication::translate("MainWindow", "\351\200\237\345\272\246\346\255\243\347\202\271\345\212\250", Q_NULLPTR));
        joint2RButton->setText(QApplication::translate("MainWindow", "\351\200\237\345\272\246\351\200\206\347\202\271\345\212\250", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "\345\233\233\350\275\264", Q_NULLPTR));
        joint4RButton->setText(QApplication::translate("MainWindow", "\351\200\237\345\272\246\351\200\206\347\202\271\345\212\250", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "\344\270\211\350\275\264", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "\345\205\255\350\275\264", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "\344\272\224\350\275\264", Q_NULLPTR));
        joint2TurnButton->setText(QApplication::translate("MainWindow", "\344\275\215\347\275\256\350\275\254\345\212\250", Q_NULLPTR));
        joint5TurnButton->setText(QApplication::translate("MainWindow", "\344\275\215\347\275\256\350\275\254\345\212\250", Q_NULLPTR));
        joint3TurnButton->setText(QApplication::translate("MainWindow", "\344\275\215\347\275\256\350\275\254\345\212\250", Q_NULLPTR));
        joint7TurnButton->setText(QApplication::translate("MainWindow", "\344\275\215\347\275\256\350\275\254\345\212\250", Q_NULLPTR));
        joint6TurnButton->setText(QApplication::translate("MainWindow", "\344\275\215\347\275\256\350\275\254\345\212\250", Q_NULLPTR));
        joint1TurnButton->setText(QApplication::translate("MainWindow", "\344\275\215\347\275\256\350\275\254\345\212\250", Q_NULLPTR));
        joint4TurnButton->setText(QApplication::translate("MainWindow", "\344\275\215\347\275\256\350\275\254\345\212\250", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "\350\277\220\345\212\250\351\200\237\345\272\246 ", Q_NULLPTR));
        velocityLineEdit_2->setText(QApplication::translate("MainWindow", "500", Q_NULLPTR));
        idButton6->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        idButton5->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        idButton7->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        idButton4->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        idButton2->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        idButton1->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        idButton3->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\350\256\276\345\244\207\346\216\247\345\210\266", Q_NULLPTR));
        pushButton5->setText(QApplication::translate("MainWindow", "\346\234\200\345\244\247\346\255\243\345\220\221\345\212\240\351\200\237\345\272\246(+/-100)", Q_NULLPTR));
        pushButton14->setText(QApplication::translate("MainWindow", "\350\275\257\344\273\266\347\211\210\346\234\254", Q_NULLPTR));
        pushButton10->setText(QApplication::translate("MainWindow", "\346\234\200\345\260\217\350\264\237\347\224\265\346\265\201(+/-100K)", Q_NULLPTR));
        pushButton13->setText(QApplication::translate("MainWindow", "CAN ID(1-127)", Q_NULLPTR));
        pushButton2->setText(QApplication::translate("MainWindow", "\344\275\215\347\275\256\347\216\257\345\276\256\345\210\206(0-10K)", Q_NULLPTR));
        pushButton1->setText(QApplication::translate("MainWindow", "\344\275\215\347\275\256\347\216\257\346\257\224\344\276\213(0-10K)", Q_NULLPTR));
        pushButton3->setText(QApplication::translate("MainWindow", "\344\275\215\347\275\256\347\216\257\346\257\224\344\276\213(0-10K)", Q_NULLPTR));
        label_015->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        pushButton7->setText(QApplication::translate("MainWindow", "\346\234\200\345\244\247\346\255\243\345\220\221\345\205\201\350\256\270\351\200\237\345\272\246(+/-10K)", Q_NULLPTR));
        pushButton11->setText(QApplication::translate("MainWindow", "\346\234\200\345\244\247\347\224\265\346\265\201\347\273\235\345\257\271\345\200\274", Q_NULLPTR));
        label_013->setText(QApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207", Q_NULLPTR));
        label_017->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        pushButton8->setText(QApplication::translate("MainWindow", "\346\234\200\345\260\217\350\264\237\345\220\221\345\205\201\350\256\270\351\200\237\345\272\246(+/-10K)", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1000Kbps", Q_NULLPTR)
        );
        pushButton9->setText(QApplication::translate("MainWindow", "\346\234\200\345\244\247\346\255\243\347\224\265\346\265\201(+/-100K)", Q_NULLPTR));
        pushButton4->setText(QApplication::translate("MainWindow", "\351\200\237\345\272\246\347\216\257\347\247\257\345\210\206(0-10K)", Q_NULLPTR));
        pushButton6->setText(QApplication::translate("MainWindow", "\346\234\200\345\260\217\350\264\237\345\220\221\345\212\240\351\200\237\345\272\246(+/-100)", Q_NULLPTR));
        pushButton_15->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\350\256\276\347\275\256\344\277\241\346\201\257", Q_NULLPTR));
        messagesGroupBox->setTitle(QApplication::translate("MainWindow", "\344\277\241\346\201\257\346\240\217", Q_NULLPTR));
        clearButton->setText(QApplication::translate("MainWindow", "\346\270\205\351\231\244", Q_NULLPTR));
        deviceGroupBox->setTitle(QApplication::translate("MainWindow", "\350\256\276\345\244\207", Q_NULLPTR));
        openDeviceButton->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\350\256\276\345\244\207", Q_NULLPTR));
        enableDeviceButton->setText(QApplication::translate("MainWindow", "\344\275\277\350\203\275\350\256\276\345\244\207", Q_NULLPTR));
        disableDeviceButton->setText(QApplication::translate("MainWindow", "\345\244\261\350\203\275\350\256\276\345\244\207", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_24->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_26->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_28->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        errorButton->setText(QApplication::translate("MainWindow", "\351\224\231\350\257\257\347\212\266\346\200\201", Q_NULLPTR));
        pushButton15->setText(QApplication::translate("MainWindow", "\347\224\265\346\265\201(mA)\357\274\232", Q_NULLPTR));
        pushButton16->setText(QApplication::translate("MainWindow", "\351\200\237\345\272\246(0.01Hz):", Q_NULLPTR));
        pushButton17->setText(QApplication::translate("MainWindow", "\344\275\215\347\275\256(cnt):", Q_NULLPTR));
        pushButton18->setText(QApplication::translate("MainWindow", "\346\257\215\347\272\277\347\224\265\345\216\213(V):", Q_NULLPTR));
        pushButton19->setText(QApplication::translate("MainWindow", "\351\251\261\345\212\250\346\270\251\345\272\246(\302\260C):", Q_NULLPTR));
        pushButton20->setText(QApplication::translate("MainWindow", "\347\224\265\346\234\272\346\270\251\345\272\246(\302\260C):", Q_NULLPTR));
        radioButton_5->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        radioButton_7->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        radioButton_6->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        radioButton_4->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        radioButton->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
