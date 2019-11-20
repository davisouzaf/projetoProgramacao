#ifndef CUTSPHERE_H
#define CUTSPHERE_H
#include "figurageometrica.h"
/**
 * @brief A classe CutSphere apaga uma esfera no espaço
 */
class CutSphere: public FiguraGeometrica{
private:
    int xc,yc,zc,raio;
public:
    /**
     * @brief CutSphere é o construtor da classe, que recebe como parâmetros os valores da coordenada do centro(xc,yc,zc) e o raio
     * @param xc
     * @param yc
     * @param zc
     * @param r
     * @details Exemplo de utilização de CutSphere:
     * <pre>
     * CutSphere cs(10,10,10,5);
     * </pre>
     */
    CutSphere(int xc,int yc,int zc,int r);
    /**
     * @brief draw apaga a esfera para o objeto Sculptor
     * @param t
     */
    void draw(Sculptor &t);
};

#endif // CUTSPHERE_H
