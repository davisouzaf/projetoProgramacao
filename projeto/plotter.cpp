#include "plotter.h"


Plotter::Plotter(QWidget *parent) : QWidget(parent){

}

void Plotter::paintEvent(QPaintEvent *event)
{

    QPainter painter(this);
    QPen pen;
    QBrush brush;
    //painter.setRenderHint(QPainter::Antialiasing);
    brush.setColor(QColor(0,255,0));
    brush.setStyle(Qt::SolidPattern);
    pen.setColor(QColor(0,0,0));
    pen.setWidth(1);
    pen.setStyle(Qt::SolidLine);
    painter.setPen(pen);
    painter.setBrush(brush);
    int auxx=0,auxy=0;

    for(int i=1;i<=this->x+1;i++){
        painter.drawLine(0,auxy,width(),auxy);
        auxy+=height()/this->x;
    }

    for (int i=1;i<=this->y+1;i++) {
        painter.drawLine(auxx,0,auxx,height());
        auxx+=width()/this->y;
    }

}

void Plotter::setX(int x){
    this->x=x;
}

void Plotter::setY(int y)
{
    this->y=y;
}

void Plotter::setZ(int y)
{
    this->z=z;
}
