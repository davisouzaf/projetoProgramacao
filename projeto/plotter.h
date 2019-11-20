#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>
#include <QAction>
#include <sculptor.h>
#include <QMouseEvent>
class Plotter : public QWidget
{
    Q_OBJECT
private:
    int x=10,y=10,z=10;
    int plan=0;
    int drawmodule=0;
    int radius;
    int xradius,yradius,zradius;
    int boxwidth, boxheight,boxdepth;
public:
   explicit Plotter(QWidget *parent= nullptr);
   void paintEvent(QPaintEvent *event);
   void mousePressEvent(QMouseEvent *event);
   void mouseMoveEvent(QMouseEvent *event);
   void setX(int);
   void setY(int);
   void setZ(int);
   void setRadius(int);
   void setXRadius(int);
   void setYRadius(int);
   void setZRadius(int);
   QColor selectedcolor=QColor(255,255,255,255);
   int getdrawmodule();
   Sculptor *scpt;
   void setBoxdepth(int value);

   void setBoxheight(int value);

   void setBoxwidth(int value);

signals:
   void mouseX(int);
   void mouseY(int);
public slots:
   void setdrawmodule(int);
   void setplan(int);

};

#endif // PLOTTER_H
