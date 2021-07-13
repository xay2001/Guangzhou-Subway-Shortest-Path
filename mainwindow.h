#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <bits/stdc++.h>
#include <QMainWindow>
using namespace std;
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QString getCombox1();
    QString getCombox2();
    void newLabel(int x,int y,int w,int h,string str);
    string str[2];
    void Print();
public slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();


private:
    Ui::MainWindow *ui;
};
const int MaxSize=100;

struct Data {
    string a;
    int b;
    int c;
    int d;
};//b,c为两顶点，d为bc的长度
class MGraph {
public:
    MGraph();
    ~MGraph() {}
    void printPath(int i,int j);
    Data data[MaxSize];
    int temp1;
    bool temp2;
private:
    void Floyd();
    string vertex[MaxSize];
    int arc[MaxSize][MaxSize];
    int vertexNum, arcNum;
    int path[MaxSize][MaxSize];

};
void Print();
#endif // MAINWINDOW_H
