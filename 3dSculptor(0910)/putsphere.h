#ifndef PUTSPHERE_H
#define PUTSPHERE_H

#include "figurageometrica.h"

class PutSphere:public FiguraGeometrica{
private:
    int x,y,z,raio;
public:
    PutSphere(int x, int y, int z, int raio, float r, float g, float b, float a);
    void draw(Sculptor &t);
};

#endif // PUTSPHERE_H
