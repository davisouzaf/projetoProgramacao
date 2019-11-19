#include "plotter.h"
#include <QPainter>
#include <QPen>
#include <QBrush>
#include <QEvent>
#include <QMouseEvent>
#include <QDebug>

Plotter::Plotter(QWidget *parent) : QWidget(parent){
    scpt=new Sculptor(10,10,10);
}

void Plotter::paintEvent(QPaintEvent *event)
{

    //scpt->~Sculptor();
    QPainter painter(this);
    QPen pen;
    QBrush brush;
    //painter.setRenderHint(QPainter::Antialiasing);
    brush.setColor(QColor(255,255,255));
    brush.setStyle(Qt::SolidPattern);
    pen.setColor(QColor(0,0,0));
    pen.setWidth(1);
    pen.setStyle(Qt::SolidLine);
    painter.setPen(pen);
    painter.setBrush(brush);
    int auxx=0,auxy=0;
    for (int i=1;i<=this->x;i++) {
        auxx=0;
        for (int j=1;j<=this->y;j++) {
            painter.drawRect(auxx,auxy,width()/this->y,height()/this->x);
            auxx+=(float)(width()/this->y);
        }
        auxy+=(float)(height()/this->x);
    }
    brush.setColor(selectedcolor);
    brush.setStyle(Qt::SolidPattern);
    painter.setBrush(brush);
    for (int i=0;i<x;i++) {
        for (int j=0;j<y;j++) {
            if(scpt->getisonplan(i,j,plan)==true){
                qDebug()<<i<<j;
                int xc=width()/this->y;
                int yc=height()/this->x;
                painter.drawEllipse(xc*(i-1),yc*(j-1),xc,yc);
                qDebug()<<xc<<yc;
            }
        }
    }

//    if(drawmodule==1){
//       // painter.brush(posicaox*largura/x;largura/x);
//        qDebug()<<selectedcolor.red();
//       // painter.brush(x*width()/x,width()/x,y*height()/y,height()/y);
//        //repaint();
//        painter.drawRect(x*width()/x,width()/x,y*height()/y,height()/y);
//    }else if(drawmodule==2){
//    }else {

//    }


}

void Plotter::mousePressEvent(QMouseEvent *event)
{
    int x, y;
    x=event->x();
    y=event->y();
    int clinha=height()/this->x;
    int ccoluna=width()/this->y;


    //qDebug()<<x<<y;
    x=(x/clinha)+1;
    y=(y/ccoluna)+1;
    emit mouseX(x);
    emit mouseY(y);
    qDebug()<<clinha<<ccoluna;
    qDebug()<<drawmodule;
    repaint();
    //QPainter painter(this);
    //QBrush brush;
    if(drawmodule==1){
        scpt->setColor(1/selectedcolor.red(),1/selectedcolor.green(),1/selectedcolor.blue(),1);
        scpt->putVoxel(x,y,plan);
    }
    repaint();
}

void Plotter::setX(int x){
    this->x=x;
}

void Plotter::setY(int y)
{
    this->y=y;
}

void Plotter::setZ(int z)
{
    this->z=z;
}

int Plotter::getdrawmodule()
{
    return drawmodule;
}

void Plotter::setdrawmodule(int dm)
{
    drawmodule=dm;
    // repaint();
}

void Plotter::setplan(int p)
{
    plan=p;
}
