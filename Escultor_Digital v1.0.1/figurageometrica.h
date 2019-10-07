#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

struct Voxel{
    float r,g,b,a;
    bool isOn;
};

class FiguraGeometrica{
    int nx,ny,nz;
    float r,g,b,a;
    Voxel ***v;
public:
    FiguraGeometrica(int nx, int ny, int nz);
    virtual void draw()=0;
    virtual ~FiguraGeometrica();
    void setColor(float r,float g,float b,float a);
};

#endif // FIGURAGEOMETRICA_H
