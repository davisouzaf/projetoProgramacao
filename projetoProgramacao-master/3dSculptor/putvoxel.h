#ifndef PUTVOXEL_H
#define PUTVOXEL_H
#include "figurageometrica.h"
/**
 * @brief A classe PutVoxel implementa um voxel no espaço
 */
class PutVoxel: public FiguraGeometrica
{
private:
    int x,y,z;

public:
    /**
     * @brief PutVoxel é o construtor da classe, que recebe como parâmetros os valores da cor(r,g,b,a) e a posição no espaço a qual deseja posicionar
     * @param r
     * @param g
     * @param b
     * @param a
     * @param x
     * @param y
     * @param z
     * @details exemplo de declaração de PutVoxel:
     * <pre>
     * PutVoxel pv(1,0,0,1,1,1,1); //cria um voxel de cor vermelha(1,0,0) totalmente opaco na posição (1,1,1)
     *
     * </pre>
     */

    PutVoxel(float r, float g, float b, float a, int x, int y, int z);
    ~PutVoxel();
    /**
     * @brief draw deseha um voxel para o objeto Sculptor especificado como parâmetro
     * @param t
     */
    void draw(Sculptor &t);
};

#endif // PUTVOXEL_H
