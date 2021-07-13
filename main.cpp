#include "mainwindow.h"
#include <bits/stdc++.h>
#include <QApplication>
#include "ui_mainwindow.h"
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    //Print();
    return a.exec();
}
