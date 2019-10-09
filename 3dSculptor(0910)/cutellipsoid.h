#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H
#include "figurageometrica.h"

class CutEllipsoid:public FiguraGeometrica{
private:
    int x,y,z;
    int rx,ry,rz;
public:
    CutEllipsoid(int x, int y, int z, int rx, int ry, int rz);
    void draw(Sculptor &t);
};

#endif // CUTELLIPSOID_H
