#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>
#include <QPainter>
#include <QPen>
#include <QBrush>
class Plotter : public QWidget
{
    Q_OBJECT
private:

public:
   explicit Plotter(QWidget *parent= nullptr);
   void paintEvent(QPaintEvent *event);

};

#endif // PLOTTER_H
