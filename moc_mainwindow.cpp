/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[105];
    char stringdata0[2603];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 27), // "on_openDeviceButton_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 29), // "on_enableDeviceButton_clicked"
QT_MOC_LITERAL(4, 70, 30), // "on_disableDeviceButton_clicked"
QT_MOC_LITERAL(5, 101, 22), // "on_errorButton_clicked"
QT_MOC_LITERAL(6, 124, 23), // "on_pushButton15_clicked"
QT_MOC_LITERAL(7, 148, 23), // "on_pushButton16_clicked"
QT_MOC_LITERAL(8, 172, 23), // "on_pushButton17_clicked"
QT_MOC_LITERAL(9, 196, 23), // "on_pushButton18_clicked"
QT_MOC_LITERAL(10, 220, 23), // "on_pushButton19_clicked"
QT_MOC_LITERAL(11, 244, 23), // "on_pushButton20_clicked"
QT_MOC_LITERAL(12, 268, 27), // "sendCommandAndUpdate21Value"
QT_MOC_LITERAL(13, 296, 2), // "ID"
QT_MOC_LITERAL(14, 299, 27), // "sendCommandAndUpdate15Value"
QT_MOC_LITERAL(15, 327, 27), // "sendCommandAndUpdate16Value"
QT_MOC_LITERAL(16, 355, 27), // "sendCommandAndUpdate17Value"
QT_MOC_LITERAL(17, 383, 27), // "sendCommandAndUpdate18Value"
QT_MOC_LITERAL(18, 411, 27), // "sendCommandAndUpdate19Value"
QT_MOC_LITERAL(19, 439, 27), // "sendCommandAndUpdate20Value"
QT_MOC_LITERAL(20, 467, 24), // "on_joint1FButton_pressed"
QT_MOC_LITERAL(21, 492, 25), // "on_joint1FButton_released"
QT_MOC_LITERAL(22, 518, 24), // "on_joint1RButton_pressed"
QT_MOC_LITERAL(23, 543, 25), // "on_joint1RButton_released"
QT_MOC_LITERAL(24, 569, 24), // "on_joint2FButton_pressed"
QT_MOC_LITERAL(25, 594, 25), // "on_joint2FButton_released"
QT_MOC_LITERAL(26, 620, 24), // "on_joint2RButton_pressed"
QT_MOC_LITERAL(27, 645, 25), // "on_joint2RButton_released"
QT_MOC_LITERAL(28, 671, 24), // "on_joint3FButton_pressed"
QT_MOC_LITERAL(29, 696, 25), // "on_joint3FButton_released"
QT_MOC_LITERAL(30, 722, 24), // "on_joint3RButton_pressed"
QT_MOC_LITERAL(31, 747, 25), // "on_joint3RButton_released"
QT_MOC_LITERAL(32, 773, 24), // "on_joint4FButton_pressed"
QT_MOC_LITERAL(33, 798, 25), // "on_joint4FButton_released"
QT_MOC_LITERAL(34, 824, 24), // "on_joint4RButton_pressed"
QT_MOC_LITERAL(35, 849, 25), // "on_joint4RButton_released"
QT_MOC_LITERAL(36, 875, 24), // "on_joint5FButton_pressed"
QT_MOC_LITERAL(37, 900, 25), // "on_joint5FButton_released"
QT_MOC_LITERAL(38, 926, 24), // "on_joint5RButton_pressed"
QT_MOC_LITERAL(39, 951, 25), // "on_joint5RButton_released"
QT_MOC_LITERAL(40, 977, 24), // "on_joint6FButton_pressed"
QT_MOC_LITERAL(41, 1002, 25), // "on_joint6FButton_released"
QT_MOC_LITERAL(42, 1028, 24), // "on_joint6RButton_pressed"
QT_MOC_LITERAL(43, 1053, 25), // "on_joint6RButton_released"
QT_MOC_LITERAL(44, 1079, 24), // "on_joint7FButton_pressed"
QT_MOC_LITERAL(45, 1104, 25), // "on_joint7FButton_released"
QT_MOC_LITERAL(46, 1130, 24), // "on_joint7RButton_pressed"
QT_MOC_LITERAL(47, 1155, 25), // "on_joint7RButton_released"
QT_MOC_LITERAL(48, 1181, 24), // "updateLineEditFromSlider"
QT_MOC_LITERAL(49, 1206, 5), // "value"
QT_MOC_LITERAL(50, 1212, 24), // "updateSliderFromLineEdit"
QT_MOC_LITERAL(51, 1237, 4), // "text"
QT_MOC_LITERAL(52, 1242, 27), // "on_joint1TurnButton_clicked"
QT_MOC_LITERAL(53, 1270, 27), // "on_joint2TurnButton_clicked"
QT_MOC_LITERAL(54, 1298, 27), // "on_joint3TurnButton_clicked"
QT_MOC_LITERAL(55, 1326, 27), // "on_joint4TurnButton_clicked"
QT_MOC_LITERAL(56, 1354, 27), // "on_joint5TurnButton_clicked"
QT_MOC_LITERAL(57, 1382, 27), // "on_joint6TurnButton_clicked"
QT_MOC_LITERAL(58, 1410, 27), // "on_joint7TurnButton_clicked"
QT_MOC_LITERAL(59, 1438, 22), // "on_clearButton_clicked"
QT_MOC_LITERAL(60, 1461, 20), // "on_idButton1_clicked"
QT_MOC_LITERAL(61, 1482, 20), // "on_idButton2_clicked"
QT_MOC_LITERAL(62, 1503, 20), // "on_idButton3_clicked"
QT_MOC_LITERAL(63, 1524, 20), // "on_idButton4_clicked"
QT_MOC_LITERAL(64, 1545, 20), // "on_idButton5_clicked"
QT_MOC_LITERAL(65, 1566, 20), // "on_idButton6_clicked"
QT_MOC_LITERAL(66, 1587, 20), // "on_idButton7_clicked"
QT_MOC_LITERAL(67, 1608, 22), // "on_pushButton1_clicked"
QT_MOC_LITERAL(68, 1631, 22), // "on_pushButton2_clicked"
QT_MOC_LITERAL(69, 1654, 22), // "on_pushButton3_clicked"
QT_MOC_LITERAL(70, 1677, 22), // "on_pushButton4_clicked"
QT_MOC_LITERAL(71, 1700, 22), // "on_pushButton5_clicked"
QT_MOC_LITERAL(72, 1723, 22), // "on_pushButton6_clicked"
QT_MOC_LITERAL(73, 1746, 22), // "on_pushButton7_clicked"
QT_MOC_LITERAL(74, 1769, 22), // "on_pushButton8_clicked"
QT_MOC_LITERAL(75, 1792, 22), // "on_pushButton9_clicked"
QT_MOC_LITERAL(76, 1815, 23), // "on_pushButton10_clicked"
QT_MOC_LITERAL(77, 1839, 23), // "on_pushButton11_clicked"
QT_MOC_LITERAL(78, 1863, 23), // "on_pushButton13_clicked"
QT_MOC_LITERAL(79, 1887, 23), // "on_pushButton14_clicked"
QT_MOC_LITERAL(80, 1911, 26), // "sendCommandAndUpdate1Value"
QT_MOC_LITERAL(81, 1938, 27), // "sendCommandAndUpdate1Value1"
QT_MOC_LITERAL(82, 1966, 26), // "sendCommandAndUpdate2Value"
QT_MOC_LITERAL(83, 1993, 27), // "sendCommandAndUpdate2Value2"
QT_MOC_LITERAL(84, 2021, 26), // "sendCommandAndUpdate3Value"
QT_MOC_LITERAL(85, 2048, 27), // "sendCommandAndUpdate3Value3"
QT_MOC_LITERAL(86, 2076, 26), // "sendCommandAndUpdate4Value"
QT_MOC_LITERAL(87, 2103, 27), // "sendCommandAndUpdate4Value4"
QT_MOC_LITERAL(88, 2131, 26), // "sendCommandAndUpdate5Value"
QT_MOC_LITERAL(89, 2158, 27), // "sendCommandAndUpdate5Value5"
QT_MOC_LITERAL(90, 2186, 26), // "sendCommandAndUpdate6Value"
QT_MOC_LITERAL(91, 2213, 27), // "sendCommandAndUpdate6Value6"
QT_MOC_LITERAL(92, 2241, 26), // "sendCommandAndUpdate7Value"
QT_MOC_LITERAL(93, 2268, 27), // "sendCommandAndUpdate7Value7"
QT_MOC_LITERAL(94, 2296, 26), // "sendCommandAndUpdate8Value"
QT_MOC_LITERAL(95, 2323, 27), // "sendCommandAndUpdate8Value8"
QT_MOC_LITERAL(96, 2351, 26), // "sendCommandAndUpdate9Value"
QT_MOC_LITERAL(97, 2378, 27), // "sendCommandAndUpdate9Value9"
QT_MOC_LITERAL(98, 2406, 27), // "sendCommandAndUpdate10Value"
QT_MOC_LITERAL(99, 2434, 29), // "sendCommandAndUpdate10Value10"
QT_MOC_LITERAL(100, 2464, 27), // "sendCommandAndUpdate11Value"
QT_MOC_LITERAL(101, 2492, 27), // "sendCommandAndUpdate13Value"
QT_MOC_LITERAL(102, 2520, 29), // "sendCommandAndUpdate13Value13"
QT_MOC_LITERAL(103, 2550, 27), // "sendCommandAndUpdate14Value"
QT_MOC_LITERAL(104, 2578, 24) // "on_pushButton_15_clicked"

    },
    "MainWindow\0on_openDeviceButton_clicked\0"
    "\0on_enableDeviceButton_clicked\0"
    "on_disableDeviceButton_clicked\0"
    "on_errorButton_clicked\0on_pushButton15_clicked\0"
    "on_pushButton16_clicked\0on_pushButton17_clicked\0"
    "on_pushButton18_clicked\0on_pushButton19_clicked\0"
    "on_pushButton20_clicked\0"
    "sendCommandAndUpdate21Value\0ID\0"
    "sendCommandAndUpdate15Value\0"
    "sendCommandAndUpdate16Value\0"
    "sendCommandAndUpdate17Value\0"
    "sendCommandAndUpdate18Value\0"
    "sendCommandAndUpdate19Value\0"
    "sendCommandAndUpdate20Value\0"
    "on_joint1FButton_pressed\0"
    "on_joint1FButton_released\0"
    "on_joint1RButton_pressed\0"
    "on_joint1RButton_released\0"
    "on_joint2FButton_pressed\0"
    "on_joint2FButton_released\0"
    "on_joint2RButton_pressed\0"
    "on_joint2RButton_released\0"
    "on_joint3FButton_pressed\0"
    "on_joint3FButton_released\0"
    "on_joint3RButton_pressed\0"
    "on_joint3RButton_released\0"
    "on_joint4FButton_pressed\0"
    "on_joint4FButton_released\0"
    "on_joint4RButton_pressed\0"
    "on_joint4RButton_released\0"
    "on_joint5FButton_pressed\0"
    "on_joint5FButton_released\0"
    "on_joint5RButton_pressed\0"
    "on_joint5RButton_released\0"
    "on_joint6FButton_pressed\0"
    "on_joint6FButton_released\0"
    "on_joint6RButton_pressed\0"
    "on_joint6RButton_released\0"
    "on_joint7FButton_pressed\0"
    "on_joint7FButton_released\0"
    "on_joint7RButton_pressed\0"
    "on_joint7RButton_released\0"
    "updateLineEditFromSlider\0value\0"
    "updateSliderFromLineEdit\0text\0"
    "on_joint1TurnButton_clicked\0"
    "on_joint2TurnButton_clicked\0"
    "on_joint3TurnButton_clicked\0"
    "on_joint4TurnButton_clicked\0"
    "on_joint5TurnButton_clicked\0"
    "on_joint6TurnButton_clicked\0"
    "on_joint7TurnButton_clicked\0"
    "on_clearButton_clicked\0on_idButton1_clicked\0"
    "on_idButton2_clicked\0on_idButton3_clicked\0"
    "on_idButton4_clicked\0on_idButton5_clicked\0"
    "on_idButton6_clicked\0on_idButton7_clicked\0"
    "on_pushButton1_clicked\0on_pushButton2_clicked\0"
    "on_pushButton3_clicked\0on_pushButton4_clicked\0"
    "on_pushButton5_clicked\0on_pushButton6_clicked\0"
    "on_pushButton7_clicked\0on_pushButton8_clicked\0"
    "on_pushButton9_clicked\0on_pushButton10_clicked\0"
    "on_pushButton11_clicked\0on_pushButton13_clicked\0"
    "on_pushButton14_clicked\0"
    "sendCommandAndUpdate1Value\0"
    "sendCommandAndUpdate1Value1\0"
    "sendCommandAndUpdate2Value\0"
    "sendCommandAndUpdate2Value2\0"
    "sendCommandAndUpdate3Value\0"
    "sendCommandAndUpdate3Value3\0"
    "sendCommandAndUpdate4Value\0"
    "sendCommandAndUpdate4Value4\0"
    "sendCommandAndUpdate5Value\0"
    "sendCommandAndUpdate5Value5\0"
    "sendCommandAndUpdate6Value\0"
    "sendCommandAndUpdate6Value6\0"
    "sendCommandAndUpdate7Value\0"
    "sendCommandAndUpdate7Value7\0"
    "sendCommandAndUpdate8Value\0"
    "sendCommandAndUpdate8Value8\0"
    "sendCommandAndUpdate9Value\0"
    "sendCommandAndUpdate9Value9\0"
    "sendCommandAndUpdate10Value\0"
    "sendCommandAndUpdate10Value10\0"
    "sendCommandAndUpdate11Value\0"
    "sendCommandAndUpdate13Value\0"
    "sendCommandAndUpdate13Value13\0"
    "sendCommandAndUpdate14Value\0"
    "on_pushButton_15_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     100,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  514,    2, 0x08 /* Private */,
       3,    0,  515,    2, 0x08 /* Private */,
       4,    0,  516,    2, 0x08 /* Private */,
       5,    0,  517,    2, 0x08 /* Private */,
       6,    0,  518,    2, 0x08 /* Private */,
       7,    0,  519,    2, 0x08 /* Private */,
       8,    0,  520,    2, 0x08 /* Private */,
       9,    0,  521,    2, 0x08 /* Private */,
      10,    0,  522,    2, 0x08 /* Private */,
      11,    0,  523,    2, 0x08 /* Private */,
      12,    1,  524,    2, 0x08 /* Private */,
      14,    1,  527,    2, 0x08 /* Private */,
      15,    1,  530,    2, 0x08 /* Private */,
      16,    1,  533,    2, 0x08 /* Private */,
      17,    1,  536,    2, 0x08 /* Private */,
      18,    1,  539,    2, 0x08 /* Private */,
      19,    1,  542,    2, 0x08 /* Private */,
      20,    0,  545,    2, 0x08 /* Private */,
      21,    0,  546,    2, 0x08 /* Private */,
      22,    0,  547,    2, 0x08 /* Private */,
      23,    0,  548,    2, 0x08 /* Private */,
      24,    0,  549,    2, 0x08 /* Private */,
      25,    0,  550,    2, 0x08 /* Private */,
      26,    0,  551,    2, 0x08 /* Private */,
      27,    0,  552,    2, 0x08 /* Private */,
      28,    0,  553,    2, 0x08 /* Private */,
      29,    0,  554,    2, 0x08 /* Private */,
      30,    0,  555,    2, 0x08 /* Private */,
      31,    0,  556,    2, 0x08 /* Private */,
      32,    0,  557,    2, 0x08 /* Private */,
      33,    0,  558,    2, 0x08 /* Private */,
      34,    0,  559,    2, 0x08 /* Private */,
      35,    0,  560,    2, 0x08 /* Private */,
      36,    0,  561,    2, 0x08 /* Private */,
      37,    0,  562,    2, 0x08 /* Private */,
      38,    0,  563,    2, 0x08 /* Private */,
      39,    0,  564,    2, 0x08 /* Private */,
      40,    0,  565,    2, 0x08 /* Private */,
      41,    0,  566,    2, 0x08 /* Private */,
      42,    0,  567,    2, 0x08 /* Private */,
      43,    0,  568,    2, 0x08 /* Private */,
      44,    0,  569,    2, 0x08 /* Private */,
      45,    0,  570,    2, 0x08 /* Private */,
      46,    0,  571,    2, 0x08 /* Private */,
      47,    0,  572,    2, 0x08 /* Private */,
      48,    1,  573,    2, 0x08 /* Private */,
      50,    1,  576,    2, 0x08 /* Private */,
      52,    0,  579,    2, 0x08 /* Private */,
      53,    0,  580,    2, 0x08 /* Private */,
      54,    0,  581,    2, 0x08 /* Private */,
      55,    0,  582,    2, 0x08 /* Private */,
      56,    0,  583,    2, 0x08 /* Private */,
      57,    0,  584,    2, 0x08 /* Private */,
      58,    0,  585,    2, 0x08 /* Private */,
      59,    0,  586,    2, 0x08 /* Private */,
      60,    0,  587,    2, 0x08 /* Private */,
      61,    0,  588,    2, 0x08 /* Private */,
      62,    0,  589,    2, 0x08 /* Private */,
      63,    0,  590,    2, 0x08 /* Private */,
      64,    0,  591,    2, 0x08 /* Private */,
      65,    0,  592,    2, 0x08 /* Private */,
      66,    0,  593,    2, 0x08 /* Private */,
      67,    0,  594,    2, 0x08 /* Private */,
      68,    0,  595,    2, 0x08 /* Private */,
      69,    0,  596,    2, 0x08 /* Private */,
      70,    0,  597,    2, 0x08 /* Private */,
      71,    0,  598,    2, 0x08 /* Private */,
      72,    0,  599,    2, 0x08 /* Private */,
      73,    0,  600,    2, 0x08 /* Private */,
      74,    0,  601,    2, 0x08 /* Private */,
      75,    0,  602,    2, 0x08 /* Private */,
      76,    0,  603,    2, 0x08 /* Private */,
      77,    0,  604,    2, 0x08 /* Private */,
      78,    0,  605,    2, 0x08 /* Private */,
      79,    0,  606,    2, 0x08 /* Private */,
      80,    1,  607,    2, 0x08 /* Private */,
      81,    1,  610,    2, 0x08 /* Private */,
      82,    1,  613,    2, 0x08 /* Private */,
      83,    1,  616,    2, 0x08 /* Private */,
      84,    1,  619,    2, 0x08 /* Private */,
      85,    1,  622,    2, 0x08 /* Private */,
      86,    1,  625,    2, 0x08 /* Private */,
      87,    1,  628,    2, 0x08 /* Private */,
      88,    1,  631,    2, 0x08 /* Private */,
      89,    1,  634,    2, 0x08 /* Private */,
      90,    1,  637,    2, 0x08 /* Private */,
      91,    1,  640,    2, 0x08 /* Private */,
      92,    1,  643,    2, 0x08 /* Private */,
      93,    1,  646,    2, 0x08 /* Private */,
      94,    1,  649,    2, 0x08 /* Private */,
      95,    1,  652,    2, 0x08 /* Private */,
      96,    1,  655,    2, 0x08 /* Private */,
      97,    1,  658,    2, 0x08 /* Private */,
      98,    1,  661,    2, 0x08 /* Private */,
      99,    1,  664,    2, 0x08 /* Private */,
     100,    1,  667,    2, 0x08 /* Private */,
     101,    1,  670,    2, 0x08 /* Private */,
     102,    1,  673,    2, 0x08 /* Private */,
     103,    1,  676,    2, 0x08 /* Private */,
     104,    0,  679,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   49,
    QMetaType::Void, QMetaType::QString,   51,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_openDeviceButton_clicked(); break;
        case 1: _t->on_enableDeviceButton_clicked(); break;
        case 2: _t->on_disableDeviceButton_clicked(); break;
        case 3: _t->on_errorButton_clicked(); break;
        case 4: _t->on_pushButton15_clicked(); break;
        case 5: _t->on_pushButton16_clicked(); break;
        case 6: _t->on_pushButton17_clicked(); break;
        case 7: _t->on_pushButton18_clicked(); break;
        case 8: _t->on_pushButton19_clicked(); break;
        case 9: _t->on_pushButton20_clicked(); break;
        case 10: _t->sendCommandAndUpdate21Value((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->sendCommandAndUpdate15Value((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->sendCommandAndUpdate16Value((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->sendCommandAndUpdate17Value((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->sendCommandAndUpdate18Value((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->sendCommandAndUpdate19Value((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->sendCommandAndUpdate20Value((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->on_joint1FButton_pressed(); break;
        case 18: _t->on_joint1FButton_released(); break;
        case 19: _t->on_joint1RButton_pressed(); break;
        case 20: _t->on_joint1RButton_released(); break;
        case 21: _t->on_joint2FButton_pressed(); break;
        case 22: _t->on_joint2FButton_released(); break;
        case 23: _t->on_joint2RButton_pressed(); break;
        case 24: _t->on_joint2RButton_released(); break;
        case 25: _t->on_joint3FButton_pressed(); break;
        case 26: _t->on_joint3FButton_released(); break;
        case 27: _t->on_joint3RButton_pressed(); break;
        case 28: _t->on_joint3RButton_released(); break;
        case 29: _t->on_joint4FButton_pressed(); break;
        case 30: _t->on_joint4FButton_released(); break;
        case 31: _t->on_joint4RButton_pressed(); break;
        case 32: _t->on_joint4RButton_released(); break;
        case 33: _t->on_joint5FButton_pressed(); break;
        case 34: _t->on_joint5FButton_released(); break;
        case 35: _t->on_joint5RButton_pressed(); break;
        case 36: _t->on_joint5RButton_released(); break;
        case 37: _t->on_joint6FButton_pressed(); break;
        case 38: _t->on_joint6FButton_released(); break;
        case 39: _t->on_joint6RButton_pressed(); break;
        case 40: _t->on_joint6RButton_released(); break;
        case 41: _t->on_joint7FButton_pressed(); break;
        case 42: _t->on_joint7FButton_released(); break;
        case 43: _t->on_joint7RButton_pressed(); break;
        case 44: _t->on_joint7RButton_released(); break;
        case 45: _t->updateLineEditFromSlider((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 46: _t->updateSliderFromLineEdit((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 47: _t->on_joint1TurnButton_clicked(); break;
        case 48: _t->on_joint2TurnButton_clicked(); break;
        case 49: _t->on_joint3TurnButton_clicked(); break;
        case 50: _t->on_joint4TurnButton_clicked(); break;
        case 51: _t->on_joint5TurnButton_clicked(); break;
        case 52: _t->on_joint6TurnButton_clicked(); break;
        case 53: _t->on_joint7TurnButton_clicked(); break;
        case 54: _t->on_clearButton_clicked(); break;
        case 55: _t->on_idButton1_clicked(); break;
        case 56: _t->on_idButton2_clicked(); break;
        case 57: _t->on_idButton3_clicked(); break;
        case 58: _t->on_idButton4_clicked(); break;
        case 59: _t->on_idButton5_clicked(); break;
        case 60: _t->on_idButton6_clicked(); break;
        case 61: _t->on_idButton7_clicked(); break;
        case 62: _t->on_pushButton1_clicked(); break;
        case 63: _t->on_pushButton2_clicked(); break;
        case 64: _t->on_pushButton3_clicked(); break;
        case 65: _t->on_pushButton4_clicked(); break;
        case 66: _t->on_pushButton5_clicked(); break;
        case 67: _t->on_pushButton6_clicked(); break;
        case 68: _t->on_pushButton7_clicked(); break;
        case 69: _t->on_pushButton8_clicked(); break;
        case 70: _t->on_pushButton9_clicked(); break;
        case 71: _t->on_pushButton10_clicked(); break;
        case 72: _t->on_pushButton11_clicked(); break;
        case 73: _t->on_pushButton13_clicked(); break;
        case 74: _t->on_pushButton14_clicked(); break;
        case 75: _t->sendCommandAndUpdate1Value((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 76: _t->sendCommandAndUpdate1Value1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 77: _t->sendCommandAndUpdate2Value((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 78: _t->sendCommandAndUpdate2Value2((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 79: _t->sendCommandAndUpdate3Value((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 80: _t->sendCommandAndUpdate3Value3((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 81: _t->sendCommandAndUpdate4Value((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 82: _t->sendCommandAndUpdate4Value4((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 83: _t->sendCommandAndUpdate5Value((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 84: _t->sendCommandAndUpdate5Value5((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 85: _t->sendCommandAndUpdate6Value((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 86: _t->sendCommandAndUpdate6Value6((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 87: _t->sendCommandAndUpdate7Value((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 88: _t->sendCommandAndUpdate7Value7((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 89: _t->sendCommandAndUpdate8Value((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 90: _t->sendCommandAndUpdate8Value8((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 91: _t->sendCommandAndUpdate9Value((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 92: _t->sendCommandAndUpdate9Value9((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 93: _t->sendCommandAndUpdate10Value((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 94: _t->sendCommandAndUpdate10Value10((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 95: _t->sendCommandAndUpdate11Value((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 96: _t->sendCommandAndUpdate13Value((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 97: _t->sendCommandAndUpdate13Value13((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 98: _t->sendCommandAndUpdate14Value((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 99: _t->on_pushButton_15_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 100)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 100;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 100)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 100;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
