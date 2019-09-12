

#ifndef ESCULTOR_H
#define ESCULTOR_H
#include <string>

using namespace std;
struct Voxel {
  float r,g,b; // Colors
  float a;// Transparency
  bool isOn; // Included or not
};

class Sculptor{
private:
    Voxel ***v;
    int nx,ny,nz;   //dimensões
    float r,g,b,a;  //cores

public:
    Sculptor(int _nx, int _ny, int _nz);
    ~Sculptor();
    void setColor(float r, float g, float b, float alpha);
    void putVoxel(int x, int y, int z);
    void cutVoxel(int x, int y, int z);
    void putBox(int x0, int x1, int y0, int y1, int z0, int z1);
    void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);
    void putEsfera(int xc, int yc, int zc, int raio);
    void cutEsfera(int xc, int yc, int zc, int raio);
    void putElipse(int xc, int yc, int zc, int rx, int ry, int rz);
    void cutElipse(int xc, int yc, int zc, int rx, int ry, int rz);
    void writeOFF(string filename);
    void writeVECT(string filename);
};

#endif // ESCULTOR_H
