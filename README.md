# Projeto Escultor 3D
<h2>Projeto da disciplina de Programação Avançada</h2>
<p>O projeto consiste na criação de uma ferramenta em C++ capaz de realizar esculturas em blocos representados por matrizes digitais, algo como a ideia usada pelo jogo <b>minecraft</b>.</p>
<p>A interface visual permite a criação de esculturas tridimensionais a partir dos planos do escultor. O software permite a criação de figuras e o armazenamento em formato .off. A figura abaixo apresenta a tela inicial do programa, onde a grade quadriculada branca é onde o usuário poderá desenhar.</p>

<h3>Classes criadas: </h3>
<ul>
<li><h4>Sculptor</h4></li>
  <h5>Os métodos de Sculptor são</h5>
<table class="tg">
  <tr>
    <td class="tg-0pky">Sculptor(int _nx, int _ny, int _nz)</td>
    <td class="tg-0pky">Construtor da classe</td>
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
    <li><b>PutVoxel:</b>Um voxel é especificado no desenho de acordo com sua cor, posição no espaço e transparência</li>
    <p>Os métodos da classe são:</p>
    <ul>
      <li>PutVoxel(r,g,b,a,x,y,z):construtor que recebe os parâmetros de cor, transparência e posição no espaço</li>
      <li>draw(&t):desenha um voxel para o objeto Sculptor especificado</li>
    </ul>
    <li><b>CutVoxel:</b>Um voxel é especificado no desenho de acordo com sua posição no espaço para ser apagado</li>
    <p>Os métodos da classe são:</p>
    <ul>
      <li>Cutvoxel(r,g,b,a,x,y,z):construtor que recebe os parâmetros de posição no espaço</li>
      <li>draw(&t):apaga um voxel para o objeto Sculptor especificado</li>
    </ul>
    <li><b>PutBox</b>:Uma caixa é especificada para desenho conforme os limites espaciais fornecidos para as três dimensões, sua cor e transparência.</li>
    <p>Os métodos da classe são:</p>
    <ul>
      <li>PutBox(x0,x1,y0,y1,z0,z1,r,g,b,a):construtor que recebe os parâmetros de espaço que o delimita no espaço,cor e transparência</li>
      <li>draw(&t):desenha uma caixa para o objeto Sculptor especificado</li>
    </ul>
    <li><b>CutBox:</b>Uma caixa é especificada para desenho conforme os limites espaciais fornecidos para as três dimensões para ser apagada</li>
    <p>Os métodos da classe são:</p>
    <ul>
      <li>CutBox(x0,x1,y0,y1,z0,z1,):construtor que recebe os parâmetros de espaço que o delimita no espaço</li>
      <li>draw(&t):apaga uma caixa para o objeto Sculptor especificado</li>
    </ul>
    <li><b>PutSphere:</b>Uma esfera é especificada para desenho conforme a posição do centro, seu raio em pixels, bem como sua cor e transparência</li>
    <p>Os métodos da classe são:</p>
    <ul>
      <li>PutSphere(x,y,z,raio,r,g,b,a):construtor que recebe os parâmetros de posição do centro , raio, cor e transparência</li>
      <li>draw(&t):desenha uma esfera para o objeto Sculptor especificado</li>
    </ul>
  <li><b>CutSphere:</b>Uma esfera é especificada para ser apagada do desenho conforme a posição do centro e seu raio em pixels</li>
    <p>Os métodos da classe são:</p>
    <ul>
      <li>CutSphere(xc,yc,zc,r):construtor que recebe os parâmetros de posição do centro e raio</li>
      <li>draw(&t):apaga uma esfera para o objeto Sculptor especificado</li>
    </ul>
    <li><b>PutEllipsoid:</b> Um elipsoide é especificado para o desenho conforme os parâmetros de posição do centro, comprimentos dos raios, cor e transparência</li>
    <p>Os métodos da classe são:</p>
    <ul>
      <li>PutEllipsoid(x,y,z,rx,ry,rz,r,g,b,a):construtor que recebe os parâmetros de posição do centro, os raios em relação a cada eixo, a cor e a transparência</li>
      <li>draw(&t):desenha um elipsoide para o objeto Sculptor especificado</li>
    </ul>
    <li><b>CutEllipsoid:</b> Um elipsoide é especificado para o desenho conforme os parâmetros de posição do centro, comprimentos dos raios</li>
    <p>Os métodos da classe são:</p>
    <ul>
      <li>CutEllipsoid(x,y,z,rx,ry,rz):construtor que recebe os parâmetros de posição do centro e os raios em relação a cada eixo</li>
      <li>draw(&t):apaga um elipsoide para o objeto Sculptor especificado</li>
    </ul>
  </ol>
</ul>
