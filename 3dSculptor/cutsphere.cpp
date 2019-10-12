#include "cutsphere.h"


CutSphere::CutSphere(int xc,int yc,int zc,int raio){
    this->xc=xc;
    this->yc=yc;
    this->zc=zc;
    this->raio=raio;
}

void CutSphere::draw(Sculptor &t){
    t.cutSphere(xc,yc,zc,raio);
}


