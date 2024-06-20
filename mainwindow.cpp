#include "mainwindow.h"
#include "master.h"
#include "canfestival_master.h"
#include "ui_mainwindow.h"
#include "master.h"
#include <QDebug>
#include <QDialog>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QListWidget>
#include <vector>
#include <string>
#include <QObject>
#include <QMetaObject>
#include <QThread>
#include <QTabWidget>
#include <QRadioButton>
#include <QButtonGroup>
#include "sharedvariables.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);

    //yin cang tab_2
    /*int tabIndex= ui->tabWidget->indexOf(ui->tab_2);
    if (tabIndex != -1) {
        ui->tabWidget->removeTab(tabIndex);
    }*/

    setWindowState(Qt::WindowMaximized);



    char* LibraryPath = (char*)"/usr/local/lib/libcanfestival_can_socket.so";

      LoadCanDriver(LibraryPath);

      radioButtonGroup = new QButtonGroup(this);
      radioButtonGroup->setExclusive(false);
      radioButtonGroup->addButton(ui->radioButton);
      radioButtonGroup->addButton(ui->radioButton_2);
      radioButtonGroup->addButton(ui->radioButton_3);
      radioButtonGroup->addButton(ui->radioButton_4);
      radioButtonGroup->addButton(ui->radioButton_5);
      radioButtonGroup->addButton(ui->radioButton_6);
      radioButtonGroup->addButton(ui->radioButton_7);

      ui->radioButton->setChecked(true);
      ui->radioButton_2->setChecked(true);
      ui->radioButton_3->setChecked(true);
      ui->radioButton_4->setChecked(true);
      ui->radioButton_5->setChecked(true);
      ui->radioButton_6->setChecked(true);
      ui->radioButton_7->setChecked(true);


      timer1 = new QTimer(this);
      timer2 = new QTimer(this);
      timer3 = new QTimer(this);
      timer4 = new QTimer(this);
      timer5 = new QTimer(this);
      timer6 = new QTimer(this);
      timer7 = new QTimer(this);
      timer8 = new QTimer(this);
      timer9 = new QTimer(this);
      timer10 = new QTimer(this);
      timer11 = new QTimer(this);
      //timer12 = new QTimer(this);
      timer13 = new QTimer(this);
      timer14 = new QTimer(this);
      timer15 = new QTimer(this);
      timer16 = new QTimer(this);
      timer17 = new QTimer(this);
      timer18 = new QTimer(this);
      timer19 = new QTimer(this);
      timer20 = new QTimer(this);
      timer21 = new QTimer(this);
      connect(timer1, &QTimer::timeout, this, [this](){sendCommandAndUpdate1Value(ID);});
      connect(timer2, &QTimer::timeout, this, [this](){sendCommandAndUpdate2Value(ID);});
      connect(timer3, &QTimer::timeout, this, [this](){sendCommandAndUpdate3Value(ID);});
      connect(timer4, &QTimer::timeout, this, [this](){sendCommandAndUpdate4Value(ID);});
      connect(timer5, &QTimer::timeout, this, [this](){sendCommandAndUpdate5Value(ID);});
      connect(timer6, &QTimer::timeout, this, [this](){sendCommandAndUpdate6Value(ID);});
      connect(timer7, &QTimer::timeout, this, [this](){sendCommandAndUpdate7Value(ID);});
      connect(timer8, &QTimer::timeout, this, [this](){sendCommandAndUpdate8Value(ID);});
      connect(timer9, &QTimer::timeout, this, [this](){sendCommandAndUpdate9Value(ID);});
      connect(timer10, &QTimer::timeout, this, [this](){sendCommandAndUpdate10Value(ID);});
      connect(timer11, &QTimer::timeout, this, [this](){sendCommandAndUpdate11Value(ID);});
      //connect(timer12, &QTimer::timeout, this, [this](){sendCommandAndUpdate12Value(ID);});
      connect(timer13, &QTimer::timeout, this, [this](){sendCommandAndUpdate13Value(ID);});
      connect(timer14, &QTimer::timeout, this, [this](){sendCommandAndUpdate14Value(ID);});
      connect(timer15, &QTimer::timeout, this, [this](){sendCommandAndUpdate15Value(ID);});
      connect(timer16, &QTimer::timeout, this, [this](){sendCommandAndUpdate16Value(ID);});
      connect(timer17, &QTimer::timeout, this, [this](){sendCommandAndUpdate17Value(ID);});
      connect(timer18, &QTimer::timeout, this, [this](){sendCommandAndUpdate18Value(ID);});
      connect(timer19, &QTimer::timeout, this, [this](){sendCommandAndUpdate19Value(ID);});
      connect(timer20, &QTimer::timeout, this, [this](){sendCommandAndUpdate20Value(ID);});
     // connect(timer21, &QTimer::timeout, this, [this](){sendCommandAndUpdate21Value(ID);});

     //createDeviceGroupBox();

      openDeviceButton = new QPushButton;
      enableDeviceButton = new QPushButton;
      disableDeviceButton = new QPushButton;
      errorButton = new QPushButton;
      pushButton15 = new QPushButton;
      pushButton16 = new QPushButton;
      pushButton17 = new QPushButton;
      pushButton18 = new QPushButton;
      pushButton19 = new QPushButton;
      pushButton20 = new QPushButton;


      radioButton = new QRadioButton;
      radioButton_2 = new QRadioButton;
      radioButton_3 = new QRadioButton;
      radioButton_4 = new QRadioButton;
      radioButton_5 = new QRadioButton;
      radioButton_6 = new QRadioButton;
      radioButton_7 = new QRadioButton;



     //createJointControlGroupBox();

/*    joint1CCWButton = new QPushButton;
      joint1CWButton = new QPushButton;
      joint1StopButton = new QPushButton;
      joint2CWButton = new QPushButton;
      joint2CCWButton = new QPushButton;
      joint2StopButton = new QPushButton;
      joint3CWButton = new QPushButton;
      joint3CCWButton = new QPushButton;
      joint3StopButton = new QPushButton;
      joint4CWButton = new QPushButton;
      joint4CCWButton = new QPushButton;
      joint4StopButton = new QPushButton;
      joint5CWButton = new QPushButton;
      joint5CCWButton = new QPushButton;
      joint5StopButton = new QPushButton;
      joint6CWButton = new QPushButton;
      joint6CCWButton = new QPushButton;
      joint6StopButton = new QPushButton;
      joint7CWButton = new QPushButton;
      joint7CCWButton = new QPushButton;
      joint7StopButton = new QPushButton;
      jointAllStopButton = new QPushButton;
      joint7CWButton_2 = new QPushButton;
      joint7CCWButton_2 = new QPushButton;
      joint7StopButton_2 = new QPushButton;
      jointAllStopButton_2 = new QPushButton;
      jointAllStopButton_3 = new QPushButton;*/

      joint1FButton = new QPushButton;
      joint1RButton = new QPushButton;
      joint2FButton = new QPushButton;
      joint2RButton = new QPushButton;
      joint3FButton = new QPushButton;
      joint3RButton = new QPushButton;
      joint4FButton = new QPushButton;
      joint4RButton = new QPushButton;
      joint5FButton = new QPushButton;
      joint5RButton = new QPushButton;
      joint6FButton = new QPushButton;
      joint6RButton = new QPushButton;
      joint7FButton = new QPushButton;
      joint7RButton = new QPushButton;
      //joint7FButton_2 = new QPushButton;
      //joint7RButton_2 = new QPushButton;





      //createJoint2ControlGroupBox();
     //jointControl2GroupBox = new QGroupBox;
     //jointPositionModeButton = new QPushButton;
     joint1TurnButton = new QPushButton;
     joint2TurnButton = new QPushButton;
     joint3TurnButton = new QPushButton;
     joint4TurnButton = new QPushButton;
     joint5TurnButton = new QPushButton;
     joint6TurnButton = new QPushButton;
     joint7TurnButton = new QPushButton;

     joint1TurnLineEdit = new QLineEdit;
     joint2TurnLineEdit = new QLineEdit;
     joint3TurnLineEdit = new QLineEdit;
     joint4TurnLineEdit = new QLineEdit;
     joint5TurnLineEdit = new QLineEdit;
     joint6TurnLineEdit = new QLineEdit;
     joint7TurnLineEdit = new QLineEdit;







      //createMessagesGroupBox();
      messagesGroupBox = new QGroupBox;
      messagesTextBrowser = new QTextBrowser;

      messagesTextBrowser->setReadOnly(true);

      clearButton = new QPushButton;




     //createSettingsGroupBox();
      idButton1 = new QPushButton;
      idButton2 = new QPushButton;
      idButton3 = new QPushButton;
      idButton4 = new QPushButton;
      idButton5 = new QPushButton;
      idButton6 = new QPushButton;
      idButton7 = new QPushButton;
      //settingsGroupBox = new QGroupBox;

      label_013 = new QLabel;

      label_015 = new QLabel;

      label_017 = new QLabel;
      lineEdit1 = new QLineEdit;
      lineEdit2 = new QLineEdit;
      lineEdit3 = new QLineEdit;
      lineEdit4 = new QLineEdit;
      lineEdit5 = new QLineEdit;
      lineEdit6 = new QLineEdit;
      lineEdit7 = new QLineEdit;
      lineEdit8 = new QLineEdit;
      lineEdit9 = new QLineEdit;
      lineEdit10 = new QLineEdit;
      //lineEdit12 = new QLineEdit;
      lineEdit13 = new QLineEdit;
      comboBox = new QComboBox;

      pushButton1 = new QPushButton;
      pushButton2 = new QPushButton;
      pushButton3 = new QPushButton;
      pushButton4 = new QPushButton;
      pushButton5 = new QPushButton;
      pushButton6 = new QPushButton;
      pushButton7 = new QPushButton;
      pushButton8 = new QPushButton;
      pushButton9 = new QPushButton;
      pushButton10 = new QPushButton;
      pushButton11 = new QPushButton;
      //pushButton12 = new QPushButton;
      pushButton13 = new QPushButton;
      pushButton14 = new QPushButton;
      pushButton_15 = new QPushButton;





     //联动速度电流滑轮和文本的同步
  //   connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), this, SLOT(updateLineEditFromSlider()));


   //  connect(ui->horizontalSlider_2, SIGNAL(valueChanged(int)), this, SLOT(updateLineEditFromSlider()));


     connect(ui->velocityLineEdit_2, &QLineEdit::textChanged, this, &MainWindow::updateSliderFromLineEdit);


     //connect(ui->currentLineEdit_2, &QLineEdit::textChanged, this, &MainWindow::updateSliderFromLineEdit);


     connect(ui->horizontalSlider, &QSlider::valueChanged, this, &MainWindow::updateLineEditFromSlider);


     //connect(ui->horizontalSlider_2, &QSlider::valueChanged, this, &MainWindow::updateLineEditFromSlider);





}

MainWindow::~MainWindow()
{
    delete ui;


}



/*********************************************************Main**********************************************************/


/********************************************************************************************************************************/
/**************************************************************A***************************************************************/
/********************************************************************************************************************************/

 int readValue = 0;

//打开设备
void MainWindow::on_openDeviceButton_clicked() {

   qDebug()<<"start start";
   if(InitCANdevice((char*)"0" , 1000000,  0x00) < 0)
   {
       printf("\nInitCANdevice() failed, exiting.\n");
       ui->messagesTextBrowser->append("未找到设备");

   }
   else
   {
       printf("\n.open canopen sucess\n");
       qDebug()<<"open canopen sucess";
       ui->messagesTextBrowser->append("打开设备成功");
   }






}

//使能
void MainWindow::on_enableDeviceButton_clicked()
{
    qDebug() << "on_enableDeviceButton_clicked";



    if (ui->radioButton->isChecked())
    {
        qDebug() << "for radiobutton";
        uint16_t enableCommand_0x601[][9] =
        {
            {0x601,0x2F,0x60,0x60,0x00,0x08,0x00,0x00,0x00},
            {0x601,0x2B,0x40,0x60,0x00,0x1F,0x00,0x00,0x00},
        };

        int commandCount = sizeof(enableCommand_0x601) / sizeof(enableCommand_0x601[0]);

        for (int i = 0; i < commandCount; i++)
        {
            printf("canopen_send_sdo \n");
            canopen_send_sdo(enableCommand_0x601[i]);
            QThread::msleep(20);
        }

    }

     if (ui->radioButton_2->isChecked())
    {
        qDebug() << "for radiobutton_2";
        uint16_t enableCommand_0x602[][9] =
        {
            {0x602,0x2F,0x60,0x60,0x00,0x08,0x00,0x00,0x00},
            {0x602,0x2B,0x40,0x60,0x00,0x1F,0x00,0x00,0x00},
        };

        int commandCount = sizeof(enableCommand_0x602) / sizeof(enableCommand_0x602[0]);

        for (int i = 0; i < commandCount; i++)
        {
            printf("canopen_send_sdo \n");
            canopen_send_sdo(enableCommand_0x602[i]);
            QThread::msleep(20);
        }
    }


     if (ui->radioButton_3->isChecked())
    {
        qDebug() << "for radiobutton_3";
        uint16_t enableCommand_0x603[][9] =
        {
            {0x603,0x2F,0x60,0x60,0x00,0x08,0x00,0x00,0x00},
            {0x603,0x2B,0x40,0x60,0x00,0x1F,0x00,0x00,0x00},
        };

        int commandCount = sizeof(enableCommand_0x603) / sizeof(enableCommand_0x603[0]);

        for (int i = 0; i < commandCount; i++)
        {
            printf("canopen_send_sdo \n");
            canopen_send_sdo(enableCommand_0x603[i]);
            QThread::msleep(20);
        }
    }


     if (ui->radioButton_4->isChecked())
    {
        qDebug() << "for radiobutton_4";
        uint16_t enableCommand_0x604[][9] =
        {
            {0x604,0x2F,0x60,0x60,0x00,0x08,0x00,0x00,0x00},
            {0x604,0x2B,0x40,0x60,0x00,0x1F,0x00,0x00,0x00},
        };

        int commandCount = sizeof(enableCommand_0x604) / sizeof(enableCommand_0x604[0]);

        for (int i = 0; i < commandCount; i++)
        {
            printf("canopen_send_sdo \n");
            canopen_send_sdo(enableCommand_0x604[i]);
            QThread::msleep(20);
        }
    }


    if (ui->radioButton_5->isChecked())
    {
        qDebug() << "for radiobutton_5";
        uint16_t enableCommand_0x605[][9] =
        {
            {0x605,0x2F,0x60,0x60,0x00,0x08,0x00,0x00,0x00},
            {0x605,0x2B,0x40,0x60,0x00,0x1F,0x00,0x00,0x00},
        };

        int commandCount = sizeof(enableCommand_0x605) / sizeof(enableCommand_0x605[0]);

        for (int i = 0; i < commandCount; i++)
        {
            printf("canopen_send_sdo \n");
            canopen_send_sdo(enableCommand_0x605[i]);
            QThread::msleep(20);
        }
    }


    if (ui->radioButton_6->isChecked())
    {
        qDebug() << "for radiobutton_6";
        uint16_t enableCommand_0x606[][9] =
        {
            {0x606,0x2F,0x60,0x60,0x00,0x08,0x00,0x00,0x00},
            {0x606,0x2B,0x40,0x60,0x00,0x1F,0x00,0x00,0x00},
        };

        int commandCount = sizeof(enableCommand_0x606) / sizeof(enableCommand_0x606[0]);

        for (int i = 0; i < commandCount; i++)
        {
            printf("canopen_send_sdo \n");
            canopen_send_sdo(enableCommand_0x606[i]);
            QThread::msleep(20);
        }
    }


    if (ui->radioButton_7->isChecked())
    {
        qDebug() << "for radiobutton_7";
        uint16_t enableCommand_0x607[][9] =
        {
            {0x607,0x2F,0x60,0x60,0x00,0x08,0x00,0x00,0x00},
            {0x607,0x2B,0x40,0x60,0x00,0x1F,0x00,0x00,0x00},
        };

        int commandCount = sizeof(enableCommand_0x607) / sizeof(enableCommand_0x607[0]);

        for (int i = 0; i < commandCount; i++)
        {
            printf("canopen_send_sdo \n");
            canopen_send_sdo(enableCommand_0x607[i]);
            QThread::msleep(20);
        }
    }

    ui->messagesTextBrowser->append("使能设备成功");
}


//失能
void MainWindow::on_disableDeviceButton_clicked()
{

    qDebug()<<"on_disableDeviceButton_clicked";


   /* uint16_t disableDevice_sdo[][9]= // w:speed ctrl; ok
    {

           {0x601,0x2B,0x40,0x60,0x00,0x06,0x00,0x00,0x00},
           {0x602,0x2B,0x40,0x60,0x00,0x06,0x00,0x00,0x00},
           {0x603,0x2B,0x40,0x60,0x00,0x06,0x00,0x00,0x00},
           {0x604,0x2B,0x40,0x60,0x00,0x06,0x00,0x00,0x00},
           {0x605,0x2B,0x40,0x60,0x00,0x06,0x00,0x00,0x00},
           {0x606,0x2B,0x40,0x60,0x00,0x06,0x00,0x00,0x00},
           {0x607,0x2B,0x40,0x60,0x00,0x06,0x00,0x00,0x00},

    };
    for (int i=0;i<7;i++)
    {
        printf(" canopen_send_sdo \n");
        canopen_send_sdo(disableDevice_sdo[i]);
        QThread::msleep(20);
    }*/

    if (ui->radioButton->isChecked())
    {
        qDebug() << "for radiobutton";
        uint16_t disableCommand_0x601[][9] =
        {
            {0x601,0x2B,0x40,0x60,0x00,0x06,0x00,0x00,0x00},

        };

        int commandCount = sizeof(disableCommand_0x601) / sizeof(disableCommand_0x601[0]);

        for (int i = 0; i < commandCount; i++)
        {
            printf("canopen_send_sdo \n");
            canopen_send_sdo(disableCommand_0x601[i]);
            QThread::msleep(20);
        }

    }

     if (ui->radioButton_2->isChecked())
    {
        qDebug() << "for radiobutton_2";
        uint16_t disableCommand_0x602[][9] =
        {
            {0x602,0x2B,0x40,0x60,0x00,0x06,0x00,0x00,0x00},
        };

        int commandCount = sizeof(disableCommand_0x602) / sizeof(disableCommand_0x602[0]);

        for (int i = 0; i < commandCount; i++)
        {
            printf("canopen_send_sdo \n");
            canopen_send_sdo(disableCommand_0x602[i]);
            QThread::msleep(20);
        }
    }


     if (ui->radioButton_3->isChecked())
    {
        qDebug() << "for radiobutton_3";
        uint16_t disableCommand_0x603[][9] =
        {
            {0x603,0x2B,0x40,0x60,0x00,0x06,0x00,0x00,0x00},
        };

        int commandCount = sizeof(disableCommand_0x603) / sizeof(disableCommand_0x603[0]);

        for (int i = 0; i < commandCount; i++)
        {
            printf("canopen_send_sdo \n");
            canopen_send_sdo(disableCommand_0x603[i]);
            QThread::msleep(20);
        }
    }


     if (ui->radioButton_4->isChecked())
    {
        qDebug() << "for radiobutton_4";
        uint16_t disableCommand_0x604[][9] =
        {
            {0x604,0x2B,0x40,0x60,0x00,0x06,0x00,0x00,0x00},
        };

        int commandCount = sizeof(disableCommand_0x604) / sizeof(disableCommand_0x604[0]);

        for (int i = 0; i < commandCount; i++)
        {
            printf("canopen_send_sdo \n");
            canopen_send_sdo(disableCommand_0x604[i]);
            QThread::msleep(20);
        }
    }


    if (ui->radioButton_5->isChecked())
    {
        qDebug() << "for radiobutton_5";
        uint16_t disableCommand_0x605[][9] =
        {
            {0x605,0x2B,0x40,0x60,0x00,0x06,0x00,0x00,0x00},
        };

        int commandCount = sizeof(disableCommand_0x605) / sizeof(disableCommand_0x605[0]);

        for (int i = 0; i < commandCount; i++)
        {
            printf("canopen_send_sdo \n");
            canopen_send_sdo(disableCommand_0x605[i]);
            QThread::msleep(20);
        }
    }


    if (ui->radioButton_6->isChecked())
    {
        qDebug() << "for radiobutton_6";
        uint16_t disableCommand_0x606[][9] =
        {
            {0x606,0x2B,0x40,0x60,0x00,0x06,0x00,0x00,0x00},
        };

        int commandCount = sizeof(disableCommand_0x606) / sizeof(disableCommand_0x606[0]);

        for (int i = 0; i < commandCount; i++)
        {
            printf("canopen_send_sdo \n");
            canopen_send_sdo(disableCommand_0x606[i]);
            QThread::msleep(20);
        }
    }


    if (ui->radioButton_7->isChecked())
    {
        qDebug() << "for radiobutton_7";
        uint16_t disableCommand_0x607[][9] =
        {
            {0x607,0x2B,0x40,0x60,0x00,0x06,0x00,0x00,0x00},
        };

        int commandCount = sizeof(disableCommand_0x607) / sizeof(disableCommand_0x607[0]);

        for (int i = 0; i < commandCount; i++)
        {
            printf("canopen_send_sdo \n");
            canopen_send_sdo(disableCommand_0x607[i]);
            QThread::msleep(20);
        }
    }


ui->messagesTextBrowser->append("失能设备成功");




}


void MainWindow::on_errorButton_clicked()
{
    sendCommandAndUpdate21Value(ID);

    timer21->start(5);
}


    //错误状态
    void MainWindow::sendCommandAndUpdate21Value(int ID)
    {

        qDebug()<<"on_errorButton_clicked";


        uint16_t error_sdo[][9]= // w:speed ctrl; ok
        {

                {0x600+ID,0x40,0x3F,0x60,0x00,0x00,0x00,0x00,0x00},


        };



            printf(" canopen_send_sdo \n");
            ReadDeviceEntry(error_sdo[0]);
        QThread::msleep(5000);

        int16_t errorData = static_cast<int16_t>(readValue);

        if (errorData == -1)
        {
            ui->messagesTextBrowser->append("无反馈，设备未连接!");
        }

        else if (errorData == 0)
        {
            ui->messagesTextBrowser->append("电机工作正常。");
        }
       // timer21->stop();
        else if (errorData == 1)
        {
            ui->messagesTextBrowser->append("出现过压错误。");
        }
      //  timer21->stop();
        else if (errorData == 2)
        {
            ui->messagesTextBrowser->append("出现欠压错误。");
        }
     //   timer21->stop();
        else if (errorData == 4)
        {
            ui->messagesTextBrowser->append("出现启动错误。");
        }
      //  timer21->stop();
        else if (errorData == 5)
        {
            ui->messagesTextBrowser->append("出现速度反馈错误。");
        }
      //  timer21->stop();
        else if (errorData == 6)
        {
            ui->messagesTextBrowser->append("出现过流错误。");
        }
       // timer21->stop();
        else if (errorData == 10)
        {
            ui->messagesTextBrowser->append("出现编码器通讯错误。");
        }
        //timer21->stop();
        else if (errorData == 11)
        {
            ui->messagesTextBrowser->append("电机温度过高。");
        }
       // timer21->stop();
        else if (errorData == 12)
        {
            ui->messagesTextBrowser->append("电路板温度过高。");
        }
        timer21->stop();


    }



//std::atomic<int> MainWindow::readValue(0);

//接收函数
void readSDO(UNS32 data)
{

    readValue = data;
    printf("\ntest data : %x\n", data);

}

//电流信息按钮
void MainWindow::on_pushButton15_clicked()
{

    sendCommandAndUpdate15Value(ID);

    timer15->start(5);

}

//电流信息
void MainWindow::sendCommandAndUpdate15Value(int ID)
{

    uint16_t sendCommandAndUpdate150Value_sdo[][9]=
    {
      {0x600+ID,0x40,0x78,0x60,0x00,0x00,0x00,0x00,0x00},

    };

            printf(" canopen_send_sdo \n");
            //读取设备数据
            ReadDeviceEntry(sendCommandAndUpdate150Value_sdo[0]);

            int current = static_cast<int16_t>(readValue);

            QString currentText = QString::number(current);



            ui->label_18->setText(currentText);

            timer15->stop();

}

//速度信息按钮
void MainWindow::on_pushButton16_clicked()
{
    sendCommandAndUpdate16Value(ID);
    timer16->start(5);
}

//速度信息
void MainWindow::sendCommandAndUpdate16Value(int ID)
{

    uint16_t sendCommandAndUpdate160Value_sdo[][9]=
    {
      {0x600+ID,0x40,0x6C,0x60,0x00,0x00,0x00,0x00,0x00},
    };

            printf(" canopen_send_sdo \n");

            //读取设备数据
            ReadDeviceEntry(sendCommandAndUpdate160Value_sdo[0]);

            int32_t value = static_cast<int32_t>(readValue);

            double velocity = static_cast<double>(value) / 2.0;

            QString velocityText = QString::number(velocity / 2.0, 'f', 2);

            ui->label_20->setText(velocityText);
            timer16->stop();



}

//位置信息按钮
void MainWindow::on_pushButton17_clicked()
{
    sendCommandAndUpdate17Value(ID);
    timer17->start(5);
}

//位置信息
void MainWindow::sendCommandAndUpdate17Value(int ID)
{

    uint16_t sendCommandAndUpdate170Value_sdo[][9]=
    {
      {0x600+ID,0x40,0x64,0x60,0x00,0x00,0x00,0x00,0x00},
    };

            printf(" canopen_send_sdo \n");
            //读取设备数据
            ReadDeviceEntry(sendCommandAndUpdate170Value_sdo[0]);

            int32_t value = static_cast<int32_t>(readValue);

            int angle = (value*360) / (100*65536);

            QString angleText = QString::number(angle);

            ui->label_22->setText(angleText);
            timer17->stop();


}

//电压信息按钮
void MainWindow::on_pushButton18_clicked()
{
    sendCommandAndUpdate18Value(ID);
    timer18->start(5);
}

//电压信息
void MainWindow::sendCommandAndUpdate18Value(int ID)
{

    uint16_t sendCommandAndUpdate180Value_sdo[][9]=
    {
      {0x600+ID,0x40,0x0E,0x20,0x00,0x00,0x00,0x00,0x00},
    };

            printf(" canopen_send_sdo \n");
            //读取设备数据
            ReadDeviceEntry(sendCommandAndUpdate180Value_sdo[0]);

            QString Value = QString::number(readValue, 10);

            ui->label_24->setText(Value);
            timer18->stop();

}

//驱动温度信息按钮
void MainWindow::on_pushButton19_clicked()
{
    sendCommandAndUpdate19Value(ID);
    timer19->start(5);
}

//驱动温度信息
void MainWindow::sendCommandAndUpdate19Value(int ID)
{

    uint16_t sendCommandAndUpdate190Value_sdo[][9]=
    {
      {0x600+ID,0x40,0x0D,0x20,0x00,0x00,0x00,0x00,0x00},
    };

            printf(" canopen_send_sdo \n");
            //读取设备数据
            ReadDeviceEntry(sendCommandAndUpdate190Value_sdo[0]);

            QString Value = QString::number(readValue, 10);

            ui->label_26->setText(Value);
            timer19->stop();

}

//电机温度信息按钮
void MainWindow::on_pushButton20_clicked()
{
    sendCommandAndUpdate20Value(ID);
    timer20->start(5);
}

//电机温度信息
void MainWindow::sendCommandAndUpdate20Value(int ID)
{

    uint16_t sendCommandAndUpdate200Value_sdo[][9]=
    {
      {0x600+ID,0x40,0x0C,0x20,0x00,0x00,0x00,0x00,0x00},
    };

            printf(" canopen_send_sdo \n");
            //读取设备数据
            ReadDeviceEntry(sendCommandAndUpdate200Value_sdo[0]);

            QString Value = QString::number(readValue, 10);

            ui->label_28->setText(Value);

            timer20->stop();

}





/********************************************************************************************************************************/
/************************************************************关节控制*************************************************************/
/********************************************************************************************************************************/



// 保证文本和滑轮数据同步
void MainWindow::updateLineEditFromSlider(int value)
{
    QSlider* slider = qobject_cast<QSlider*>(sender());
    QLineEdit* lineEdit = nullptr;

    if (slider == ui->horizontalSlider)
        lineEdit = ui->velocityLineEdit_2;
    /*else if (slider == ui->horizontalSlider_2)
        lineEdit = ui->currentLineEdit_2;*/

    if (lineEdit)
    {
        lineEdit->setText(QString::number(value));
    }
}

void MainWindow::updateSliderFromLineEdit(const QString &text)
{
    QLineEdit* lineEdit = qobject_cast<QLineEdit*>(sender());
    QSlider* slider = nullptr;

    if (lineEdit == ui->velocityLineEdit_2)
        slider = ui->horizontalSlider;
   /* else if (lineEdit == ui->currentLineEdit_2)
        slider = ui->horizontalSlider_2;*/

    if (slider)
    {
        int value = lineEdit->text().toInt();
        slider->setValue(value);
    }
}




/***********************************************************传动按钮**************************************************************/

// 一轴正传动按下
void MainWindow::on_joint1FButton_pressed()
{
    int velocity2 = ui->horizontalSlider->value();

    qDebug() << "on_joint1FButton_pressed";

    uint16_t joint1FButton_sdo[][9]=
    {
    {0x601,0x2F,0x60,0x60,0x00,0x02,0x00,0x00,0x00},
    {0x601,0x23,0xFF,0x60,0x00,velocity2 & 0xFF,(velocity2 >> 8) & 0xFF,(velocity2 >> 16) & 0xFF,(velocity2 >> 24) & 0xFF}, //没执行

    };

    for (int i=0;i<2;i++)
    {
        printf(" canopen_send_sdo \n");
        canopen_send_sdo(joint1FButton_sdo[i]);
        QThread::msleep(5);
    }
    ui->messagesTextBrowser->append("一轴正传动按下");
}

// 一轴正传动松开
void MainWindow::on_joint1FButton_released()
{
    qDebug() << "on_joint1FButton_released";

    uint16_t joint1FButton_sdo[][9]=
    {

    {0x601,0x23,0xFF,0x60,0x00,0x00,0x00,0x00,0x00},
        {0x601,0x2F,0x60,0x60,0x00,0x08,0x00,0x00,0x00},//没执行

    };
    for (int i=0;i<2;i++)
    {
        printf(" canopen_send_sdo \n");
        canopen_send_sdo(joint1FButton_sdo[i]);
        QThread::msleep(20);
    }
    ui->messagesTextBrowser->append("一轴正传动松开");
}

// 一轴逆传动按下
void MainWindow::on_joint1RButton_pressed()
{
    int velocity2 = -ui->horizontalSlider->value();

    qDebug() << "on_joint1RButton_pressed";

    uint16_t joint1RButton_sdo[][9]=
    {
    {0x601,0x2F,0x60,0x60,0x00,0x02,0x00,0x00,0x00},
    {0x601,0x23,0xFF,0x60,0x00,velocity2 & 0xFF,(velocity2 >> 8) & 0xFF,(velocity2 >> 16) & 0xFF,(velocity2 >> 24) & 0xFF},

    };

    for (int i=0;i<2;i++)
    {
        printf(" canopen_send_sdo \n");
        canopen_send_sdo(joint1RButton_sdo[i]);
        QThread::msleep(5);
    }
    ui->messagesTextBrowser->append("一轴逆传动按下");
}

// 一轴逆传动松开
void MainWindow::on_joint1RButton_released()
{
    qDebug() << "on_joint1RButton_released";

    uint16_t joint1RButton_sdo[][9]=
    {

    {0x601,0x23,0xFF,0x60,0x00,0x00,0x00,0x00,0x00},
        {0x601,0x2F,0x60,0x60,0x00,0x08,0x00,0x00,0x00},

    };
    for (int i=0;i<2;i++)
    {
        printf(" canopen_send_sdo \n");
        canopen_send_sdo(joint1RButton_sdo[i]);
        QThread::msleep(20);
    }
    ui->messagesTextBrowser->append("一轴逆传动松开");
}

// 二轴正传动按下
void MainWindow::on_joint2FButton_pressed()
{
    int velocity2 = ui->horizontalSlider->value();

    qDebug() << "on_joint2FButton_pressed";

    uint16_t joint2FButton_sdo[][9]=
    {
    {0x602,0x2F,0x60,0x60,0x00,0x02,0x00,0x00,0x00},
    {0x602,0x23,0xFF,0x60,0x00,velocity2 & 0xFF,(velocity2 >> 8) & 0xFF,(velocity2 >> 16) & 0xFF,(velocity2 >> 24) & 0xFF},

    };

    for (int i=0;i<2;i++)
    {
        printf(" canopen_send_sdo \n");
        canopen_send_sdo(joint2FButton_sdo[i]);
        QThread::msleep(5);
    }
    ui->messagesTextBrowser->append("二轴正传动按下");
}

// 二轴正传动松开
void MainWindow::on_joint2FButton_released()
{
    qDebug() << "on_joint2FButton_released";

    uint16_t joint2FButton_sdo[][9]=
    {

    {0x602,0x23,0xFF,0x60,0x00,0x00,0x00,0x00,0x00},
        {0x602,0x2F,0x60,0x60,0x00,0x08,0x00,0x00,0x00},

    };
    for (int i=0;i<2;i++)
    {
        printf(" canopen_send_sdo \n");
        canopen_send_sdo(joint2FButton_sdo[i]);
        QThread::msleep(20);
    }
    ui->messagesTextBrowser->append("二轴正传动松开");
}

// 二轴逆传动按下
void MainWindow::on_joint2RButton_pressed()
{
    int velocity2 = -ui->horizontalSlider->value();

    qDebug() << "on_joint2RButton_pressed";

    uint16_t joint2RButton_sdo[][9]=
    {
{0x602,0x2F,0x60,0x60,0x00,0x02,0x00,0x00,0x00},
    {0x602,0x23,0xFF,0x60,0x00,velocity2 & 0xFF,(velocity2 >> 8) & 0xFF,(velocity2 >> 16) & 0xFF,(velocity2 >> 24) & 0xFF},

    };

    for (int i=0;i<2;i++)
    {
        printf(" canopen_send_sdo \n");
        canopen_send_sdo(joint2RButton_sdo[i]);
        QThread::msleep(5);
    }
    ui->messagesTextBrowser->append("二轴逆传动按下");
}

// 二轴逆传动松开
void MainWindow::on_joint2RButton_released()
{
    qDebug() << "on_joint2RButton_released";

    uint16_t joint2RButton_sdo[][9]=
    {

    {0x602,0x23,0xFF,0x60,0x00,0x00,0x00,0x00,0x00},
        {0x602,0x2F,0x60,0x60,0x00,0x08,0x00,0x00,0x00},

    };
    for (int i=0;i<2;i++)
    {
        printf(" canopen_send_sdo \n");
        canopen_send_sdo(joint2RButton_sdo[i]);
        QThread::msleep(20);
    }
    ui->messagesTextBrowser->append("二轴逆传动松开");
}

// 三轴正传动按下
void MainWindow::on_joint3FButton_pressed()
{
    int velocity2 = ui->horizontalSlider->value();

    qDebug() << "on_joint3FButton_pressed";

    uint16_t joint3FButton_sdo[][9]=
    {
    {0x603,0x2F,0x60,0x60,0x00,0x02,0x00,0x00,0x00},
    {0x603,0x23,0xFF,0x60,0x00,velocity2 & 0xFF,(velocity2 >> 8) & 0xFF,(velocity2 >> 16) & 0xFF,(velocity2 >> 24) & 0xFF},

    };

    for (int i=0;i<2;i++)
    {
        printf(" canopen_send_sdo \n");
        canopen_send_sdo(joint3FButton_sdo[i]);
        QThread::msleep(5);
    }
    ui->messagesTextBrowser->append("三轴正传动按下");
}

// 三轴正传动松开
void MainWindow::on_joint3FButton_released()
{
    qDebug() << "on_joint3FButton_released";

    uint16_t joint3FButton_sdo[][9]=
    {

    {0x603,0x23,0xFF,0x60,0x00,0x00,0x00,0x00,0x00},
    {0x603,0x2F,0x60,0x60,0x00,0x08,0x00,0x00,0x00},
    };
    for (int i=0;i<2;i++)
    {
        printf(" canopen_send_sdo \n");
        canopen_send_sdo(joint3FButton_sdo[i]);
        QThread::msleep(20);
    }
    ui->messagesTextBrowser->append("三轴正传动松开");
}

// 三轴逆传动按下
void MainWindow::on_joint3RButton_pressed()
{
    int velocity2 = -ui->horizontalSlider->value();

    qDebug() << "on_joint3RButton_pressed";

    uint16_t joint3RButton_sdo[][9]=
    {
    {0x603,0x2F,0x60,0x60,0x00,0x02,0x00,0x00,0x00},
    {0x603,0x23,0xFF,0x60,0x00,velocity2 & 0xFF,(velocity2 >> 8) & 0xFF,(velocity2 >> 16) & 0xFF,(velocity2 >> 24) & 0xFF},

    };

    for (int i=0;i<2;i++)
    {
        printf(" canopen_send_sdo \n");
        canopen_send_sdo(joint3RButton_sdo[i]);
        QThread::msleep(5);
    }
    ui->messagesTextBrowser->append("三轴逆传动按下");
}

// 三轴逆传动松开
void MainWindow::on_joint3RButton_released()
{
    qDebug() << "on_joint3RButton_released";

    uint16_t joint3RButton_sdo[][9]=
    {

    {0x603,0x23,0xFF,0x60,0x00,0x00,0x00,0x00,0x00},
        {0x603,0x2F,0x60,0x60,0x00,0x08,0x00,0x00,0x00},

    };
    for (int i=0;i<2;i++)
    {
        printf(" canopen_send_sdo \n");
        canopen_send_sdo(joint3RButton_sdo[i]);
        QThread::msleep(20);
    }
    ui->messagesTextBrowser->append("三轴逆传动松开");
}

// 四轴正传动按下
void MainWindow::on_joint4FButton_pressed()
{
    int velocity2 = ui->horizontalSlider->value();

    qDebug() << "on_joint4FButton_pressed";

    uint16_t joint4FButton_sdo[][9]=
    {
    {0x604,0x2F,0x60,0x60,0x00,0x02,0x00,0x00,0x00},
    {0x604,0x23,0xFF,0x60,0x00,velocity2 & 0xFF,(velocity2 >> 8) & 0xFF,(velocity2 >> 16) & 0xFF,(velocity2 >> 24) & 0xFF},

    };

    for (int i=0;i<2;i++)
    {
        printf(" canopen_send_sdo \n");
        canopen_send_sdo(joint4FButton_sdo[i]);
        QThread::msleep(5);
    }
    ui->messagesTextBrowser->append("四轴正传动按下");
}

// 四轴正传动松开
void MainWindow::on_joint4FButton_released()
{
    qDebug() << "on_joint4FButton_released";

    uint16_t joint4FButton_sdo[][9]=
    {

    {0x604,0x23,0xFF,0x60,0x00,0x00,0x00,0x00,0x00},
        {0x604,0x2F,0x60,0x60,0x00,0x08,0x00,0x00,0x00},

    };
    for (int i=0;i<2;i++)
    {
        printf(" canopen_send_sdo \n");
        canopen_send_sdo(joint4FButton_sdo[i]);
        QThread::msleep(20);
    }
    ui->messagesTextBrowser->append("四轴正传动松开");
}

// 四轴逆传动按下
void MainWindow::on_joint4RButton_pressed()
{
    int velocity2 = -ui->horizontalSlider->value();

    qDebug() << "on_joint4RButton_pressed";

    uint16_t joint4RButton_sdo[][9]=
    {
    {0x604,0x2F,0x60,0x60,0x00,0x02,0x00,0x00,0x00},
    {0x604,0x23,0xFF,0x60,0x00,velocity2 & 0xFF,(velocity2 >> 8) & 0xFF,(velocity2 >> 16) & 0xFF,(velocity2 >> 24) & 0xFF},

    };

    for (int i=0;i<2;i++)
    {
        printf(" canopen_send_sdo \n");
        canopen_send_sdo(joint4RButton_sdo[i]);
        QThread::msleep(5);
    }
    ui->messagesTextBrowser->append("四轴逆传动按下");
}

// 四轴逆传动松开
void MainWindow::on_joint4RButton_released()
{
    qDebug() << "on_joint4RButton_released";

    uint16_t joint4RButton_sdo[][9]=
    {

    {0x604,0x23,0xFF,0x60,0x00,0x00,0x00,0x00,0x00},
        {0x604,0x2F,0x60,0x60,0x00,0x08,0x00,0x00,0x00},

    };
    for (int i=0;i<2;i++)
    {
        printf(" canopen_send_sdo \n");
        canopen_send_sdo(joint4RButton_sdo[i]);
        QThread::msleep(20);
    }
    ui->messagesTextBrowser->append("四轴逆传动松开");
}

// 五轴正传动按下
void MainWindow::on_joint5FButton_pressed()
{
    int velocity2 = ui->horizontalSlider->value();

    qDebug() << "on_joint5FButton_pressed";

    uint16_t joint5FButton_sdo[][9]=
    {
    {0x605,0x2F,0x60,0x60,0x00,0x02,0x00,0x00,0x00},
    {0x605,0x23,0xFF,0x60,0x00,velocity2 & 0xFF,(velocity2 >> 8) & 0xFF,(velocity2 >> 16) & 0xFF,(velocity2 >> 24) & 0xFF},

    };

    for (int i=0;i<2;i++)
    {
        printf(" canopen_send_sdo \n");
        canopen_send_sdo(joint5FButton_sdo[i]);
        QThread::msleep(5);
    }
    ui->messagesTextBrowser->append("五轴正传动按下");
}

// 五轴正传动松开
void MainWindow::on_joint5FButton_released()
{
    qDebug() << "on_joint5FButton_released";

    uint16_t joint5FButton_sdo[][9]=
    {

    {0x605,0x23,0xFF,0x60,0x00,0x00,0x00,0x00,0x00},
        {0x605,0x2F,0x60,0x60,0x00,0x08,0x00,0x00,0x00},

    };
    for (int i=0;i<2;i++)
    {
        printf(" canopen_send_sdo \n");
        canopen_send_sdo(joint5FButton_sdo[i]);
        QThread::msleep(20);
    }
    ui->messagesTextBrowser->append("五轴正传动松开");
}

// 五轴逆传动按下
void MainWindow::on_joint5RButton_pressed()
{
    int velocity2 = -ui->horizontalSlider->value();

    qDebug() << "on_joint5RButton_pressed";

    uint16_t joint5RButton_sdo[][9]=
    {
{0x605,0x2F,0x60,0x60,0x00,0x02,0x00,0x00,0x00},
    {0x605,0x23,0xFF,0x60,0x00,velocity2 & 0xFF,(velocity2 >> 8) & 0xFF,(velocity2 >> 16) & 0xFF,(velocity2 >> 24) & 0xFF},

    };

    for (int i=0;i<2;i++)
    {
        printf(" canopen_send_sdo \n");
        canopen_send_sdo(joint5RButton_sdo[i]);
        QThread::msleep(5);
    }
    ui->messagesTextBrowser->append("五轴逆传动按下");
}

// 五轴逆传动松开
void MainWindow::on_joint5RButton_released()
{
    qDebug() << "on_joint5RButton_released";

    uint16_t joint5RButton_sdo[][9]=
    {

    {0x605,0x23,0xFF,0x60,0x00,0x00,0x00,0x00,0x00},
        {0x605,0x2F,0x60,0x60,0x00,0x08,0x00,0x00,0x00},

    };
    for (int i=0;i<2;i++)
    {
        printf(" canopen_send_sdo \n");
        canopen_send_sdo(joint5RButton_sdo[i]);
        QThread::msleep(20);
    }
    ui->messagesTextBrowser->append("五轴逆传动松开");
}

// 六轴正传动按下
void MainWindow::on_joint6FButton_pressed()
{
    int velocity2 = ui->horizontalSlider->value();

    qDebug() << "on_joint6FButton_pressed";

    uint16_t joint6FButton_sdo[][9]=
    {
    {0x606,0x2F,0x60,0x60,0x00,0x02,0x00,0x00,0x00},
    {0x606,0x23,0xFF,0x60,0x00,velocity2 & 0xFF,(velocity2 >> 8) & 0xFF,(velocity2 >> 16) & 0xFF,(velocity2 >> 24) & 0xFF},

    };

    for (int i=0;i<2;i++)
    {
        printf(" canopen_send_sdo \n");
        canopen_send_sdo(joint6FButton_sdo[i]);
        QThread::msleep(5);
    }
    ui->messagesTextBrowser->append("六轴正传动按下");
}

// 六轴正传动松开
void MainWindow::on_joint6FButton_released()
{
    qDebug() << "on_joint6FButton_released";

    uint16_t joint6FButton_sdo[][9]=
    {

   {0x606,0x23,0xFF,0x60,0x00,0x00,0x00,0x00,0x00},
        {0x605,0x2F,0x60,0x60,0x00,0x08,0x00,0x00,0x00},

    };
    for (int i=0;i<2;i++)
    {
        printf(" canopen_send_sdo \n");
        canopen_send_sdo(joint6FButton_sdo[i]);
        QThread::msleep(20);
    }
    ui->messagesTextBrowser->append("六轴正传动松开");
}

// 六轴逆传动按下
void MainWindow::on_joint6RButton_pressed()
{
    int velocity2 = -ui->horizontalSlider->value();

    qDebug() << "on_joint6RButton_pressed";

    uint16_t joint6RButton_sdo[][9]=
    {
    {0x606,0x2F,0x60,0x60,0x00,0x02,0x00,0x00,0x00},
    {0x606,0x23,0xFF,0x60,0x00,velocity2 & 0xFF,(velocity2 >> 8) & 0xFF,(velocity2 >> 16) & 0xFF,(velocity2 >> 24) & 0xFF},

    };

    for (int i=0;i<2;i++)
    {
        printf(" canopen_send_sdo \n");
        canopen_send_sdo(joint6RButton_sdo[i]);
        QThread::msleep(5);
    }
    ui->messagesTextBrowser->append("六轴逆传动按下");
}

// 六轴逆传动松开
void MainWindow::on_joint6RButton_released()
{
    qDebug() << "on_joint6RButton_released";

    uint16_t joint6RButton_sdo[][9]=
    {

    {0x606,0x23,0xFF,0x60,0x00,0x00,0x00,0x00,0x00},
        {0x606,0x2F,0x60,0x60,0x00,0x08,0x00,0x00,0x00},

    };
    for (int i=0;i<2;i++)
    {
        printf(" canopen_send_sdo \n");
        canopen_send_sdo(joint6RButton_sdo[i]);
        QThread::msleep(20);
    }
    ui->messagesTextBrowser->append("六轴逆传动松开");
}

// 七轴正传动按下
void MainWindow::on_joint7RButton_pressed()
{
    int velocity2 = ui->horizontalSlider->value();

    qDebug() << "on_joint7RButton_pressed";

    uint16_t joint7RButton_sdo[][9]=
    {
    {0x607,0x2F,0x60,0x60,0x00,0x02,0x00,0x00,0x00},
    {0x607,0x23,0xFF,0x60,0x00,velocity2 & 0xFF,(velocity2 >> 8) & 0xFF,(velocity2 >> 16) & 0xFF,(velocity2 >> 24) & 0xFF},

    };

    for (int i=0;i<2;i++)
    {
        printf(" canopen_send_sdo \n");
        canopen_send_sdo(joint7RButton_sdo[i]);
        QThread::msleep(5);
    }
    ui->messagesTextBrowser->append("七轴正传动按下");
}

// 七轴正传动松开
void MainWindow::on_joint7RButton_released()
{
    qDebug() << "on_joint7RButton_released";

    uint16_t joint7RButton_sdo[][9]=
    {

    {0x607,0x23,0xFF,0x60,0x00,0x00,0x00,0x00,0x00},
        {0x607,0x2F,0x60,0x60,0x00,0x08,0x00,0x00,0x00},

    };
    for (int i=0;i<2;i++)
    {
        printf(" canopen_send_sdo \n");
        canopen_send_sdo(joint7RButton_sdo[i]);
        QThread::msleep(20);
    }
    ui->messagesTextBrowser->append("七轴正传动松开");
}

// 七轴逆传动按下
void MainWindow::on_joint7FButton_pressed()
{
    int velocity2 = -ui->horizontalSlider->value();

    qDebug() << "on_joint7FButton_pressed";

    uint16_t joint7FButton_sdo[][9]=
    {
    {0x607,0x2F,0x60,0x60,0x00,0x02,0x00,0x00,0x00},
    {0x607,0x23,0xFF,0x60,0x00,velocity2 & 0xFF,(velocity2 >> 8) & 0xFF,(velocity2 >> 16) & 0xFF,(velocity2 >> 24) & 0xFF},

    };

    for (int i=0;i<2;i++)
    {
        printf(" canopen_send_sdo \n");
        canopen_send_sdo(joint7FButton_sdo[i]);
        QThread::msleep(5);
    }
    ui->messagesTextBrowser->append("七轴逆传动按下");
}

// 七轴逆传动松开
void MainWindow::on_joint7FButton_released()
{
    qDebug() << "on_joint7FButton_released";

    uint16_t joint7FButton_sdo[][9]=
    {

    {0x607,0x23,0xFF,0x60,0x00,0x00,0x00,0x00,0x00},
        {0x607,0x2F,0x60,0x60,0x00,0x08,0x00,0x00,0x00},

    };
    for (int i=0;i<2;i++)
    {
        printf(" canopen_send_sdo \n");
        canopen_send_sdo(joint7FButton_sdo[i]);
        QThread::msleep(20);
    }
    ui->messagesTextBrowser->append("七轴逆传动松开");
}

//电流模式下七轴正传动按下
/*void MainWindow::on_joint7RButton_2_pressed()
{
    int velocity2 = ui->horizontalSlider_2->value();

    qDebug() << "on_joint7RButton_2_pressed";

    uint16_t joint7RButton_2_sdo[][9]=
    {
    {0x607,0x2F,0x60,0x60,0x00,0x04,0x00,0x00,0x00},
    {0x607,0x2B,0x71,0x60,0x00,velocity2 & 0xFF,(velocity2 >> 8) & 0xFF,(velocity2 >> 16) & 0xFF,(velocity2 >> 24) & 0xFF},

    };

    for (int i=0;i<2;i++)
    {
        printf(" canopen_send_sdo \n");
        canopen_send_sdo(joint7RButton_2_sdo[i]);
        QThread::msleep(5);
    }
    ui->messagesTextBrowser->append("电流模式下七轴正传动按下");
}*/

//电流模式下七轴正传动松开
/*void MainWindow::on_joint7RButton_2_released()
{
    qDebug() << "on_joint7RButton_2_released";

    uint16_t joint7RButton_2_sdo[][9]=
    {

    {0x607,0x2B,0x71,0x60,0x00,0x00,0x00,0x00,0x00},
        {0x607,0x2F,0x60,0x60,0x00,0x08,0x00,0x00,0x00},

    };
    for (int i=0;i<2;i++)
    {
        printf(" canopen_send_sdo \n");
        canopen_send_sdo(joint7RButton_2_sdo[i]);
        QThread::msleep(20);
    }
    ui->messagesTextBrowser->append("电流模式下七轴正传动松开");
}*/

//电流模式下七轴逆传动按下
/*void MainWindow::on_joint7FButton_2_pressed()
{
    int velocity2 = -ui->horizontalSlider_2->value();

    qDebug() << "on_joint7FButton_2_pressed";

    uint16_t joint7FButton_2_sdo[][9]=
    {
    {0x607,0x2F,0x60,0x60,0x00,0x04,0x00,0x00,0x00},
    {0x607,0x2B,0x71,0x60,0x00,velocity2 & 0xFF,(velocity2 >> 8) & 0xFF,(velocity2 >> 16) & 0xFF,(velocity2 >> 24) & 0xFF},

    };

    for (int i=0;i<2;i++)
    {
        printf(" canopen_send_sdo \n");
        canopen_send_sdo(joint7FButton_2_sdo[i]);
        QThread::msleep(5);
    }
    ui->messagesTextBrowser->append("电流模式下七轴逆传动按下");
}*/

//电流模式下七轴逆传动松开
/*void MainWindow::on_joint7FButton_2_released()
{
    qDebug() << "on_joint7FButton_2_released";

    uint16_t joint7FButton_2_sdo[][9]=
    {

    {0x607,0x2B,0x71,0x60,0x00,0x00,0x00,0x00,0x00},
        {0x607,0x2F,0x60,0x60,0x00,0x08,0x00,0x00,0x00},

    };
    for (int i=0;i<2;i++)
    {
        printf(" canopen_send_sdo \n");
        canopen_send_sdo(joint7FButton_2_sdo[i]);
        QThread::msleep(20);
    }
    ui->messagesTextBrowser->append("电流模式下七轴逆传动松开");
}*/






/*************************************************************位置按钮***********************************************************/



//一轴位置模式转动
void MainWindow::on_joint1TurnButton_clicked()
{
    QString joint1Text = ui->joint1TurnLineEdit->text();
    int joint1 = joint1Text.toInt();

    int position1 = (joint1/360.0)*100*65536;

    qDebug() << "on_joint1TurnButton_clicked";

    uint16_t joint1TurnButton_sdo[][9]=
    {

    {0x601,0x23,0x7A,0x60,0x00,position1 & 0xFF,(position1 >> 8) & 0xFF,(position1 >> 16) & 0xFF,(position1 >> 24) & 0xFF},

    };
    printf(" canopen_send_sdo \n");
    canopen_send_sdo(joint1TurnButton_sdo[0]);

    ui->messagesTextBrowser->append("一轴位置模式转动");
}

//二轴位置模式转动
void MainWindow::on_joint2TurnButton_clicked()
{
    QString joint2Text = ui->joint2TurnLineEdit->text();
    int joint2 = joint2Text.toInt();

    int position2 = (joint2/360.0)*100*65536;

    qDebug() << "on_joint2TurnButton_clicked";

    uint16_t joint2TurnButton_sdo[][9]=
    {

    {0x602,0x23,0x7A,0x60,0x00,position2 & 0xFF,(position2 >> 8) & 0xFF,(position2 >> 16) & 0xFF,(position2 >> 24) & 0xFF},

    };
    printf(" canopen_send_sdo \n");
    canopen_send_sdo(joint2TurnButton_sdo[0]);

    ui->messagesTextBrowser->append("二轴位置模式转动");
}

//三轴位置模式转动
void MainWindow::on_joint3TurnButton_clicked()
{
    QString joint3Text = ui->joint3TurnLineEdit->text();
    int joint3 = joint3Text.toInt();

    int position3 = (joint3/360.0)*100*65536;

    qDebug() << "on_joint3TurnButton_clicked";

    uint16_t joint3TurnButton_sdo[][9]=
    {

    {0x603,0x23,0x7A,0x60,0x00,position3 & 0xFF,(position3 >> 8) & 0xFF,(position3 >> 16) & 0xFF,(position3 >> 24) & 0xFF},

    };
    printf(" canopen_send_sdo \n");
    canopen_send_sdo(joint3TurnButton_sdo[0]);

    ui->messagesTextBrowser->append("三轴位置模式转动");
}

//四轴位置模式转动
void MainWindow::on_joint4TurnButton_clicked()
{
    QString joint4Text = ui->joint4TurnLineEdit->text();
    int joint4 = joint4Text.toInt();

    int position4 = (joint4/360.0)*100*65536;

    qDebug() << "on_joint4TurnButton_clicked";

    uint16_t joint4TurnButton_sdo[][9]=
    {

    {0x604,0x23,0x7A,0x60,0x00,position4 & 0xFF,(position4 >> 8) & 0xFF,(position4 >> 16) & 0xFF,(position4 >> 24) & 0xFF},

    };
    printf(" canopen_send_sdo \n");
    canopen_send_sdo(joint4TurnButton_sdo[0]);

    ui->messagesTextBrowser->append("四轴位置模式转动");
}

//五轴位置模式转动
void MainWindow::on_joint5TurnButton_clicked()
{
    QString joint5Text = ui->joint5TurnLineEdit->text();
    int joint5 = joint5Text.toInt();

    int position5 = (joint5/360.0)*100*65536;

    qDebug() << "on_joint5TurnButton_clicked";

    uint16_t joint5TurnButton_sdo[][9]=
    {

    {0x605,0x23,0x7A,0x60,0x00,position5 & 0xFF,(position5 >> 8) & 0xFF,(position5 >> 16) & 0xFF,(position5 >> 24) & 0xFF},

    };
    printf(" canopen_send_sdo \n");
    canopen_send_sdo(joint5TurnButton_sdo[0]);

    ui->messagesTextBrowser->append("五轴位置模式转动");}

//六轴位置模式转动
void MainWindow::on_joint6TurnButton_clicked()
{
    QString joint6Text = ui->joint6TurnLineEdit->text();
    int joint6 = joint6Text.toInt();

    int position6 = (joint6/360.0)*100*65536;

    qDebug() << "on_joint6TurnButton_clicked";

    uint16_t joint6TurnButton_sdo[][9]=
    {

    {0x606,0x23,0x7A,0x60,0x00,position6 & 0xFF,(position6 >> 8) & 0xFF,(position6 >> 16) & 0xFF,(position6 >> 24) & 0xFF},

    };
    printf(" canopen_send_sdo \n");
    canopen_send_sdo(joint6TurnButton_sdo[0]);

    ui->messagesTextBrowser->append("六轴位置模式转动");
}

//七轴位置模式转动
void MainWindow::on_joint7TurnButton_clicked()
{
    QString joint7Text = ui->joint7TurnLineEdit->text();
    int joint7 = joint7Text.toInt();

    int position7 = (joint7/360.0)*100*65536;

    qDebug() << "on_joint7TurnButton_clicked";

    uint16_t joint7TurnButton_sdo[][9]=
    {

    {0x607,0x23,0x7A,0x60,0x00,position7 & 0xFF,(position7 >> 8) & 0xFF,(position7 >> 16) & 0xFF,(position7 >> 24) & 0xFF},

    };
    printf(" canopen_send_sdo \n");
    canopen_send_sdo(joint7TurnButton_sdo[0]);

    ui->messagesTextBrowser->append("七轴位置模式转动");
}






/********************************************************************************************************************************/
/**************************************************************状态栏*************************************************************/
/********************************************************************************************************************************/




//清空
void MainWindow::on_clearButton_clicked()
{
    ui->messagesTextBrowser->clear();
}






/********************************************************************************************************************************/
/************************************************************设置****************************************************************/
/********************************************************************************************************************************/




//选择ID1
void MainWindow::on_idButton1_clicked()
{
    ID = 1;
    ui->messagesTextBrowser->append("选择ID1");

}
//选择ID2
void MainWindow::on_idButton2_clicked()
{
    ID = 2;
    ui->messagesTextBrowser->append("选择ID2");
}
//选择ID3
void MainWindow::on_idButton3_clicked()
{
    ID = 3;
    ui->messagesTextBrowser->append("选择ID3");

}
//选择ID4
void MainWindow::on_idButton4_clicked()
{
    ID = 4;
    ui->messagesTextBrowser->append("选择ID4");
}
//选择ID5
void MainWindow::on_idButton5_clicked()
{
    ID = 5;
    ui->messagesTextBrowser->append("选择ID5");

}
//选择ID6
void MainWindow::on_idButton6_clicked()
{
    ID = 6;
    ui->messagesTextBrowser->append("选择ID6");
}
//选择ID7
void MainWindow::on_idButton7_clicked()
{
    ID = 7;
    ui->messagesTextBrowser->append("选择ID7");
}

//位置环比例按钮
void MainWindow::on_pushButton1_clicked()
{

    sendCommandAndUpdate1Value(ID);
    timer1->start(5);
}

//位置环比例读取
void MainWindow::sendCommandAndUpdate1Value(int ID)
{


    uint16_t sendCommandAndUpdate10Value_sdo[][9]=
    {
      {0x600+ID,0x40,0xFB,0x60,0x01,0x00,0x00,0x00,0x00},
    };

            printf(" canopen_send_sdo \n");
            //读取设备数据
            ReadDeviceEntry(&sendCommandAndUpdate10Value_sdo[0][0]);

            QString Value = QString::number(readValue, 10);

            ui->lineEdit1->setText(Value);

            timer1->stop();

}

//位置环比例写入
void MainWindow::sendCommandAndUpdate1Value1(int ID)
{


                int modifiedValue1 = ui->lineEdit1->text().toInt();

                // 将十六进制值分解为四个字节
                unsigned char byte5 = modifiedValue1 & 0xFF;
                unsigned char byte6 = (modifiedValue1 >> 8) & 0xFF;
                unsigned char byte7 = (modifiedValue1 >> 16) & 0xFF;
                unsigned char byte8 = (modifiedValue1 >> 24) & 0xFF;

                unsigned char data[9];
                // 更新data[4-7]
                data[5] = byte5;
                data[6] = byte6;
                data[7] = byte7;
                data[8] = byte8;

                // 修改数据指令的数据部分
                    uint16_t sendCommandAndUpdate11Value_sdo[][9]= // w:speed ctrl; ok
                    {

                            {0x600+ID,0x2B,0xFB,0x60,0x01,data[5],data[6],data[7],data[8]},


                    };
for (int i=0;i<1;i++)
{
                        printf(" canopen_send_sdo \n");
                        canopen_send_sdo(&sendCommandAndUpdate11Value_sdo[0][0]);
QThread::msleep(20);}

                }


//位置环微分按钮
void MainWindow::on_pushButton2_clicked()
                {
                    sendCommandAndUpdate2Value(ID);
                    timer2->start(5);
                }

//位置环微分读取
void MainWindow::sendCommandAndUpdate2Value(int ID)
{

    uint16_t sendCommandAndUpdate20Value_sdo[][9]=
    {
      {0x600+ID,0x40,0xFB,0x60,0x02,0x00,0x00,0x00,0x00},
    };

            printf(" canopen_send_sdo \n");
            //读取设备数据
            ReadDeviceEntry(sendCommandAndUpdate20Value_sdo[0]);

            QString Value = QString::number(readValue, 10);

            ui->lineEdit2->setText(Value);

            timer2->stop();
}

//位置环微分写入
void MainWindow::sendCommandAndUpdate2Value2(int ID)
{

        int modifiedValue2 = ui->lineEdit2->text().toInt();

        // 将十六进制值分解为四个字节
        unsigned char byte5 = modifiedValue2 & 0xFF;
        unsigned char byte6 = (modifiedValue2 >> 8) & 0xFF;
        unsigned char byte7 = (modifiedValue2 >> 16) & 0xFF;
        unsigned char byte8 = (modifiedValue2 >> 24) & 0xFF;

        unsigned char data[9];
        // 更新data[4-7]
        data[5] = byte5;
        data[6] = byte6;
        data[7] = byte7;
        data[8] = byte8;

        // 修改数据指令的数据部分
            uint16_t sendCommandAndUpdate21Value_sdo[][9]= // w:speed ctrl; ok
            {

                    {0x600+ID,0x2B,0xFB,0x60,0x02,data[5],data[6],data[7],data[8]},

            };
for (int i=0;i<1;i++)
{
                printf(" canopen_send_sdo \n");
                canopen_send_sdo(sendCommandAndUpdate21Value_sdo[0]);
                QThread::msleep(20);
}
}


//速度环比例按钮
void MainWindow::on_pushButton3_clicked()
                {
                    sendCommandAndUpdate3Value(ID);
                    timer3->start(5);
                }

//速度环比例读取
void MainWindow::sendCommandAndUpdate3Value(int ID)
{

    uint16_t sendCommandAndUpdate30Value_sdo[][9]=
    {
      {0x600+ID,0x40,0xF9,0x60,0x01,0x00,0x00,0x00,0x00},
    };

            printf(" canopen_send_sdo \n");
            //读取设备数据
            ReadDeviceEntry(sendCommandAndUpdate30Value_sdo[0]);

            QString Value = QString::number(readValue, 10);

            ui->lineEdit3->setText(Value);

            timer3->stop();
}

//速度环比例写入
void MainWindow::sendCommandAndUpdate3Value3(int ID)
{

        // 获取SpinBox中的值
        int modifiedValue3 = ui->lineEdit3->text().toInt();

        // 将十六进制值分解为四个字节
        unsigned char byte5 = modifiedValue3 & 0xFF;
        unsigned char byte6 = (modifiedValue3 >> 8) & 0xFF;
        unsigned char byte7 = (modifiedValue3 >> 16) & 0xFF;
        unsigned char byte8 = (modifiedValue3 >> 24) & 0xFF;

        unsigned char data[9];
        // 更新data[4-7]
        data[5] = byte5;
        data[6] = byte6;
        data[7] = byte7;
        data[8] = byte8;

        // 修改数据指令的数据部分
            uint16_t sendCommandAndUpdate31Value_sdo[][9]= // w:speed ctrl; ok
            {

                    {0x600+ID,0x2B,0xF9,0x60,0x01,data[5],data[6],data[7],data[8]},

            };
for (int i=0;i<1;i++)
{
                printf(" canopen_send_sdo \n");
                canopen_send_sdo(sendCommandAndUpdate31Value_sdo[0]);
                QThread::msleep(20);
}

}


//速度环积分按钮
void MainWindow::on_pushButton4_clicked()
                {
                    sendCommandAndUpdate4Value(ID);
                    timer4->start(5);
                }

//速度环积分读取
void MainWindow::sendCommandAndUpdate4Value(int ID)
{

    uint16_t sendCommandAndUpdate40Value_sdo[][9]=
    {
      {0x600+ID,0x40,0xF9,0x60,0x02,0x00,0x00,0x00,0x00},
    };

            printf(" canopen_send_sdo \n");
            //读取设备数据
            ReadDeviceEntry(sendCommandAndUpdate40Value_sdo[0]);

            QString Value = QString::number(readValue, 10);

            ui->lineEdit4->setText(Value);

            timer4->stop();

}

//速度环积分写入
void MainWindow::sendCommandAndUpdate4Value4(int ID)
{

        // 获取SpinBox中的值
        int modifiedValue4 = ui->lineEdit4->text().toInt();

        // 将十六进制值分解为四个字节
        unsigned char byte5 = modifiedValue4 & 0xFF;
        unsigned char byte6 = (modifiedValue4 >> 8) & 0xFF;
        unsigned char byte7 = (modifiedValue4 >> 16) & 0xFF;
        unsigned char byte8 = (modifiedValue4 >> 24) & 0xFF;

        unsigned char data[9];
        // 更新data[4-7]
        data[5] = byte5;
        data[6] = byte6;
        data[7] = byte7;
        data[8] = byte8;

        // 修改数据指令的数据部分
            uint16_t sendCommandAndUpdate41Value_sdo[][9]= // w:speed ctrl; ok
            {

                    {0x600+ID,0x2B,0xF9,0x60,0x02,data[5],data[6],data[7],data[8]},

            };
for (int i=0;i<1;i++)
{
                printf(" canopen_send_sdo \n");
                canopen_send_sdo(sendCommandAndUpdate41Value_sdo[0]);
        QThread::msleep(20);
                }
}


//最大正向速度按钮
void MainWindow::on_pushButton5_clicked()
                {
                    sendCommandAndUpdate5Value(ID);
                    timer5->start(5);
                }

//最大正向速度读取
void MainWindow::sendCommandAndUpdate5Value(int ID)
{

    uint16_t sendCommandAndUpdate50Value_sdo[][9]=
    {
      {0x600+ID,0x40,0x83,0x60,0x00,0x00,0x00,0x00,0x00},
    };

            printf(" canopen_send_sdo \n");
            //读取设备数据
            ReadDeviceEntry(sendCommandAndUpdate50Value_sdo[0]);

            QString Value = QString::number(readValue, 10);

            ui->lineEdit5->setText(Value);

            timer5->stop();
}

//最大正向速度写入
void MainWindow::sendCommandAndUpdate5Value5(int ID)
{

        // 获取SpinBox中的值
        int modifiedValue5 = ui->lineEdit5->text().toInt();

        // 将十六进制值分解为四个字节
        unsigned char byte5 = modifiedValue5 & 0xFF;
        unsigned char byte6 = (modifiedValue5 >> 8) & 0xFF;
        unsigned char byte7 = (modifiedValue5 >> 16) & 0xFF;
        unsigned char byte8 = (modifiedValue5 >> 24) & 0xFF;

        unsigned char data[9];
        // 更新data[4-7]
        data[5] = byte5;
        data[6] = byte6;
        data[7] = byte7;
        data[8] = byte8;

        // 修改数据指令的数据部分
            uint16_t sendCommandAndUpdate51Value_sdo[][9]= // w:speed ctrl; ok
            {

                    {0x600+ID,0x2B,0x83,0x60,0x00,data[5],data[6],data[7],data[8]},

            };
for (int i=0;i<1;i++)
{
                printf(" canopen_send_sdo \n");
                canopen_send_sdo(sendCommandAndUpdate51Value_sdo[0]);
QThread::msleep(20);
        }
}


//最小负向速度按钮
void MainWindow::on_pushButton6_clicked()
                {
                    sendCommandAndUpdate6Value(ID);
                    timer6->start(5);
                }

//最小负向速度读取
void MainWindow::sendCommandAndUpdate6Value(int ID)
{

    uint16_t sendCommandAndUpdate60Value_sdo[][9]=
    {
      {0x600+ID,0x40,0x84,0x60,0x00,0x00,0x00,0x00,0x00},
    };



            printf(" canopen_send_sdo \n");
            //读取设备数据
            ReadDeviceEntry(sendCommandAndUpdate60Value_sdo[0]);

            QString Value = QString::number(readValue, 10);

            ui->lineEdit6->setText(Value);

            timer6->stop();

}

//最小负向速度写入
void MainWindow::sendCommandAndUpdate6Value6(int ID)
{

        // 获取SpinBox中的值
        int modifiedValue6 = ui->lineEdit6->text().toInt();

        // 将十六进制值分解为四个字节
        unsigned char byte5 = modifiedValue6 & 0xFF;
        unsigned char byte6 = (modifiedValue6 >> 8) & 0xFF;
        unsigned char byte7 = (modifiedValue6 >> 16) & 0xFF;
        unsigned char byte8 = (modifiedValue6 >> 24) & 0xFF;

        unsigned char data[9];
        // 更新data[4-7]
        data[5] = byte5;
        data[6] = byte6;
        data[7] = byte7;
        data[8] = byte8;

        // 修改数据指令的数据部分
            uint16_t sendCommandAndUpdate61Value_sdo[][9]= // w:speed ctrl; ok
            {

                    {0x600+ID,0x2B,0x84,0x60,0x00,data[5],data[6],data[7],data[8]},

            };
            for (int i=0;i<1;i++)
            {
                printf(" canopen_send_sdo \n");
                canopen_send_sdo(sendCommandAndUpdate61Value_sdo[i]);
                QThread::msleep(20);
            }

}


//最大正向允许速度按钮
void MainWindow::on_pushButton7_clicked()
{
    sendCommandAndUpdate7Value(ID);
    timer7->start(5);
}

//最大正向允许速度读取
void MainWindow::sendCommandAndUpdate7Value(int ID)
{

    uint16_t sendCommandAndUpdate70Value_sdo[][9]=
    {
      {0x600+ID,0x40,0x7F,0x60,0x00,0x00,0x00,0x00,0x00},
    };

            printf(" canopen_send_sdo \n");
            //读取设备数据
            ReadDeviceEntry(sendCommandAndUpdate70Value_sdo[0]);

            QString Value = QString::number(readValue, 10);

            ui->lineEdit7->setText(Value);

            timer7->stop();
}

//最大正向允许速度写入
void MainWindow::sendCommandAndUpdate7Value7(int ID)
{

        // 获取SpinBox中的值
        int modifiedValue7 = ui->lineEdit7->text().toInt();

        // 将十六进制值分解为四个字节
        unsigned char byte5 = modifiedValue7 & 0xFF;
        unsigned char byte6 = (modifiedValue7 >> 8) & 0xFF;
        unsigned char byte7 = (modifiedValue7 >> 16) & 0xFF;
        unsigned char byte8 = (modifiedValue7 >> 24) & 0xFF;

        unsigned char data[9];
        // 更新data[4-7]
        data[5] = byte5;
        data[6] = byte6;
        data[7] = byte7;
        data[8] = byte8;

        // 修改数据指令的数据部分
            uint16_t sendCommandAndUpdate71Value_sdo[][9]= // w:speed ctrl; ok
            {

                    {0x600+ID,0x2B,0x7F,0x60,0x00,data[5],data[6],data[7],data[8]},

            };
for (int i=0;i<1;i++)
{
                printf(" canopen_send_sdo \n");
                canopen_send_sdo(sendCommandAndUpdate71Value_sdo[0]);
                QThread::msleep(20);
        }
}


//最小负向允许速度按钮
void MainWindow::on_pushButton8_clicked()
                {
                    sendCommandAndUpdate8Value(ID);
                    timer8->start(5);
                }

//最小负向允许速度读取
void MainWindow::sendCommandAndUpdate8Value(int ID)
{

    uint16_t sendCommandAndUpdate80Value_sdo[][9]=
    {
      {0x600+ID,0x40,0x7F,0x60,0x00,0x00,0x00,0x00,0x00},
    };

            printf(" canopen_send_sdo \n");
            //读取设备数据
            ReadDeviceEntry(sendCommandAndUpdate80Value_sdo[0]);

            QString Value = QString::number(readValue, 10);

            ui->lineEdit8->setText(Value);

            timer8->stop();
}

//最小负向允许速度写入
void MainWindow::sendCommandAndUpdate8Value8(int ID)
{

        // 获取SpinBox中的值
        int modifiedValue8 = ui->lineEdit8->text().toInt();

        // 将十六进制值分解为四个字节
        unsigned char byte5 = modifiedValue8 & 0xFF;
        unsigned char byte6 = (modifiedValue8 >> 8) & 0xFF;
        unsigned char byte7 = (modifiedValue8 >> 16) & 0xFF;
        unsigned char byte8 = (modifiedValue8 >> 24) & 0xFF;

        unsigned char data[9];
        // 更新data[4-7]
        data[5] = byte5;
        data[6] = byte6;
        data[7] = byte7;
        data[8] = byte8;

        // 修改数据指令的数据部分
            uint16_t sendCommandAndUpdate81Value_sdo[][9]= // w:speed ctrl; ok
            {

                    {0x600+ID,0x2B,0x7F,0x60,0x00,data[5],data[6],data[7],data[8]},

            };
for (int i=0;i<1;i++)
{
                printf(" canopen_send_sdo \n");
                canopen_send_sdo(sendCommandAndUpdate81Value_sdo[0]);
                QThread::msleep(20);
        }
}


//最大正电流按钮
void MainWindow::on_pushButton9_clicked()
                {
                    sendCommandAndUpdate9Value(ID);
                    timer9->start(5);
                }

//最大正电流读取
void MainWindow::sendCommandAndUpdate9Value(int ID)
{

    uint16_t sendCommandAndUpdate90Value_sdo[][9]=
    {
      {0x600+ID,0x40,0x09,0x20,0x00,0x00,0x00,0x00,0x00},
    };

            printf(" canopen_send_sdo \n");
            //读取设备数据
            ReadDeviceEntry(sendCommandAndUpdate90Value_sdo[0]);

            QString Value = QString::number(readValue, 10);

            ui->lineEdit9->setText(Value);

            timer9->stop();
}

//最大正电流写入
void MainWindow::sendCommandAndUpdate9Value9(int ID)
{

        // 获取SpinBox中的值
        int modifiedValue9 = ui->lineEdit9->text().toInt();

        // 将十六进制值分解为四个字节
        unsigned char byte5 = modifiedValue9 & 0xFF;
        unsigned char byte6 = (modifiedValue9 >> 8) & 0xFF;
        unsigned char byte7 = (modifiedValue9 >> 16) & 0xFF;
        unsigned char byte8 = (modifiedValue9 >> 24) & 0xFF;

        unsigned char data[9];
        // 更新data[4-7]
        data[5] = byte5;
        data[6] = byte6;
        data[7] = byte7;
        data[8] = byte8;

        // 修改数据指令的数据部分
            uint16_t sendCommandAndUpdate91Value_sdo[][9]= // w:speed ctrl; ok
            {

                    {0x600+ID,0x2B,0x09,0x20,0x00,data[5],data[6],data[7],data[8]},

            };
for (int i=0;i<1;i++)
{
                printf(" canopen_send_sdo \n");
                canopen_send_sdo(sendCommandAndUpdate91Value_sdo[0]);
                QThread::msleep(20);
        }
}


//最小负电流按钮
void MainWindow::on_pushButton10_clicked()
{
   sendCommandAndUpdate10Value(ID);
   timer10->start(5);
}

//最小负电流读取
void MainWindow::sendCommandAndUpdate10Value(int ID)
{

    uint16_t sendCommandAndUpdate100Value_sdo[][9]=
    {
      {0x600+ID,0x40,0x0A,0x20,0x00,0x00,0x00,0x00,0x00},
    };

            printf(" canopen_send_sdo \n");
            //读取设备数据
            ReadDeviceEntry(sendCommandAndUpdate100Value_sdo[0]);

            QString Value = QString::number(readValue, 10);

            ui->lineEdit10->setText(Value);

            timer10->stop();
}

//最小负电流写入
void MainWindow::sendCommandAndUpdate10Value10(int ID)
{

        // 获取SpinBox中的值
        int modifiedValue10 = ui->lineEdit10->text().toInt();

        // 将十六进制值分解为四个字节
        unsigned char byte5 = modifiedValue10 & 0xFF;
        unsigned char byte6 = (modifiedValue10 >> 8) & 0xFF;
        unsigned char byte7 = (modifiedValue10 >> 16) & 0xFF;
        unsigned char byte8 = (modifiedValue10 >> 24) & 0xFF;

        unsigned char data[9];
        // 更新data[4-7]
        data[5] = byte5;
        data[6] = byte6;
        data[7] = byte7;
        data[8] = byte8;

        // 修改数据指令的数据部分
            uint16_t sendCommandAndUpdate101Value_sdo[][9]= // w:speed ctrl; ok
            {

                    {0x600+ID,0x2B,0x0A,0x20,0x00,data[5],data[6],data[7],data[8]},

            };
for (int i=0;i<1;i++)
{
                printf(" canopen_send_sdo \n");
                canopen_send_sdo(sendCommandAndUpdate101Value_sdo[0]);
                QThread::msleep(20);
        }
}


//最大电流绝对值按钮
void MainWindow::on_pushButton11_clicked()
                {
                    sendCommandAndUpdate11Value(ID);
                    timer11->start(5);
                }

//最大电流绝对值
void MainWindow::sendCommandAndUpdate11Value(int ID)
{

    uint16_t sendCommandAndUpdate110Value_sdo[][9]=
    {
      {0x600+ID,0x40,0x0B,0x20,0x00,0x00,0x00,0x00,0x00},
    };

            printf(" canopen_send_sdo \n");
            //读取设备数据
            ReadDeviceEntry(sendCommandAndUpdate110Value_sdo[0]);

            QString Value = QString::number(readValue, 10);

            ui->label_015->setText(Value);

            timer11->stop();

}


//位置偏移按钮
/*void MainWindow::on_pushButton12_clicked()
{
    sendCommandAndUpdate12Value(ID);
    timer12->start(5);
}

//位置偏移读取
void MainWindow::sendCommandAndUpdate12Value(int ID)
{

    uint16_t sendCommandAndUpdate120Value_sdo[][9]=
    {
      {0x600+ID,0x40,0x08,0x20,0x00,0x00,0x00,0x00,0x00},
    };

            printf(" canopen_send_sdo \n");
            //读取设备数据
            ReadDeviceEntry(sendCommandAndUpdate120Value_sdo[0]);

            QString Value = QString::number(readValue, 10);

            ui->lineEdit12->setText(Value);

            timer12->stop();
}

//位置偏移写入
void MainWindow::sendCommandAndUpdate12Value12(int ID)
{

        // 获取SpinBox中的值
        int modifiedValue12 = ui->lineEdit12->text().toInt();

        // 将十六进制值分解为四个字节
        unsigned char byte5 = modifiedValue12 & 0xFF;
        unsigned char byte6 = (modifiedValue12 >> 8) & 0xFF;
        unsigned char byte7 = (modifiedValue12 >> 16) & 0xFF;
        unsigned char byte8 = (modifiedValue12 >> 24) & 0xFF;

        unsigned char data[9];
        // 更新data[4-7]
        data[5] = byte5;
        data[6] = byte6;
        data[7] = byte7;
        data[8] = byte8;

        // 修改数据指令的数据部分
            uint16_t sendCommandAndUpdate121Value_sdo[][9]= // w:speed ctrl; ok
            {

                    {0x600+ID,0x23,0x08,0x20,0x00,data[5],data[6],data[7],data[8]},

            };
for (int i=0;i<1;i++)
{
                printf(" canopen_send_sdo \n");
                canopen_send_sdo(sendCommandAndUpdate121Value_sdo[0]);
                QThread::msleep(20);
}
}*/

//波特率


//CON ID按钮
void MainWindow::on_pushButton13_clicked()
                {
                    sendCommandAndUpdate13Value(ID);
                    timer13->start(5);
                }

//CON ID读取
void MainWindow::sendCommandAndUpdate13Value(int ID)
{

    uint16_t sendCommandAndUpdate130Value_sdo[][9]=
    {
      {0x600+ID,0x40,0x06,0x20,0x00,0x00,0x00,0x00,0x00},
    };

            printf(" canopen_send_sdo \n");
            //读取设备数据
            ReadDeviceEntry(sendCommandAndUpdate130Value_sdo[0]);

            QString Value = QString::number(readValue, 10);

            ui->lineEdit13->setText(Value);

            timer13->stop();
}

//CON ID写入
void MainWindow::sendCommandAndUpdate13Value13(int ID)
{


        // 获取SpinBox中的值
        int modifiedValue13 = ui->lineEdit13->text().toInt();

        // 将十六进制值分解为四个字节
        unsigned char byte5 = modifiedValue13 & 0xFF;
        unsigned char byte6 = (modifiedValue13 >> 8) & 0xFF;
        unsigned char byte7 = (modifiedValue13 >> 16) & 0xFF;
        unsigned char byte8 = (modifiedValue13 >> 24) & 0xFF;

        unsigned char data[9];
        // 更新data[4-7]
        data[5] = byte5;
        data[6] = byte6;
        data[7] = byte7;
        data[8] = byte8;

        // 修改数据指令的数据部分
            uint16_t sendCommandAndUpdate131Value_sdo[][9]= // w:speed ctrl; ok
            {

                    {0x600+ID,0x2B,0x06,0x20,0x00,data[5],data[6],data[7],data[8]},

            };
for (int i=0;i<1;i++)
{
                printf(" canopen_send_sdo \n");
                canopen_send_sdo(sendCommandAndUpdate131Value_sdo[0]);
                                QThread::msleep(20);
        }
}


//软件版本按钮
void MainWindow::on_pushButton14_clicked()
                {
                    sendCommandAndUpdate14Value(ID);
                    timer14->start(5);
                }

//软件版本
void MainWindow::sendCommandAndUpdate14Value(int ID)
{

    uint16_t sendCommandAndUpdate140Value_sdo[][9]=
    {
      {0x600+ID,0x40,0xFF,0x20,0x00,0x00,0x00,0x00,0x00},
    };

            printf(" canopen_send_sdo \n");
            //读取设备数据
            ReadDeviceEntry(sendCommandAndUpdate140Value_sdo[0]);

            QString Value = QString::number(readValue, 10);

            ui->label_017->setText(Value);

            timer14->stop();

}



//保存
void MainWindow::on_pushButton_15_clicked()
{

    // 保存指令的数据部分
    qDebug()<<"on_pushButton_15_clicked";

    sendCommandAndUpdate1Value1(ID);
    sendCommandAndUpdate2Value2(ID);
    sendCommandAndUpdate3Value3(ID);
    sendCommandAndUpdate4Value4(ID);
    sendCommandAndUpdate5Value5(ID);
    sendCommandAndUpdate6Value6(ID);
    sendCommandAndUpdate7Value7(ID);
    sendCommandAndUpdate8Value8(ID);
    sendCommandAndUpdate9Value9(ID);
    sendCommandAndUpdate10Value10(ID);
    //sendCommandAndUpdate12Value12(ID);
    sendCommandAndUpdate13Value13(ID);

    uint16_t pushButton_15_sdo[][9]= // w:speed ctrl; ok
    {       

            {0x601,0x23,0x00,0x20,0x00,0x01,0x00,0x00,0x00},
            {0x602,0x23,0x00,0x20,0x00,0x01,0x00,0x00,0x00},
            {0x603,0x23,0x00,0x20,0x00,0x01,0x00,0x00,0x00},
           {0x604,0x23,0x00,0x20,0x00,0x01,0x00,0x00,0x00},
            {0x605,0x23,0x00,0x20,0x00,0x01,0x00,0x00,0x00},
            {0x606,0x23,0x00,0x20,0x00,0x01,0x00,0x00,0x00},
            {0x607,0x23,0x00,0x20,0x00,0x01,0x00,0x00,0x00},

    };
 for(int i=0;i<1;i++){
        printf(" canopen_send_sdo \n");
        canopen_send_sdo(pushButton_15_sdo[i]);
        QThread::msleep(20);
}
ui->messagesTextBrowser->append("已保存更新数据");
}





















