#include "Sculptor.h"
#include <cmath>


Sculptor::Sculptor(int _nx, int _ny, int _nz){
    nx=_nx;
    ny=_ny;
    nz=_nz;
    v=new Voxel**[nx];
    for (int i=0;i<nx;i++) {
        v[i]=new Voxel*[ny];
        for (int j=0;j<ny;j++) {
            v[i][j]=new Voxel[nz];
        }
    }
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
    v[x][y][z].r=Sculptor::r;
    v[x][y][z].g=Sculptor::g;
    v[x][y][z].b=Sculptor::b;
    v[x][y][z].isOn=true;
}

void Sculptor::cutVoxel(int x, int y, int z){
    v[x][y][z].isOn=false;
}

void Sculptor::putBox(int x0, int x1, int y0, int y1, int z0, int z1){
    for (int i=x0;i<x1;++i) {
        for (int j=y0;j<y1;++j) {
            for (int k=z0;k<z1;k++) {
                putVoxel(i,j,k);
            }
        }
    }
}

void Sculptor::cutBox(int x0, int x1, int y0, int y1, int z0, int z1){
    for (int i=x0;i<x1;++i) {
        for (int j=y0;j<y1;++j) {
            for (int k=z0;k<z1;k++) {
                cutVoxel(i,j,k);
            }
        }
    }
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

void Sculptor::writeOFF(string filename){

}
