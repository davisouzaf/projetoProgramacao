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
    <td class="tg-0pky"></td>
  </tr>
  <tr>
    <td class="tg-0pky"></td>
    <td class="tg-0pky"></td>
  </tr>
  <tr>
    <td class="tg-0pky"></td>
    <td class="tg-0pky"></td>
  </tr>
  <tr>
    <td class="tg-0pky"></td>
    <td class="tg-0pky"></td>
  </tr>
  <tr>
    <td class="tg-0pky"></td>
    <td class="tg-0pky"></td>
  </tr>
  <tr>
    <td class="tg-0lax"></td>
    <td class="tg-0lax"></td>
  </tr>
  <tr>
    <td class="tg-0lax"></td>
    <td class="tg-0lax"></td>
  </tr>
  <tr>
    <td class="tg-0lax"></td>
    <td class="tg-0lax"></td>
  </tr>
  <tr>
    <td class="tg-0lax"></td>
    <td class="tg-0lax"></td>
  </tr>
  <tr>
    <td class="tg-0lax"></td>
    <td class="tg-0lax"></td>
  </tr>
</table>
  <ol>
    <li></li>
    <li></li>
    <li></li>
    <li></li>
    <li></li>
    <li></li>
    <li></li>
    <li></li>
    <li></li>
    <li></li>
    <li></li>
    <li></li>
  </ol>
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
