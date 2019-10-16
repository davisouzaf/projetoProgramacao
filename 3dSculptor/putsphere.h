#ifndef PUTSPHERE_H
#define PUTSPHERE_H

#include "figurageometrica.h"
/**
 * @brief A classe PutSphere implementa uma esfera no espaço
 */
class PutSphere:public FiguraGeometrica{
private:
    int x,y,z,raio;
public:
    /**
     * @brief PutSphere é o construtor da classe, que recebe como parâmetros as coordenadas do centro da esfera(x,y,z) o tamanho do raio(r) e os parâmetro de cor(r,g,b,a)
     * @param x
     * @param y
     * @param z
     * @param raio
     * @param r
     * @param g
     * @param b
     * @param a
     * @details Exemplo de utilização de PutSphere:
     * A esfera é definida como: \f[ (X-xc)²+(Y-yc)²+(Z-zc)²=r²\f]
     *
     * <pre>
     * PutSphere ps(3,3,3,5,1,1,1,1)// esfera centrada em (3,3,3) de raio 5 e cor branca(1,1,1) totalmente opaca(1)
     * </pre>
     *
     */
    PutSphere(int x, int y, int z, int raio, float r, float g, float b, float a);
    /**
     * @brief draw desenha uma esfera para o objeto de tipo Sculptor especificado
     * @param t
     */
    void draw(Sculptor &t);
};

#endif // PUTSPHERE_H
