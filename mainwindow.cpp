#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton->setText("查询");
    QImage Image;
    QImage Image2;
    QImage start;
    QImage end;
    //image
    start.load(":/img/qidian.png");
    end.load(":/img/zhongdian.png");
    Image.load(":/img/Line.jpg");
    Image2.load(":/img/guangzhouditie.png");
    QPixmap pixmap3 = QPixmap::fromImage(start);
    int with3 = ui->label_6->width();
    int height3 = ui->label_6->height();
    QPixmap fitpixmap3 = pixmap3.scaled(with3, height3, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);  // 饱满填充
    ui->label_6->setPixmap(fitpixmap3);

    QPixmap pixmap4 = QPixmap::fromImage(end);
    int with4 = ui->label_7->width();
    int height4 = ui->label_7->height();
    QPixmap fitpixmap4 = pixmap4.scaled(with4, height4, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);  // 饱满填充
    ui->label_7->setPixmap(fitpixmap4);

    QPixmap pixmap = QPixmap::fromImage(Image);
    int with = ui->label_3->width();
    int height = ui->label_3->height();
    QPixmap fitpixmap = pixmap.scaled(with, height, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);  // 饱满填充
    ui->label_3->setPixmap(fitpixmap);
    QPixmap pixmap2 = QPixmap::fromImage(Image2);
    int with2 = ui->label_5->width();
    int height2 = ui->label_5->height();
    QPixmap fitpixmap2 = pixmap2.scaled(with2, height2, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    ui->label_5->setPixmap(fitpixmap2);
    //title
    QFont font ( "Microsoft YaHei", 15, 75);
    ui->label_4->setFont(font);

    QFont font_2 ( "Microsoft YaHei", 10, 60);
    ui->label->setFont(font_2);
    ui->label_2->setFont(font_2);
    //combox
    ui->comboBox->clear();
    //ui->comboBox->addItems(QList);
    //Line1
    ui->comboBox->setIconSize(QSize(16,16));
    ui->comboBox->addItem(QIcon(":/img/ditie.png"),"广州东站");
    ui->comboBox->addItem(QIcon(":/img/ditie.png"),"体育中心");
    ui->comboBox->addItem(QIcon(":/img/ly_huancheng.png"),"体育西路");
    ui->comboBox->addItem(QIcon(":/img/ditie.png"),"杨箕");
    ui->comboBox->addItem(QIcon(":/img/ditie.png"),"东山口");
    ui->comboBox->addItem(QIcon(":/img/ditie.png"),"烈士陵园");
    ui->comboBox->addItem(QIcon(":/img/ditie.png"),"农讲所");
    ui->comboBox->addItem(QIcon(":/img/ly_huancheng2.png"),"公园前");
    ui->comboBox->addItem(QIcon(":/img/ditie.png"),"西门口");
    ui->comboBox->addItem(QIcon(":/img/ditie.png"),"陈家祠");
    ui->comboBox->addItem(QIcon(":/img/ditie.png"),"长寿路");
    ui->comboBox->addItem(QIcon(":/img/ditie.png"),"黄沙");
    ui->comboBox->addItem(QIcon(":/img/ditie.png"),"芳村");
    ui->comboBox->addItem(QIcon(":/img/ditie.png"),"花地湾");
    ui->comboBox->addItem(QIcon(":/img/ditie.png"),"坑口");
    ui->comboBox->addItem(QIcon(":/img/ditie.png"),"西朗");
    //Line2
    ui->comboBox->addItem(QIcon(":/img/ditie-2.png"),"广州南站");
    ui->comboBox->addItem(QIcon(":/img/ditie-2.png"),"石壁");
    ui->comboBox->addItem(QIcon(":/img/ditie-2.png"),"会江");
    ui->comboBox->addItem(QIcon(":/img/ditie-2.png"),"南浦");
    ui->comboBox->addItem(QIcon(":/img/ditie-2.png"),"洛溪");
    ui->comboBox->addItem(QIcon(":/img/ditie-2.png"),"南洲");
    ui->comboBox->addItem(QIcon(":/img/ditie-2.png"),"东晓南");
    ui->comboBox->addItem(QIcon(":/img/ditie-2.png"),"江泰路");
    ui->comboBox->addItem(QIcon(":/img/ditie-2.png"),"昌岗");
    ui->comboBox->addItem(QIcon(":/img/ditie-2.png"),"江南西");
    ui->comboBox->addItem(QIcon(":/img/ditie-2.png"),"市二宫");
    ui->comboBox->addItem(QIcon(":/img/ditie-2.png"),"海珠广场");
    ui->comboBox->addItem(QIcon(":/img/ditie-2.png"),"纪念堂");
    ui->comboBox->addItem(QIcon(":/img/ditie-2.png"),"越秀公园");
    ui->comboBox->addItem(QIcon(":/img/ditie-2.png"),"广州火车站");
    ui->comboBox->addItem(QIcon(":/img/ditie-2.png"),"三元里");
    ui->comboBox->addItem(QIcon(":/img/ditie-2.png"),"飞翔公园");
    ui->comboBox->addItem(QIcon(":/img/ditie-2.png"),"白云公园");
    ui->comboBox->addItem(QIcon(":/img/ditie-2.png"),"白云文化广场");
    ui->comboBox->addItem(QIcon(":/img/ditie-2.png"),"萧岗");
    ui->comboBox->addItem(QIcon(":/img/ditie-2.png"),"江夏");
    ui->comboBox->addItem(QIcon(":/img/ditie-2.png"),"黄边");
    ui->comboBox->addItem(QIcon(":/img/ly_huancheng3.png"),"嘉禾望岗");
    //Line3
    ui->comboBox->addItem(QIcon(":/img/ditie-3.png"),"天河客运站");
    ui->comboBox->addItem(QIcon(":/img/ditie-3.png"),"五山");
    ui->comboBox->addItem(QIcon(":/img/ditie-3.png"),"华师");
    ui->comboBox->addItem(QIcon(":/img/ditie-3.png"),"岗顶");
    ui->comboBox->addItem(QIcon(":/img/ly_huancheng.png"),"石牌桥");
    ui->comboBox->addItem(QIcon(":/img/ditie-3.png"),"珠江新城");
    ui->comboBox->addItem(QIcon(":/img/ditie-3.png"),"广州塔");
    ui->comboBox->addItem(QIcon(":/img/ditie-3.png"),"客村");
    ui->comboBox->addItem(QIcon(":/img/ditie-3.png"),"大塘");
    ui->comboBox->addItem(QIcon(":/img/ditie-3.png"),"沥滘");
    ui->comboBox->addItem(QIcon(":/img/ditie-3.png"),"厦滘");
    ui->comboBox->addItem(QIcon(":/img/ditie-3.png"),"汉溪长隆");
    ui->comboBox->addItem(QIcon(":/img/ditie-3.png"),"市桥");
    ui->comboBox->addItem(QIcon(":/img/ditie-3.png"),"番禺广场");

    //comboBox2
    //Line1
    ui->comboBox_2->setIconSize(QSize(16,16));
    ui->comboBox_2->addItem(QIcon(":/img/ditie.png"),"广州东站");
    ui->comboBox_2->addItem(QIcon(":/img/ditie.png"),"体育中心");
    ui->comboBox_2->addItem(QIcon(":/img/ly_huancheng.png"),"体育西路");
    ui->comboBox_2->addItem(QIcon(":/img/ditie.png"),"杨箕");
    ui->comboBox_2->addItem(QIcon(":/img/ditie.png"),"东山口");
    ui->comboBox_2->addItem(QIcon(":/img/ditie.png"),"烈士陵园");
    ui->comboBox_2->addItem(QIcon(":/img/ditie.png"),"农讲所");
    ui->comboBox_2->addItem(QIcon(":/img/ly_huancheng2.png"),"公园前");
    ui->comboBox_2->addItem(QIcon(":/img/ditie.png"),"西门口");
    ui->comboBox_2->addItem(QIcon(":/img/ditie.png"),"陈家祠");
    ui->comboBox_2->addItem(QIcon(":/img/ditie.png"),"长寿路");
    ui->comboBox_2->addItem(QIcon(":/img/ditie.png"),"黄沙");
    ui->comboBox_2->addItem(QIcon(":/img/ditie.png"),"芳村");
    ui->comboBox_2->addItem(QIcon(":/img/ditie.png"),"花地湾");
    ui->comboBox_2->addItem(QIcon(":/img/ditie.png"),"坑口");
    ui->comboBox_2->addItem(QIcon(":/img/ditie.png"),"西朗");
    //Line2
    ui->comboBox_2->addItem(QIcon(":/img/ditie-2.png"),"广州南站");
    ui->comboBox_2->addItem(QIcon(":/img/ditie-2.png"),"石壁");
    ui->comboBox_2->addItem(QIcon(":/img/ditie-2.png"),"会江");
    ui->comboBox_2->addItem(QIcon(":/img/ditie-2.png"),"南浦");
    ui->comboBox_2->addItem(QIcon(":/img/ditie-2.png"),"洛溪");
    ui->comboBox_2->addItem(QIcon(":/img/ditie-2.png"),"南洲");
    ui->comboBox_2->addItem(QIcon(":/img/ditie-2.png"),"东晓南");
    ui->comboBox_2->addItem(QIcon(":/img/ditie-2.png"),"江泰路");
    ui->comboBox_2->addItem(QIcon(":/img/ditie-2.png"),"昌岗");
    ui->comboBox_2->addItem(QIcon(":/img/ditie-2.png"),"江南西");
    ui->comboBox_2->addItem(QIcon(":/img/ditie-2.png"),"市二宫");
    ui->comboBox_2->addItem(QIcon(":/img/ditie-2.png"),"海珠广场");
    ui->comboBox_2->addItem(QIcon(":/img/ditie-2.png"),"纪念堂");
    ui->comboBox_2->addItem(QIcon(":/img/ditie-2.png"),"越秀公园");
    ui->comboBox_2->addItem(QIcon(":/img/ditie-2.png"),"广州火车站");
    ui->comboBox_2->addItem(QIcon(":/img/ditie-2.png"),"三元里");
    ui->comboBox_2->addItem(QIcon(":/img/ditie-2.png"),"飞翔公园");
    ui->comboBox_2->addItem(QIcon(":/img/ditie-2.png"),"白云公园");
    ui->comboBox_2->addItem(QIcon(":/img/ditie-2.png"),"白云文化广场");
    ui->comboBox_2->addItem(QIcon(":/img/ditie-2.png"),"萧岗");
    ui->comboBox_2->addItem(QIcon(":/img/ditie-2.png"),"江夏");
    ui->comboBox_2->addItem(QIcon(":/img/ditie-2.png"),"黄边");
    ui->comboBox_2->addItem(QIcon(":/img/ly_huancheng3.png"),"嘉禾望岗");
    //Line3
    ui->comboBox_2->addItem(QIcon(":/img/ditie-3.png"),"天河客运站");
    ui->comboBox_2->addItem(QIcon(":/img/ditie-3.png"),"五山");
    ui->comboBox_2->addItem(QIcon(":/img/ditie-3.png"),"华师");
    ui->comboBox_2->addItem(QIcon(":/img/ditie-3.png"),"岗顶");
    ui->comboBox_2->addItem(QIcon(":/img/ly_huancheng.png"),"石牌桥");
    ui->comboBox_2->addItem(QIcon(":/img/ditie-3.png"),"珠江新城");
    ui->comboBox_2->addItem(QIcon(":/img/ditie-3.png"),"广州塔");
    ui->comboBox_2->addItem(QIcon(":/img/ditie-3.png"),"客村");
    ui->comboBox_2->addItem(QIcon(":/img/ditie-3.png"),"大塘");
    ui->comboBox_2->addItem(QIcon(":/img/ditie-3.png"),"沥滘");
    ui->comboBox_2->addItem(QIcon(":/img/ditie-3.png"),"厦滘");
    ui->comboBox_2->addItem(QIcon(":/img/ditie-3.png"),"汉溪长隆");
    ui->comboBox_2->addItem(QIcon(":/img/ditie-3.png"),"市桥");
    ui->comboBox_2->addItem(QIcon(":/img/ditie-3.png"),"番禺广场");

}
QString MainWindow::getCombox1(){
    QString a = ui->comboBox->currentText();
    return a;
}
QString MainWindow::getCombox2(){
    QString a = ui->comboBox_2->currentText();
    return a;
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString s1 = ui->comboBox->currentText();
    QString s2 = ui->comboBox_2->currentText();
    string str1 = s1.toStdString();
    string str2 = s2.toStdString();
    //ui->label_8->setText("<img src = ':/img/yuandian.png' width='10' height='10'/> "+s1);
    QFont font ( "Microsoft YaHei", 15, 75);
    //ui->label_8->setFont(font);
    //newLabel(30,250,171,31,str1);
    //newLabel(30,650,171,31,str2);
    QFont font2("Microsoft YaHei", 10, 75);
    ui->label_8->setFont(font2);
    ui->label_8->setText("<img src = ':/img/qidian2.png' width='25' height='25'/> "+s1);
    ui->label_9->setFont(font2);
    ui->label_9->setText("<img src = ':/img/zhongdian2.png'  width='25' height='25'/> "+s2);
    str[0]=str1;
    str[1]=str2;
    Print();
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->comboBox->setCurrentIndex(0);
    ui->comboBox_2->setCurrentIndex(0);
    ui->label_8->clear();
    ui->label_9->clear();
    ui->textEdit->clear();
}
void MainWindow::newLabel(int x, int y, int w, int h, string str){
    QString s = QString::fromStdString(str);
    QLabel *l1= new QLabel(this);
    QFont font ( "Microsoft YaHei", 10, 75);
    l1->setFont(font);
    l1->setGeometry(x, y, w, h);
    l1->setText("<img src = ':/img/yuandian.png' width='10' height='10'/> "+s);
    l1->show();
}

string ans="";

MGraph::MGraph() {
    data[0].a="广州东站";
    data[1].a="体育中心";
    data[2].a="体育西路";
    data[3].a="杨箕";
    data[4].a="东山口";
    data[5].a="烈士陵园";
    data[6].a="农讲所";
    data[7].a="公园前";
    data[8].a="西门口";
    data[9].a="陈家祠";
    data[10].a="长寿路";
    data[11].a="黄沙";
    data[12].a="芳村";
    data[13].a="花地湾";
    data[14].a="坑口";
    data[15].a="西朗";
    data[16].a="广州南站";
    data[17].a="石壁";
    data[18].a="会江";
    data[19].a="南浦";
    data[20].a="洛溪";
    data[21].a="南洲";
    data[22].a="东晓南";
    data[23].a="江泰路";
    data[24].a="昌岗";
    data[25].a="江南西";
    data[26].a="市二宫";
    data[27].a="海珠广场";
    data[28].a="纪念堂";
    data[29].a="越秀公园";
    data[30].a="广州火车站";
    data[31].a="三元里";
    data[32].a="飞翔公园";
    data[33].a="白云公园";
    data[34].a="白云文化广场";
    data[35].a="萧岗";
    data[36].a="江夏";
    data[37].a="黄边";
    data[38].a="嘉禾望岗";
    data[39].a="天河客运站";
    data[40].a="五山";
    data[41].a="华师";
    data[42].a="岗顶";
    data[43].a="石牌桥";
    data[44].a="珠江新城";
    data[45].a="广州塔";
    data[46].a="客村";
    data[47].a="大塘";
    data[48].a="沥滘";
    data[49].a="厦滘";
    data[50].a="大石";
    data[51].a="汉溪长隆";
    data[52].a="市桥";
    data[53].a="番禺广场";
    data[0].b=0;data[0].c=1;data[0].d=3;
    data[1].b=1;data[1].c=2;data[1].d=1;
    data[2].b=2;data[2].c=3;data[2].d=2;
    data[3].b=3;data[3].c=4;data[3].d=2;
    data[4].b=4;data[4].c=5;data[4].d=2;

    data[5].b=5;data[5].c=6;data[5].d=2;
    data[6].b=6;data[6].c=7;data[6].d=2;
    data[7].b=7;data[7].c=8;data[7].d=1;
    data[8].b=8;data[8].c=9;data[8].d=1;
    data[9].b=9;data[9].c=10;data[9].d=2;

    data[10].b=10;data[10].c=11;data[10].d=1;
    data[11].b=11;data[11].c=12;data[11].d=3;
    data[12].b=12;data[12].c=13;data[12].d=2;
    data[13].b=13;data[13].c=14;data[13].d=1;
    data[14].b=14;data[14].c=15;data[14].d=4;

    data[15].b=16;data[15].c=17;data[15].d=1;
    data[16].b=17;data[16].c=18;data[16].d=3;
    data[17].b=18;data[17].c=19;data[17].d=3;
    data[18].b=19;data[18].c=20;data[18].d=1;
    data[19].b=20;data[19].c=21;data[19].d=4;

    data[20].b=21;data[20].c=22;data[20].d=1;
    data[21].b=22;data[21].c=23;data[21].d=3;
    data[22].b=23;data[22].c=24;data[22].d=2;
    data[23].b=24;data[23].c=25;data[23].d=1;
    data[24].b=25;data[24].c=26;data[24].d=2;

    data[25].b=26;data[25].c=27;data[25].d=2;
    data[26].b=27;data[26].c=6;data[26].d=2;
    data[27].b=6;data[27].c=28;data[27].d=1;
    data[28].b=28;data[28].c=29;data[28].d=2;
    data[29].b=29;data[29].c=30;data[29].d=2;

    data[30].b=30;data[30].c=31;data[30].d=3;
    data[31].b=31;data[31].c=32;data[31].d=4;
    data[32].b=32;data[32].c=33;data[32].d=5;
    data[33].b=33;data[33].c=34;data[33].d=3;
    data[34].b=34;data[34].c=35;data[34].d=3;

    data[35].b=35;data[35].c=36;data[35].d=4;
    data[36].b=36;data[36].c=37;data[36].d=3;
    data[37].b=37;data[37].c=38;data[37].d=5;
    data[38].b=39;data[38].c=40;data[38].d=5;
    data[39].b=40;data[39].c=41;data[39].d=4;

    data[40].b=41;data[40].c=42;data[40].d=2;
    data[41].b=42;data[41].c=43;data[41].d=2;
    data[42].b=43;data[42].c=2;data[42].d=3;
    data[43].b=2;data[43].c=44;data[43].d=4;
    data[44].b=44;data[44].c=45;data[44].d=4;

    data[45].b=45;data[45].c=46;data[45].d=3;
    data[46].b=46;data[46].c=47;data[46].d=5;
    data[47].b=47;data[47].c=48;data[47].d=7;
    data[48].b=48;data[48].c=49;data[48].d=5;
    data[49].b=49;data[49].c=50;data[49].d=6;

    data[50].b=50;data[50].c=51;data[50].d=8;
    data[51].b=51;data[51].c=52;data[51].d=15;
    data[52].b=52;data[52].c=53;data[52].d=9;
    int n=54,e=53;
    int i,j,k,value;
    vertexNum=n;
    arcNum=e;
    for(i=0; i<vertexNum; i++)
        vertex[i]=data[i].a;
    for(i=0; i<vertexNum; i++)
        for(j=0; j<vertexNum; j++)
            arc[i][j]=1010100;
    for(k=0; k<arcNum; k++) {
        i=data[k].b;
        j=data[k].c;
        value=data[k].d;  //两个顶点 和 权值
        arc[i][j]=value;
        arc[j][i]=value;
    }
    Floyd();
}

void MGraph::Floyd() {//弗洛伊德算法
    int dist[vertexNum][vertexNum];
    for(int i=0; i<vertexNum; i++)
        for(int j=0; j<vertexNum; j++) {
            dist[i][j]=arc[i][j];
            path[i][j]=-1;
        }
    for(int k=0; k<vertexNum; k++)
        for(int i=0; i<vertexNum; i++)
            for(int j=0; j<vertexNum; j++)
                if(dist[i][j]>dist[i][k]+dist[k][j]) {
                    dist[i][j]=dist[i][k]+dist[k][j];
                    path[i][j]=k;
                }
}

void MGraph::printPath(int i,int j) {//路径输出
    //cout<<ans<<endl;
    //if(temp1==j&&temp2)return;   //combox为后面的站，combox2为前面的站会有问题
    if(path[i][j]==-1) {
        //if(arc[i][j]==1010100) ans+="两景点不可达";
        /*else if(flag) {
            ans+=vertex[i]+"<br>"+"<img src = ':/img/yuandian.png' width='10' height='10'/> "+vertex[j];
            flag=false;
        }*/ /*else */
        if(j==2)ans+="<img src = ':/img/ly_huancheng.png' width='10' height='10'/> ";
        else if(j==7)ans+="<img src = ':/img/ly_huancheng2.png' width='10' height='10'/> ";
        else if(j==38)ans+="<img src = ':/img/ly_huancheng3.png' width='10' height='10'/> ";
        else if(j==43)ans+="<img src = ':/img/ly_huancheng.png' width='10' height='10'/> ";
        else if(j>=0&&j<=15)ans+="<img src = ':/img/ditie.png' width='10' height='10'/> ";
        else if(j>=16&&j<=38)ans+="<img src = ':/img/ditie-2.png' width='10' height='10'/> ";
        else ans+="<img src = ':/img/ditie-3.png' width='10' height='10'/> ";
        ans+=vertex[j]+"<br>";
    } else {
        printPath(i,path[i][j]);
        printPath(path[i][j],j);
    }
    temp2=true;
}
void MainWindow::Print(){
    ans="";
    int i=0;
    MGraph map;
    MainWindow w;
    int index1=0,index2=0;
    bool flag1=true,flag2=true;
    //string str1 = w.getCombox1().toStdString();
    //string str2 = w.getCombox2().toStdString();
    //cout<<"str1";
    //cout<<"str2";
    for(i=0; (flag1||flag2)&&i<54; i++) {
        if(map.data[i].a==str[0]) {
            index1=i;
            flag1=false;
        }
        if(map.data[i].a==str[1]) {
            index2=i;
            flag2=false;
        }
    }
//    if(flag1||flag2) {
//        cout<<"未检索到这两个站点"<<endl;
//    }
//    cout<<"路程最短的行进方法：";
    map.temp1=index2;
    map.temp2=false;
    if(index1!=index2){
    map.printPath(index1,index2);
    //cout<<endl<<"     ";
   // w.newLabel(30,300,500,500,ans);
    ui->textEdit->setText(QString::fromStdString(ans));
    }
    else ui->textEdit->setText(QString::fromStdString("请选择两个不同的站点"));

}
