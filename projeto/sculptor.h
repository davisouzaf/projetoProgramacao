#ifndef ESCULTOR_H
#define ESCULTOR_H
/**
 * @brief O Voxel consiste em um cubo localizado no espaço tridimensional que possui cor, transparência e pode ou não estar ativado
 */
struct Voxel {
  float r,g,b; // Colors
  float a;// Transparency
  bool isOn; // Included or not
};
/**
 * @brief A classe Sculptor define o espaço em que os voxels estarão alocados(como se fosse uma "prancheta" de desenho)
 */
class Sculptor{
private:
    int nx,ny,nz;   //dimensões
    float r,g,b,a;  //cores
    Voxel ***v;
public:
    /**
     * @brief Sculptor é o construtor que recebe como parâmetros os comprimentos em relação aos eixos cartesianos(x,y,z)
     * @param _nx
     * @param _ny
     * @param _nz
     */
    Sculptor(int _nx, int _ny, int _nz);
    /**
     * @brief ~Sculptor é o destrutor da classe
    */
    ~Sculptor();
    /**
     * @brief setColor altera a cor selecionada.
     * @param r
     * @param g
     * @param b
     * @param alpha
     */
    void setColor(float r, float g, float b, float alpha);
    /**
     * @brief putVoxel Insere um voxel no espaço
     * @param x
     * @param y
     * @param z
     */
    void putVoxel(int x, int y, int z);
    /**
     * @brief cutVoxel Apaga um voxel no espaço
     * @param x
     * @param y
     * @param z
     */
    void cutVoxel(int x, int y, int z);
    /**
     * @brief putBox Insere uma caixa no espaço
     * @param x0
     * @param x1
     * @param y0
     * @param y1
     * @param z0
     * @param z1
     */
    void putBox(int x0, int x1, int y0, int y1, int z0, int z1);
    /**
     * @brief cutBox apaga uma caixa do espaço
     * @param x0
     * @param x1
     * @param y0
     * @param y1
     * @param z0
     * @param z1
     */
    void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);
    /**
     * @brief putSphere implementa uma esfera no espaço
     * @param xc
     * @param yc
     * @param zc
     * @param raio
     */
    void putSphere(int xc, int yc, int zc, int raio);
    /**
     * @brief cutSphere apaga uma esfera no espaço
     * @param xc
     * @param yc
     * @param zc
     * @param raio
     */
    void cutSphere(int xc, int yc, int zc, int raio);
    /**
     * @brief putEllipsoid implementa um elipsoide no espaço
     * @param xc
     * @param yc
     * @param zc
     * @param rx
     * @param ry
     * @param rz
     */
    void putEllipsoid(int xc, int yc, int zc, int rx, int ry, int rz);
    /**
     * @brief cutEllipsoid apaga um elipsoide no espaço
     * @param xc
     * @param yc
     * @param zc
     * @param rx
     * @param ry
     * @param rz
     */
    void cutEllipsoid(int xc, int yc, int zc, int rx, int ry, int rz);
    /**
     * @brief writeOFF grava a escultura no formato OFF no arquivo especificado
     * @param filename
     */
    void writeOFF(char *filename);
    bool getisonplan(int i, int j, int k);
};

#endif // ESCULTOR_H
