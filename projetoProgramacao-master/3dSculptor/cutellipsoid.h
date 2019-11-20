#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H
#include "figurageometrica.h"
/**
 * @brief A classe CutEllipsoid apaga um elipsoide no espaço
 */
class CutEllipsoid:public FiguraGeometrica{
private:
    int x,y,z;
    int rx,ry,rz;
public:
    /**
     * @brief CutEllipsoid é o construtor da classe, que recebe como parâmetros as coordenadas do centro(x,y,z) e os valores dos raios nos eixos(rx,ry,rz)
     * @param x
     * @param y
     * @param z
     * @param rx
     * @param ry
     * @param rz
     * @details Exemplo de utilização da classe CutEllipsoid:
     * <pre>
     * CutEllipsoid ce(10,10,10,2,3,4)// Apaga Elipsoide centrada em (10,10,10) de raio 2 em,3 em y, 4 em z
     * </pre>
     */
    CutEllipsoid(int x, int y, int z, int rx, int ry, int rz);
    /**
     * @brief draw Apaga a elipsoide para o objeto Sculptor
     * @param t
     */
    void draw(Sculptor &t);
};

#endif // CUTELLIPSOID_H
