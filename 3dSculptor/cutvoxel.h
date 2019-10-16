#ifndef CUTVOXEL_H
#define CUTVOXEL_H
#include "figurageometrica.h"
/**
 * @brief A classe CutVoxel apaga um voxel na posição especificada
 * @details
 */
class CutVoxel:public FiguraGeometrica{
private:
    int x,y,z;
public:
    /**
     * @brief CutVoxel é o construtor da classe
     * @param x
     * @param y
     * @param z
     * @details exemplo de utilização de CutVoxel:
     * <pre>
     * CutVoxel cv(1,1,1); //apaga um voxel na posição (1,1,1)
     * </pre>
     */
    CutVoxel(int x,int y, int z);
    /**
     * @brief draw apaga o voxel para o objeto Sculptor
     * @param t
     */
    void draw(Sculptor &t);
};

#endif // CUTVOXEL_H
