﻿#include "sculptor.h"
#include <fstream>
#include<cmath>
using namespace std;
Sculptor::Sculptor(int _nx, int _ny, int _nz){
    nx=_nx;
    ny=_ny;
    nz=_nz;
    v=new Voxel**[nx];
    v[0]=new Voxel*[nx*ny];
    v[0][0]=new Voxel[nx*ny*nz];
    for (int i=1;i<nx;i++) {
        v[i]=v[i-1]+ny;
    }
    for (int j = 1; j < nx*ny; ++j) {
        v[0][j]=v[0][j-1]+nz;
    }
    for (int i=0;i<nx;i++) {
        for (int j=0;j<ny;j++) {
            for (int k=0;k<nz;k++) {
                v[i][j][k].isOn=false;
            }
        }
    }
}

Sculptor::~Sculptor(){
    delete [] v[0][0];
    delete [] v[0];
    delete [] v;
}
void Sculptor::setColor(float r, float g, float b, float alpha){
    this->r=r;
    this->g=g;
    this->b=b;
    Sculptor::a=alpha;
}

void Sculptor::putVoxel(int x, int y, int z){
    if(x>=0 && y>=0 && z>=0){
    v[x][y][z].r=Sculptor::r;
    v[x][y][z].g=Sculptor::g;
    v[x][y][z].b=Sculptor::b;
    v[x][y][z].a=Sculptor::a;
    v[x][y][z].isOn=true;
    }
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

void Sculptor::putSphere(int xc, int yc, int zc, int raio){
    for(int i=0; i<nx; i++){
        for(int j=0; j<ny; j++){
            for(int k=0; k<nz; k++){
                if(((i-xc)*(i-xc))+ ((j-yc)*(j-yc))+((k-zc)*(k-zc))<=(raio*raio)){
                    putVoxel(i,j,k);
                }
            }
        }
    }
}

void Sculptor::cutSphere(int xc, int yc, int zc, int raio){
    for(int i=0; i<nx; i++){
        for(int j=0; j<ny; j++){
            for(int k=0; k<nz; k++){
                if(((i-xc)*(i-xc))+ ((j-yc)*(j-yc))+((k-zc)*(k-zc))<=(raio*raio)){
                    cutVoxel(i,j,k);
                }
            }
        }
    }
}

void Sculptor::putEllipsoid(int xc, int yc, int zc, int rx, int ry, int rz){
    for(int i=0; i<nx; i++){
        for(int j=0; j<ny; j++){
            for(int k=0; k<nz; k++){
                if((float)((pow(i-xc,2))/(pow(rx,2)) + (pow((j-yc),2))/(pow(ry,2))+(pow(k-zc,2))/(pow(rz,2)))<=1){
                    putVoxel(i,j,k);
                }
            }
        }
    }
}

void Sculptor::cutEllipsoid(int xc, int yc, int zc, int rx, int ry, int rz){
    for(int i=0; i<nx; i++){
        for(int j=0; j<ny; j++){
            for(int k=0; k<nz; k++){
                if((float)((pow(i-xc,2))/(pow(rx,2)) + (pow((j-yc),2))/(pow(ry,2))+(pow(k-zc,2))/(pow(rz,2)))<=1){
                    cutVoxel(i,j,k);
                }
            }
        }
    }
}
void Sculptor::writeOFF(const char * filename){
    ofstream fout;
    fout.open(filename);
    if(!fout.is_open()){
        exit(0);
    }
    fout<<"OFF\n";
    int nvertices=0;
    int nfaces=0;
    for (int i=0;i<nx;i++) {
        for(int j=0;j<ny;j++){
            for(int k=0;k<nz;k++){
                if(v[i][j][k].isOn){
                  nvertices+=8;
                  nfaces+=6;
                }
            }
        }
    }

    fout<<nvertices<<" "<<nfaces<<" 0"<<"\n";
    for (int i=0;i<nx;i++) {
        for (int j=0;j<ny;j++) {
            for (int k=0;k<nz;k++) {
                if(v[i][j][k].isOn){
                    // escreve as coordenadas dos pontos dos vértices:
                    fout<<i-0.5<<" "<<j+0.5<<" "<<k-0.5<<endl;
                    fout<<i-0.5<<" "<<j-0.5<<" "<<k-0.5<<endl;
                    fout<<i+0.5<<" "<<j-0.5<<" "<<k-0.5<<endl;
                    fout<<i+0.5<<" "<<j+0.5<<" "<<k-0.5<<endl;
                    fout<<i-0.5<<" "<<j+0.5<<" "<<k+0.5<<endl;
                    fout<<i-0.5<<" "<<j-0.5<<" "<<k+0.5<<endl;
                    fout<<i+0.5<<" "<<j-0.5<<" "<<k+0.5<<endl;
                    fout<<i+0.5<<" "<<j+0.5<<" "<<k+0.5<<endl;
                 }
            }
        }
    }
    int aux=0;
    //escreve as definições das faces:
    for (int i=0;i<nx;i++) {
        for (int j=0;j<ny;j++) {
            for (int k=0;k<nz;k++) {
                    if(v[i][j][k].isOn){
                        fout<<4<<" "<<0+8*aux<<" "<<3+8*aux<<" "<<2+8*aux<<" "<<1+8*aux<<" "<<v[i][j][k].r<<" "<<v[i][j][k].g<<" "<<v[i][j][k].b<<" ";fout<<v[i][j][k].a<<endl;
                        fout<<4<<" "<<4+8*aux<<" "<<5+8*aux<<" "<<6+8*aux<<" "<<7+8*aux<<" "<<v[i][j][k].r<<" "<<v[i][j][k].g<<" "<<v[i][j][k].b<<" ";fout<<v[i][j][k].a<<endl;
                        fout<<4<<" "<<0+8*aux<<" "<<1+8*aux<<" "<<5+8*aux<<" "<<4+8*aux<<" "<<v[i][j][k].r<<" "<<v[i][j][k].g<<" "<<v[i][j][k].b<<" ";fout<<v[i][j][k].a<<endl;
                        fout<<4<<" "<<0+8*aux<<" "<<4+8*aux<<" "<<7+8*aux<<" "<<3+8*aux<<" "<<v[i][j][k].r<<" "<<v[i][j][k].g<<" "<<v[i][j][k].b<<" ";fout<<v[i][j][k].a<<endl;
                        fout<<4<<" "<<3+8*aux<<" "<<7+8*aux<<" "<<6+8*aux<<" "<<2+8*aux<<" "<<v[i][j][k].r<<" "<<v[i][j][k].g<<" "<<v[i][j][k].b<<" ";fout<<v[i][j][k].a<<endl;
                        fout<<4<<" "<<1+8*aux<<" "<<2+8*aux<<" "<<6+8*aux<<" "<<5+8*aux<<" "<<v[i][j][k].r<<" "<<v[i][j][k].g<<" "<<v[i][j][k].b<<" ";fout<<v[i][j][k].a<<endl;
                        aux++;
                }
            }
        }
    }
    fout.close();
}

bool Sculptor::getisonplan(int i, int j,int k)
{
    if(v[i][j][k].isOn){
        return true;
    }else {
        return false;
    }
}

float Sculptor::getR(int i, int j, int k)
{
    return v[i][j][k].r;
}

float Sculptor::getG(int i, int j, int k)
{
    return v[i][j][k].g;
}

float Sculptor::getB(int i, int j, int k)
{
    return v[i][j][k].b;
}

float Sculptor::getA(int i, int j, int k)
{
    return v[i][j][k].a;
}
