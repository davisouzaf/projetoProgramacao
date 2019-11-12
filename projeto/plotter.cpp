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
    int x=0,y=0;
    painter.drawLine(0,0,0,height());
    painter.drawLine(0,0,width(),0);
    for(int i=1;i<=10;i++){
        painter.drawLine(0,y+height()/10,width(),y+height()/10);
        y+=height()/10;
    }
    for (int i=1;i<=10;i++) {
        painter.drawLine(x+width()/10,0,x+width()/10,height());
        x+=width()/10;
    }

}
