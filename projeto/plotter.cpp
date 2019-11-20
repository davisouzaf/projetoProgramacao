#include "plotter.h"
#include <QPainter>
#include <QPen>
#include <QBrush>
#include <QEvent>
//#include <QMouseEvent>
#include <QDebug>
#include "putvoxel.h"
#include "cutvoxel.h"
#include "putbox.h"
#include "cutbox.h"
#include "putsphere.h"
#include "cutsphere.h"
#include "putellipsoid.h"
#include "cutellipsoid.h"

void Plotter::setBoxdepth(int value)
{
    boxdepth = value;
}

void Plotter::setBoxheight(int value)
{
    boxheight = value;
}

void Plotter::setBoxwidth(int value)
{
    boxwidth = value;
}

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
    for (int i=1;i<=this->y;i++) {
        auxx=0;
        for (int j=1;j<=this->x;j++) {
            painter.drawRect(auxx,auxy,width()/this->x,height()/this->y);
            auxx+=(float)(width()/this->x);
        }
        auxy+=(float)(height()/this->y);
    }
    brush.setColor(selectedcolor);
    brush.setStyle(Qt::SolidPattern);
    painter.setBrush(brush);
    float xc=(float)(width()/this->x);
    float yc=(float)(height()/this->y);
    for (int i=0;i<x;i++) {
        for (int j=0;j<y;j++) {
            if(scpt->getisonplan(i,j,plan)==true){
                brush.setColor(QColor(scpt->getR(i,j,plan)*255,scpt->getG(i,j,plan)*255,scpt->getB(i,j,plan)*255,scpt->getA(i,j,plan)*255));
                painter.setBrush(brush);
                qDebug()<<i<<j<<plan;
                qDebug()<<scpt->getR(i,j,plan);
                qDebug()<<scpt->getG(i,j,plan);
                qDebug()<<scpt->getB(i,j,plan);
                //qDebug()<<i<<j;
                //int xc=width()/this->y;
                //int yc=height()/this->x;
                //if(j==0){
                //painter.drawEllipse(xc*(i-2),yc*(9),xc,yc);
                //}else{
                painter.drawEllipse(xc*(i),yc*(j),xc,yc);
                //}
                //qDebug()<<xc*(i-1)<<yc*(j-1);
            }
        }
    }
}

void Plotter::mousePressEvent(QMouseEvent *event)
{
    int x, y;
    x=event->x();
    y=event->y();
    int clinha=height()/this->x;
    int ccoluna=width()/this->y;
    //qDebug()<<x<<y;
    x=(float)(x/clinha)+1;
    y=(float)(y/ccoluna)+1;
    emit mouseX(x);
    emit mouseY(y);
    if(drawmodule==1){
        //scpt->putVoxel(x-1,y-1,plan);
        PutVoxel pv((float)selectedcolor.red()/255,(float)selectedcolor.green()/255,(float)selectedcolor.blue()/255,(float)selectedcolor.alpha()/255,x-1,y-1,plan);
        pv.draw(*scpt);
        //qDebug()<<selectedcolor.alpha();
    }else if(drawmodule==2){
        CutVoxel cv(x-1,y-1,plan);
        cv.draw(*scpt);
        //scpt->cutVoxel(x-1,y-1,plan);
    }else if(drawmodule==3){
        PutBox pb(x-1,x-1+boxwidth,y-1,y-1+boxheight,plan,plan+boxdepth,(float)selectedcolor.red()/255,(float)selectedcolor.green()/255,(float)selectedcolor.blue()/255,(float)selectedcolor.alpha()/255);
        pb.draw(*scpt);
    }else if (drawmodule==4) {
        CutBox cb(x-1,x-1+boxwidth,y-1,y-1+boxheight,plan,plan+boxdepth);
        cb.draw(*scpt);
    }else if(drawmodule==5){//putsphere
        PutSphere ps(x-1,y-1,plan,radius,(float)selectedcolor.red()/255,(float)selectedcolor.green()/255,(float)selectedcolor.blue()/255,(float)selectedcolor.alpha()/255);
        ps.draw(*scpt);
        //        scpt->setColor((float)selectedcolor.red()/255,(float)selectedcolor.green()/255,(float)selectedcolor.blue()/255,1.0);
        //        scpt->putSphere(x-1,y-1,plan,radius);
    }else if(drawmodule==6){//cutsphere
        CutSphere cs(x-1,y-1,plan,radius);
        cs.draw(*scpt);
    }else if (drawmodule==7) {
        PutEllipsoid pe(x-1,y-1,plan,xradius,yradius,zradius,(float)selectedcolor.red()/255,(float)selectedcolor.green()/255,(float)selectedcolor.blue()/255,(float)selectedcolor.alpha()/255);
        pe.draw(*scpt);
    }else if(drawmodule==8){
        CutEllipsoid ce(x-1,y-1,plan,xradius,yradius,zradius);
        ce.draw(*scpt);
    }
    repaint();
}

void Plotter::mouseMoveEvent(QMouseEvent *event)
{
    int x, y;
    x=event->x();
    y=event->y();
    int clinha=height()/this->x;
    int ccoluna=width()/this->y;
    //qDebug()<<x<<y;
    x=(float)(x/clinha)+1;
    y=(float)(y/ccoluna)+1;
    emit mouseX(x);
    emit mouseY(y);
    if(drawmodule==1){
        //scpt->putVoxel(x-1,y-1,plan);
        PutVoxel pv((float)selectedcolor.red()/255,(float)selectedcolor.green()/255,(float)selectedcolor.blue()/255,(float)selectedcolor.alpha()/255,x-1,y-1,plan);
        pv.draw(*scpt);
        //qDebug()<<selectedcolor.alpha();
    }else if(drawmodule==2){
        CutVoxel cv(x-1,y-1,plan);
        cv.draw(*scpt);
        //scpt->cutVoxel(x-1,y-1,plan);
    }else if(drawmodule==3){
        PutBox pb(x-1,x-1+boxwidth,y-1,y-1+boxheight,plan,plan+boxdepth,(float)selectedcolor.red()/255,(float)selectedcolor.green()/255,(float)selectedcolor.blue()/255,(float)selectedcolor.alpha()/255);
        pb.draw(*scpt);
    }else if (drawmodule==4) {
        CutBox cb(x-1,x-1+boxwidth,y-1,y-1+boxheight,plan,plan+boxdepth);
        cb.draw(*scpt);
    }else if(drawmodule==5){//putsphere
        PutSphere ps(x-1,y-1,plan,radius,(float)selectedcolor.red()/255,(float)selectedcolor.green()/255,(float)selectedcolor.blue()/255,(float)selectedcolor.alpha()/255);
        ps.draw(*scpt);
        //        scpt->setColor((float)selectedcolor.red()/255,(float)selectedcolor.green()/255,(float)selectedcolor.blue()/255,1.0);
        //        scpt->putSphere(x-1,y-1,plan,radius);
    }else if(drawmodule==6){//cutsphere
        CutSphere cs(x-1,y-1,plan,radius);
        cs.draw(*scpt);
    }else if (drawmodule==7) {
        PutEllipsoid pe(x-1,y-1,plan,xradius,yradius,zradius,(float)selectedcolor.red()/255,(float)selectedcolor.green()/255,(float)selectedcolor.blue()/255,(float)selectedcolor.alpha()/255);
        pe.draw(*scpt);
    }else if(drawmodule==8){
        CutEllipsoid ce(x-1,y-1,plan,xradius,yradius,zradius);
        ce.draw(*scpt);
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

void Plotter::setRadius(int r)
{
    this->radius=r;
}

void Plotter::setXRadius(int r)
{
    this->xradius=r;
}

void Plotter::setYRadius(int r)
{
    this->yradius=r;
}

void Plotter::setZRadius(int r)
{
    this->zradius=r;
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
    plan=p-1;
    //repaint();
}
