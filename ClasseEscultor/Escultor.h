#ifndef ESCULTOR_H
#define ESCULTOR_H
#include <string.h>


class Escultor{
private:
    Voxel ***v;
    int nx,ny,nz;   //dimenções
    float r,g,b,a;  //cores

public:
    Escultor(Voxel ***v, int _nx, int _ny, int _nz);
    ~Escultor();
    void setColor(Voxel ***v, float r, float g, float b, float alpha);
    void putVoxel(Voxel ***v, int x, int y, int z);
    void cutVoxel(Voxel ***v, int x, int y, int z);
    void putBox(Voxel ***v, int x0, int x1, int y0, int y1, int z0, int z1);
    void cutBox(Voxel ***v, int x0, int x1, int y0, int y1, int z0, int z1);
    void putEsfera(Voxel ***v, int xc, int yc, int zc, int raio);
    void cutEsfera(Voxel ***v, int xc, int yc, int zc, int raio);
    void putElipse(Voxel ***v, int xc, int yc, int zc, int rx, int ry, int rz);
    void cutElipse(Voxel ***v, int xc, int yc, int zc, int rx, int ry, int rz);
    void writeOFF(string teste);

};

#endif // ESCULTOR_H
