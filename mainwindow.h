#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QComboBox>
#include <QLineEdit>
#include <QPushButton>
#include <QGroupBox>
#include <QListWidget>
#include <QLabel>
#include <QTimer>
#include <QTextBrowser>
#include <QMessageBox>
#include <string>
#include <vector>
#include <QTabWidget>
#include <QRadioButton>


#include "ui_mainwindow.h"
//#include "settings.h"
//#include "ui_settings.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow;}
QT_END_NAMESPACE



class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();



private slots:



    void on_openDeviceButton_clicked();
    void on_enableDeviceButton_clicked();
    void on_disableDeviceButton_clicked();
    void on_errorButton_clicked();
    void on_pushButton15_clicked();
    void on_pushButton16_clicked();
    void on_pushButton17_clicked();
    void on_pushButton18_clicked();
    void on_pushButton19_clicked();
    void on_pushButton20_clicked();

    void sendCommandAndUpdate21Value(int ID);


    void sendCommandAndUpdate15Value(int ID);
    void sendCommandAndUpdate16Value(int ID);
    void sendCommandAndUpdate17Value(int ID);
    void sendCommandAndUpdate18Value(int ID);
    void sendCommandAndUpdate19Value(int ID);
    void sendCommandAndUpdate20Value(int ID);





    void on_joint1FButton_pressed();
    void on_joint1FButton_released();
    void on_joint1RButton_pressed();
    void on_joint1RButton_released();
    void on_joint2FButton_pressed();
    void on_joint2FButton_released();
    void on_joint2RButton_pressed();
    void on_joint2RButton_released();
    void on_joint3FButton_pressed();
    void on_joint3FButton_released();
    void on_joint3RButton_pressed();
    void on_joint3RButton_released();
    void on_joint4FButton_pressed();
    void on_joint4FButton_released();
    void on_joint4RButton_pressed();
    void on_joint4RButton_released();
    void on_joint5FButton_pressed();
    void on_joint5FButton_released();
    void on_joint5RButton_pressed();
    void on_joint5RButton_released();
    void on_joint6FButton_pressed();
    void on_joint6FButton_released();
    void on_joint6RButton_pressed();
    void on_joint6RButton_released();
    void on_joint7FButton_pressed();
    void on_joint7FButton_released();
    void on_joint7RButton_pressed();
    void on_joint7RButton_released();
    /*void on_joint7FButton_2_pressed();
    void on_joint7FButton_2_released();
    void on_joint7RButton_2_pressed();
    void on_joint7RButton_2_released();*/

    void updateLineEditFromSlider(int value);
    void updateSliderFromLineEdit(const QString &text);





  //  void on_jointPositionModeButton_clicked();
    void on_joint1TurnButton_clicked();
    void on_joint2TurnButton_clicked();
    void on_joint3TurnButton_clicked();
    void on_joint4TurnButton_clicked();
    void on_joint5TurnButton_clicked();
    void on_joint6TurnButton_clicked();
    void on_joint7TurnButton_clicked();





    void on_clearButton_clicked();


    void on_idButton1_clicked();
    void on_idButton2_clicked();
    void on_idButton3_clicked();
    void on_idButton4_clicked();
    void on_idButton5_clicked();
    void on_idButton6_clicked();
    void on_idButton7_clicked();
    void on_pushButton1_clicked();
    void on_pushButton2_clicked();
    void on_pushButton3_clicked();
    void on_pushButton4_clicked();
    void on_pushButton5_clicked();
    void on_pushButton6_clicked();
    void on_pushButton7_clicked();
    void on_pushButton8_clicked();
    void on_pushButton9_clicked();
    void on_pushButton10_clicked();
    void on_pushButton11_clicked();
    //void on_pushButton12_clicked();
    void on_pushButton13_clicked();
    void on_pushButton14_clicked();
    void sendCommandAndUpdate1Value(int ID);
    void sendCommandAndUpdate1Value1(int ID);
    void sendCommandAndUpdate2Value(int ID);
    void sendCommandAndUpdate2Value2(int ID);
    void sendCommandAndUpdate3Value(int ID);
    void sendCommandAndUpdate3Value3(int ID);
    void sendCommandAndUpdate4Value(int ID);
    void sendCommandAndUpdate4Value4(int ID);
    void sendCommandAndUpdate5Value(int ID);
    void sendCommandAndUpdate5Value5(int ID);
    void sendCommandAndUpdate6Value(int ID);
    void sendCommandAndUpdate6Value6(int ID);
    void sendCommandAndUpdate7Value(int ID);
    void sendCommandAndUpdate7Value7(int ID);
    void sendCommandAndUpdate8Value(int ID);
    void sendCommandAndUpdate8Value8(int ID);
    void sendCommandAndUpdate9Value(int ID);
    void sendCommandAndUpdate9Value9(int ID);
    void sendCommandAndUpdate10Value(int ID);
    void sendCommandAndUpdate10Value10(int ID);
    void sendCommandAndUpdate11Value(int ID);
    //void sendCommandAndUpdate12Value(int ID);
    //void sendCommandAndUpdate12Value12(int ID);
    void sendCommandAndUpdate13Value(int ID);
    void sendCommandAndUpdate13Value13(int ID);
    void sendCommandAndUpdate14Value(int ID);
    void on_pushButton_15_clicked();




private:

    Ui::MainWindow *ui;


    int ID;

    QButtonGroup *radioButtonGroup;

    QRadioButton* radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;

    //static std::atomic<int> readValue;

    QTimer *timer1;
    QTimer *timer2;
    QTimer *timer3;
    QTimer *timer4;
    QTimer *timer5;
    QTimer *timer6;
    QTimer *timer7;
    QTimer *timer8;
    QTimer *timer9;
    QTimer *timer10;
    QTimer *timer11;
    //QTimer *timer12;
    QTimer *timer13;
    QTimer *timer14;
    QTimer *timer15;
    QTimer *timer16;
    QTimer *timer17;
    QTimer *timer18;
    QTimer *timer19;
    QTimer *timer20;

    QTimer *timer21;





    QGroupBox* deviceGroupBox;


    QPushButton* openDeviceButton;
    QPushButton* enableDeviceButton;
    QPushButton* disableDeviceButton;
    QPushButton* errorButton;  
    QPushButton* pushButton15;
    QPushButton* pushButton16;
    QPushButton* pushButton17;
    QPushButton* pushButton18;
    QPushButton* pushButton19;
    QPushButton* pushButton20;




    QPushButton* joint1FButton;
    QPushButton* joint1RButton;
    QPushButton* joint2FButton;
    QPushButton* joint2RButton;
    QPushButton* joint3FButton;
    QPushButton* joint3RButton;
    QPushButton* joint4FButton;
    QPushButton* joint4RButton;
    QPushButton* joint5FButton;
    QPushButton* joint5RButton;
    QPushButton* joint6FButton;
    QPushButton* joint6RButton;
    QPushButton* joint7FButton;
    QPushButton* joint7RButton;
    //QPushButton* joint7FButton_2;
    //QPushButton* joint7RButton_2;

   // QLineEdit* currentLineEdit_2;
    QLineEdit* velocityLineEdit_2;



    QLineEdit* joint1TurnLineEdit;
    QLineEdit* joint2TurnLineEdit;
    QLineEdit* joint3TurnLineEdit;
    QLineEdit* joint4TurnLineEdit;
    QLineEdit* joint5TurnLineEdit;
    QLineEdit* joint6TurnLineEdit;
    QLineEdit* joint7TurnLineEdit;
    QPushButton* joint1TurnButton;
    QPushButton* joint2TurnButton;
    QPushButton* joint3TurnButton;
    QPushButton* joint4TurnButton;
    QPushButton* joint5TurnButton;
    QPushButton* joint6TurnButton;
    QPushButton* joint7TurnButton;




    QGroupBox* messagesGroupBox;
    QTextBrowser* messagesTextBrowser;
    QPushButton* clearButton;



    QPushButton* idButton1;
    QPushButton* idButton2;
    QPushButton* idButton3;
    QPushButton* idButton4;
    QPushButton* idButton5;
    QPushButton* idButton6;
    QPushButton* idButton7;
    QPushButton* pushButton1;
    QPushButton* pushButton2;
    QPushButton* pushButton3;
    QPushButton* pushButton4;
    QPushButton* pushButton5;
    QPushButton* pushButton6;
    QPushButton* pushButton7;
    QPushButton* pushButton8;
    QPushButton* pushButton9;
    QPushButton* pushButton10;
    QPushButton* pushButton11;
    //QPushButton* pushButton12;
    QPushButton* pushButton13;
    QPushButton* pushButton14;

    QLabel* label_013;

    QLabel* label_015;

    QLabel* label_017;
    QLineEdit* lineEdit1;
    QLineEdit* lineEdit2;
    QLineEdit* lineEdit3;
    QLineEdit* lineEdit4;
    QLineEdit* lineEdit5;
    QLineEdit* lineEdit6;
    QLineEdit* lineEdit7;
    QLineEdit* lineEdit8;
    QLineEdit* lineEdit9;
    QLineEdit* lineEdit10;
    //QLineEdit* lineEdit12;
    QLineEdit* lineEdit13;
    QComboBox* comboBox;
    QPushButton* pushButton_15;



};
#endif // MAINWINDOW_H
