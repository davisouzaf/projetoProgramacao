#ifndef PUTVOXEL_H
#define PUTVOXEL_H
#include "figurageometrica.h"


class PutVoxel: public FiguraGeometrica{

public:
    PutVoxel();
    ~PutVoxel();
    void draw(int x, int y, int z);
};

#endif // PUTVOXEL_H
