g++  -o untitled1 main.o mainwindow.o  moc_mainwindow.o  /usr/lib/aarch64-linux-gnu/libQt5Widgets.so /usr/lib/aarch64-linux-gnu/libQt5Gui.so /usr/lib/aarch64-linux-gnu/libQt5Core.so /usr/lib/aarch64-linux-gnu/libGL.so -lpthread


g++  -o untitled1 main.o mainwindow.o  moc_mainwindow.o  /usr/lib/aarch64-linux-gnu/libQt5Widgets.so /usr/lib/aarch64-linux-gnu/libQt5Gui.so /usr/lib/aarch64-linux-gnu/libQt5Core.so /usr/lib/aarch64-linux-gnu/libGL.so -I /usr/local/include/canfestival/ -L /usr/local/lib/ -lcanfestival -lcanfestival_unix -lpthread -lrt -ldl

MasterNode.c -I /usr/local/include/canfestival/ -L /usr/local/lib/ -lcanfestival -lcanfestival_unix -lpthread -lrt -ldl

g++  -O2 main.cpp mainwindow.cpp master.c MasterNode.c  /usr/lib/aarch64-linux-gnu/libQt5Widgets.so /usr/lib/aarch64-linux-gnu/libQt5Gui.so /usr/lib/aarch64-linux-gnu/libQt5Core.so /usr/lib/aarch64-linux-gnu/libGL.so -I /usr/local/include/canfestival/ -L /usr/local/lib/ -lcanfestival -lcanfestival_unix -lpthread -lrt -ldl -o test
