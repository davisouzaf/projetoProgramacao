#ifndef PUTVOXEL_H
#define PUTVOXEL_H
#include "figurageometrica.h"

class PutVoxel: public FiguraGeometrica
{
private:
    int x,y,z;

public:
    PutVoxel(float r, float g, float b, float a, int x, int y, int z);
    ~PutVoxel();
    void draw(Sculptor &t);
};

#endif // PUTVOXEL_H
