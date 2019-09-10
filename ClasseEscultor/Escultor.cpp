#include "Escultor.h"
#include <cmath>

Escultor::Escultor(){

}

Escultor::~Escultor(){

}
void Escultor::setColor(Voxel ***v, float r, float g, float b, float alpha){

}

void Escultor::putVoxel(Voxel ***v, int x, int y, int z){

}

void Escultor::cutVoxel(Voxel ***v, int x, int y, int z){

}

void Escultor::putBox(Voxel ***v, int x0, int x1, int y0, int y1, int z0, int z1){

}

void Escultor::cutBox(Voxel ***v, int x0, int x1, int y0, int y1, int z0, int z1){

}

void Escultor::putEsfera(Voxel ***v, int xc, int yc, int zc, int raio){
    for(int i=0; i<nx; i++){
        for(int j=0; j<ny; j++){
            for(int k=0; k<nz; k++){
                if(pow((i-xc),2)+ pow((j-yc),2)+pow((k-zc),2)<=pow(raio,2)){
                    v[i][j][k]=1;
                }
            }
        }
    }
}

void Escultor::cutEsfera(Voxel ***v, int xc, int yc, int zc, int raio){
    for(int i=0; i<nx; i++){
        for(int j=0; j<ny; j++){
            for(int k=0; k<nz; k++){
                if(pow((i-xc),2)+ pow((j-yc),2)+pow((k-zc),2)<=pow(raio,2)){
                    v[i][j][k]=0;
                }
            }
        }
    }
}

void Escultor::putElipse(Voxel ***v, int xc, int yc, int zc, int rx, int ry, int rz){
    for(int i=0; i<nx; i++){
        for(int j=0; j<ny; j++){
            for(int k=0; k<nz; k++){
                if(pow((i-xc/rx),2)+ pow((j-yc/ry),2)+pow((k-zc/rz),2)<=1){
                    v[i][j][k]=1;
                }
            }
        }
    }
}

void Escultor::cutElipse(Voxel ***v, int xc, int yc, int zc, int rx, int ry, int rz){
    for(int i=0; i<nx; i++){
        for(int j=0; j<ny; j++){
            for(int k=0; k<nz; k++){
                if(pow((i-xc/rx),2)+ pow((j-yc/ry),2)+pow((k-zc/rz),2)<=1){
                    v[i][j][k]=0;
                }
            }
        }
    }
}

void Escultor::writeOFF(string teste){

}
