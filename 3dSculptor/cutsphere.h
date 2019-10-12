#ifndef CUTSPHERE_H
#define CUTSPHERE_H
#include "figurageometrica.h"

class CutSphere: public FiguraGeometrica{
private:
    int xc,yc,zc,raio;
public:
    CutSphere(int xc,int yc,int zc,int r);
    void draw(Sculptor &t);
};

#endif // CUTSPHERE_H
