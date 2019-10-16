# Projeto Escultor 3D
<h2>Projeto da disciplina de Programação Avançada</h2>
<p>O projeto consiste na criação de uma ferramenta em C++ capaz de realizar esculturas em blocos representados por matrizes digitais, algo como a ideia usada pelo jogo <b>minecraft</b>.</p>
<h3>Classes criadas: </h3>
<ul>
<li><h4>Sculptor</h4></li>
  <h5>Os métodos de Sculptor são</h5>
<style type="text/css">
.tg  {border-collapse:collapse;border-spacing:0;}
.tg td{font-family:Arial, sans-serif;font-size:14px;padding:10px 5px;border-style:solid;border-width:1px;overflow:hidden;word-break:normal;border-color:black;}
.tg th{font-family:Arial, sans-serif;font-size:14px;font-weight:normal;padding:10px 5px;border-style:solid;border-width:1px;overflow:hidden;word-break:normal;border-color:black;}
.tg .tg-0pky{border-color:inherit;text-align:left;vertical-align:top}
.tg .tg-0lax{text-align:left;vertical-align:top}
</style>
<table class="tg">
  <tr>
    <th class="tg-0pky">Sculptor(int _nx, int _ny, int _nz)</th>
    <th class="tg-0pky">Construtor da classe</th>
  </tr>
  <tr>
    <td class="tg-0pky">~Sculptor(int _nx, int _ny, int _nz)</td>
    <td class="tg-0pky">Destrutor da classe</td>
  </tr>
  <tr>
    <td class="tg-0pky">void setColor(float r, float g, float b, float alpha)</td>
    <td class="tg-0pky">Define a cor atual de desenho</td>
  </tr>
  <tr>
    <td class="tg-0pky">void putVoxel(int x, int y, int z)</td>
    <td class="tg-0pky"><br>Aloca o voxel na posição (x,y,z) e atribui a cor atual <br>do desenho<br></td>
  </tr>
  <tr>
    <td class="tg-0pky">void cutVoxel(int x, int y, int z)</td>
    <td class="tg-0pky">Apaga o voxel na posição (x,y,z) </td>
  </tr>
  <tr>
    <td class="tg-0pky">void putBox(int x0, int x1, int y0, int y1, int z0, int z1)</td>
    <td class="tg-0pky">Aloca uma caixa no espaço de acordo com os <br>valores iniciais e finais para os eixos cartesianos e  atribui a cor<br>atual para a mesma</td>
  </tr>
  <tr>
    <td class="tg-0pky">void cutBox(int x0, int x1, int y0, int y1, int z0, int z1)</td>
    <td class="tg-0pky">Apaga uma caixa no espaço de acordo com os valores iniciais<br> e finais para os eixos cartesianos </td>
  </tr>
  <tr>
    <td class="tg-0lax">void putSphere(int xcenter, int ycenter, int zcenter, int radius)</td>
    <td class="tg-0lax">Aloca uma esfera para os valores de centro e raio dos parâmetros de entrada e <br>atribui a cor atual para a mesma</td>
  </tr>
  <tr>
    <td class="tg-0lax">void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int<br> ry, int rz)</td>
    <td class="tg-0lax">Aloca um elipsoide de acordo com as coordenadas do centro, os valores dos <br>raios em cada eixo e atribui a cor atual à mesma</td>
  </tr>
  <tr>
    <td class="tg-0lax">void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz)</td>
    <td class="tg-0lax">Apaga um elipsoide de acordo com as coordenadas do centro e os raios nos eixos cartesianos</td>
  </tr>
  <tr>
    <td class="tg-0lax">void cutVoxel(int x, int y, int z)</td>
    <td class="tg-0lax">Apaga um voxel na posição especificada nos parâmetros</td>
  </tr>
  <tr>
    <td class="tg-0lax">void writeOFF(char* filename)</td>
    <td class="tg-0lax">Grava a escultura no formato OFF no arquivo filename</td>
  </tr>
</table>
<li><h4>FiguraGeometrica</h4></li>
  <p>FiguraGeométrica é uma classe abstrata para representação de objetos primitivos genéricos,ela permite que endereços de objetos de classes derivadas dela sejam armazenados em ponteiros dessa classe</p>
  <h5>Os métodos da classe são:</h5>
  <ul>
    <li>FiguraGeometrica():o construtor da classe</li>
    <li>draw(Sculptor &t): método virtual que desenha a figura para o escultor</li>
  </ul>
  <h5>As classes que herdam de FiguraGeométrica são: </h5>
  <ol>
  <li>PutVoxel</li>
  <li>CutVoxel</li>
  <li>PutBox</li>
  <li>CutVoxel</li>
  <li>PutSphere</li>
  <li>CutSphere</li>
  <li>PutEllipsoid</li>
  <li>CutEllipsoid</li>
  </ol>
</ul>
