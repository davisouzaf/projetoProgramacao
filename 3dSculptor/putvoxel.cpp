#include "putvoxel.h"


PutVoxel::PutVoxel(float r,float g,float b,float a,int x, int y, int z){
    this->r=r;
    this->g=g;
    this->b=b;
    this->a=a;
    this->x=x;
    this->y=y;
    this->z=z;
}

PutVoxel::~PutVoxel()
{

}

void PutVoxel::draw(Sculptor &t){
    t.putVoxel(x,y,z);
}
