#include "plotter.h"


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
    /*int x,y;
    x=event->x();
    y=event->y();
    emit mouseX(x);
    */
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
