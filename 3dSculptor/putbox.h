#ifndef PUTBOX_H
#define PUTBOX_H
#include "figurageometrica.h"
/**
 * @brief A classe PutBox implementa uma caixa no espaço
 */
class PutBox:public FiguraGeometrica{
private:
    int x0,x1,y0,y1,z0,z1;
public:
    /**
     * @brief PutBox é o construtor da classe, que recebe como parâmetros os valores iniciais e finais das posições nos eixos(x0,x1,y0,y1,z0,z1) e a cor(r,g,b,a)
     * @param x0
     * @param x1
     * @param y0
     * @param y1
     * @param z0
     * @param z1
     * @param r
     * @param g
     * @param b
     * @param a
     * @details exemplo de utilização de PutBox:
     * <pre>
     * PutBox pb(1,10,1,10,1,10,1,1,1,1);
     * </pre>
     */
    PutBox(int x0, int x1, int y0, int y1, int z0, int z1,float r, float g,float b,float a);
    /**
     * @brief draw desenha uma caixa para o objeto Sculptor especificado
     * @param t
     */
    void draw(Sculptor &t);
};

#endif // PUTBOX_H
