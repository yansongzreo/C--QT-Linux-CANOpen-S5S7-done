QT       += core gui
TARGET = S7_CTL
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    canfestival_master.cpp \
    main.cpp \
    mainwindow.cpp\
    master.cpp


HEADERS += \
    mainwindow.h\
master.h\
canfestival_master.h \
    sharedvariables.h

FORMS += \
    mainwindow.ui

INCLUDEPATH += /usr/local/include/canfestival/
LIBS += -L /usr/local/lib/ -lcanfestival -lcanfestival_unix -lpthread -lrt -ldl
LIBS += -L/usr/local/lib/ -lcanfestival_can_socket
# Default rules for deployment.
#LIBS += -L /usr/local/lib/ -lcanfestival -lcanfestival_unix
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
