#include "Sculptor.h"
#include <cmath>


Sculptor::Sculptor(int _nx, int _ny, int _nz){
    nx=_nx;
    ny=_ny;
    nz=_nz;
}

Sculptor::~Sculptor(){

}
void Sculptor::setColor(float r, float g, float b, float alpha){
    Sculptor::r=r;
    Sculptor::g=g;
    Sculptor::b=b;
    Sculptor::a=alpha;
}

void Sculptor::putVoxel(int x, int y, int z){

}

void Sculptor::cutVoxel(int x, int y, int z){

}

void Sculptor::putBox(int x0, int x1, int y0, int y1, int z0, int z1){

}

void Sculptor::cutBox(int x0, int x1, int y0, int y1, int z0, int z1){

}

void Sculptor::putEsfera(int xc, int yc, int zc, int raio){
    for(int i=0; i<nx; i++){
        for(int j=0; j<ny; j++){
            for(int k=0; k<nz; k++){
                if(pow((i-xc),2)+ pow((j-yc),2)+pow((k-zc),2)<=pow(raio,2)){
                 //   v[i][j][k]=1;
                }
            }
        }
    }
}

void Sculptor::cutEsfera(int xc, int yc, int zc, int raio){
    for(int i=0; i<nx; i++){
        for(int j=0; j<ny; j++){
            for(int k=0; k<nz; k++){
                if(pow((i-xc),2)+ pow((j-yc),2)+pow((k-zc),2)<=pow(raio,2)){
                   // v[i][j][k]=0;
                }
            }
        }
    }
}

void Sculptor::putElipse(int xc, int yc, int zc, int rx, int ry, int rz){
    for(int i=0; i<nx; i++){
        for(int j=0; j<ny; j++){
            for(int k=0; k<nz; k++){
                if(pow((i-xc/rx),2)+ pow((j-yc/ry),2)+pow((k-zc/rz),2)<=1){
                    //v[i][j][k]=1;
                }
            }
        }
    }
}

void Sculptor::cutElipse(int xc, int yc, int zc, int rx, int ry, int rz){
    for(int i=0; i<nx; i++){
        for(int j=0; j<ny; j++){
            for(int k=0; k<nz; k++){
                if(pow((i-xc/rx),2)+ pow((j-yc/ry),2)+pow((k-zc/rz),2)<=1){
                    //v[i][j][k]=0;
                }
            }
        }
    }
}

void Sculptor::writeOFF(std::string teste){

}
