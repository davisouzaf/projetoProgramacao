#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H
#include "figurageometrica.h"
/**
 * @brief A classe PutEllipsoid implementa um elipsoide no espaço
 */
class PutEllipsoid:public FiguraGeometrica{
private:
    int x,y,z;
    int rx,ry,rz;
public:
    /**
     * @brief PutEllipsoid é o construtor da classe, que recebe como parâmetros as coordenadas do centro(x,y,z) os raios nos eixos(rx,ry,rz) e a cor(r,g,b,a)
     * @param x
     * @param y
     * @param z
     * @param rx
     * @param ry
     * @param rz
     * @param r
     * @param g
     * @param b
     * @param a
     * @details Exemplo de utilização da classe PutEllipsoid:
     * <pre>
     * PutEllipsoid pe(10,10,10,2,3,4,1,1,1,1)// Elipsoide centrada em (10,10,10) de raio 2 em,3 em y, 4 em z e cor branca(1,1,1) totalmente opaca(1)
     * </pre>
    */
    PutEllipsoid(int x, int y, int z, int rx, int ry, int rz,float r, float g, float b, float a);
    /**
     * @brief draw desenha um Elipsoide para o objeto de tipo Sculptor especificado
     * @param t
     */
    void draw(Sculptor &t);
};

#endif // PUTELLIPSOID_H
