#include "plotter.h"


Plotter::Plotter(QWidget *parent) : QWidget(parent){

}

void Plotter::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QPen pen;
    QBrush brush;

    //painter.setRenderHint(QPainter::Antialiasing);
    pen.setColor(QColor(255,0,0));
    brush.setColor(QColor(0,255,0));
    brush.setStyle(Qt::SolidPattern);
    pen.setWidth(3);
    pen.setStyle(Qt::DashLine);
    painter.setPen(pen);
    painter.setBrush(brush);

    painter.drawRect(0,0,width(),height());
    painter.setPen(pen);

    pen.setStyle(Qt::DashLine);
    painter.setPen(pen);

    painter.drawLine(0,height()/2,width(),height()/2);

}
