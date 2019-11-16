#include "plotter.h"
#include <QPainter>
#include <QPen>
#include <QBrush>
#include <QEvent>
#include <QMouseEvent>
#include <QDebug>

Plotter::Plotter(QWidget *parent) : QWidget(parent){

}

void Plotter::paintEvent(QPaintEvent *event)
{

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
}

void Plotter::mousePressEvent(QMouseEvent *event)
{
    int x, y;
    x=event->x();
    y=event->y();
    int clinha=height()/this->x;
    int ccoluna=width()/this->y;


    qDebug()<<x<<y;
    x=(x/clinha)+1;
    y=(y/ccoluna)+1;
    emit mouseX(x);
    emit mouseY(y);
    qDebug()<<clinha<<ccoluna;
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
