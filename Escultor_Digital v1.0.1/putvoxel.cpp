#include "putvoxel.h"

putVoxel::putVoxel()
{

}

putVoxel::~putVoxel()
{

}

void putVoxel::draw(int x, int y, int z){
       if(x>=0 && y>=0 && z>=0){
           v[x][y][z].r=FiguraGeometrica::r;
           v[x][y][z].g=FiguraGeometrica::g;
           v[x][y][z].b=FiguraGeometrica::b;
           v[x][y][z].a=FiguraGeometrica::a;
           v[x][y][z].isOn=true;
       }

}
