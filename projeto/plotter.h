#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>
#include <QPainter>
#include <QPen>
#include <QBrush>
#include <QAction>
class Plotter : public QWidget
{
    Q_OBJECT
private:
    int x=10,y=10,z=10;
public:
   explicit Plotter(QWidget *parent= nullptr);
   void paintEvent(QPaintEvent *event);
   void mousePressEvent(QMouseEvent *event);
   void setX(int);
   void setY(int);
   void setZ(int);

//   void setX(int);
//   void setY(int);
//   void setZ(int);

};

#endif // PLOTTER_H
