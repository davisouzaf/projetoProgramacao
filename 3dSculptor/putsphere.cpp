#include "putsphere.h"

PutSphere::PutSphere(int x, int y, int z, int raio, float r, float g, float b, float a){
    this->x=x;
    this->y=y;
    this->z=z;
    this->raio=raio;
    this->r=r;
    this->g=g;
    this->b=b;
    this->a=a;
}


void PutSphere::draw(Sculptor &t){
    t.setColor(r,g,b,a);
    t.putSphere(x,y,z,raio);
}
