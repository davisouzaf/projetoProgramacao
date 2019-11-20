#ifndef CUTBOX_H
#define CUTBOX_H
#include "figurageometrica.h"
/**
 * @brief A classe CutBox apaga uma caixa no espaço
 */
class CutBox: public FiguraGeometrica{
private:
    int x0,x1,y0,y1,z0,z1;
public:
    /**
     * @brief CutBox é o construtor da classe, que recebe como parâmetros os valores iniciais e finais em que deseja apagar a caixa nos eixos(x0,x1,y0,y1,z0,z1)
     * @param x0
     * @param x1
     * @param y0
     * @param y1
     * @param z0
     * @param z1
     * @details exemplo de utilização de CutBox:
     * <pre>
     * CutBox cb(1,10,1,10,1,10);
     * </pre>
     */
    CutBox(int x0, int x1, int y0, int y1, int z0, int z1);
    /**
     * @brief draw apaga a caixa para o objeto Sculptor especificado
     * @param t
     */
    void draw(Sculptor &t);
};

#endif // CUTBOX_H
