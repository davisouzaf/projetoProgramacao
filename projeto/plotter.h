#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>
#include <QAction>
#include <sculptor.h>
class Plotter : public QWidget
{
    Q_OBJECT
private:
    int x=10,y=10,z=10;
    int plan=1;
    int drawmodule=0;
public:
   explicit Plotter(QWidget *parent= nullptr);
   void paintEvent(QPaintEvent *event);
   void mousePressEvent(QMouseEvent *event);
   void setX(int);
   void setY(int);
   void setZ(int);
   QColor selectedcolor=QColor(255,255,255,255);
   int getdrawmodule();
   Sculptor *scpt;
signals:
   void mouseX(int);
   void mouseY(int);
public slots:
   void setdrawmodule(int);
   void setplan(int);
//   void setX(int);
//   void setY(int);
//   void setZ(int);

};

#endif // PLOTTER_H
