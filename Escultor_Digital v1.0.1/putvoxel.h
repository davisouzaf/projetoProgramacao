#ifndef PUTVOXEL_H
#define PUTVOXEL_H
#include "figurageometrica.h"


class putVoxel: public FiguraGeometrica{

public:
    putVoxel();
    ~putVoxel();
    void draw(int x, int y, int z);
};

#endif // PUTVOXEL_H
