#ifndef ESCULTOR_H
#define ESCULTOR_H
#include <string.h>


class Escultor{
private:
    Voxel ***v;
    int nx,ny,nz;   //dimensões
    float r,g,b,a;  //cores

public:
    Escultor(int _nx, int _ny, int _nz);
    ~Escultor();
    void setColor(float r, float g, float b, float alpha);
    void putVoxel(int x, int y, int z);
    void cutVoxel(int x, int y, int z);
    void putBox(int x0, int x1, int y0, int y1, int z0, int z1);
    void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);
    void putEsfera(int xc, int yc, int zc, int raio);
    void cutEsfera(int xc, int yc, int zc, int raio);
    void putElipse(int xc, int yc, int zc, int rx, int ry, int rz);
    void cutElipse(int xc, int yc, int zc, int rx, int ry, int rz);
    void writeOFF(string teste);

};

#endif // ESCULTOR_H
