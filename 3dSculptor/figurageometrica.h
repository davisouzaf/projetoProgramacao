#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "sculptor.h"
/**
 * @brief A classe FiguraGeometrica serce como classe abstrata para criação de outras figuras.
 * @details FiguraGeometrica permite que endereços de objetos de classes derivadas dela sejam armazenados em ponteiros dessa classe
 */
class FiguraGeometrica{
protected:
    ///
    /// @brief r: intensidade da cor vermelha
    float r;
    /// @brief g: intensidade da cor verde
    float g;
    /// @brief b: intensidade da cor azul
    float b;
    /// @brief a: opacidade(alpha)
    float a;
public:
    /**
     * @brief FiguraGeometrica é o contrutor da classe
     */
    FiguraGeometrica();
    /**
     * @brief draw é um método que desenha a figura para o objeto Sculptor especificado
     * @param t
     */
    virtual void draw(Sculptor &t)=0;
    /**
     * @brief ~FiguraGeometrica é o destrutor da classe
     */
    virtual ~FiguraGeometrica();
};

#endif // FIGURAGEOMETRICA_H
