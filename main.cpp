#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include "sculptor.h"
#include "figurageometrica.h"
#include "cutellipsoid.h"
#include "putbox.h"
#include "cutbox.h"
#include "putellipsoid.h"
#include "putvoxel.h"
#include "cutvoxel.h"
#include "putsphere.h"
#include "cutsphere.h"

using namespace std;

int main(){
    string s, comando;
    ifstream fin;
    fin.open("C:/Users/MatrizD42018/Downloads/teste.txt");
    stringstream ss;
    Sculptor *sc;
    vector<FiguraGeometrica*> f;
    while(true){
        getline(fin,s);
        if(fin.good()){
            stringstream ss(s);
            ss>>comando;
            cout<<comando<<endl;
            if(comando.compare("dim")==0){
                int nx,ny,nz;
                ss>>nx>>ny>>nz;
                sc=new Sculptor(nx,ny,nz);
            }else if (comando.compare("putvoxel")==0){
                int pos[3];
                float color[4];
                ss>>pos[0]>>pos[1]>>pos[2];
                ss>>color[0]>>color[1]>>color[2]>>color[3];
                f.push_back(new PutVoxel(color[0],color[1],color[2],color[3],pos[0],pos[1],pos[2]));//ainda falta testar a criação dos objetos em cada elemento do vetor!!
            }else if(comando.compare("cutvoxel")==0){
                int pos[3];
                ss>>pos[0]>>pos[1]>>pos[2];
                f.push_back(new CutVoxel(pos[0],pos[1],pos[2]));
            }else if(comando.compare("putbox")==0){
                int pos[6];
                float color[4];
                ss>>pos[0]>>pos[1]>>pos[2]>>pos[3]>>pos[4]>>pos[5];
                ss>>color[0]>>color[1]>>color[2]>>color[3];
                f.push_back(new PutBox(pos[0],pos[1],pos[2],pos[3],pos[4],pos[5],color[0],color[1],color[2],color[3]));
            }else if (comando.compare("cutbox")==0) {
                int pos[6];
                ss>>pos[0]>>pos[1]>>pos[2]>>pos[3]>>pos[4]>>pos[5];
                f.push_back(new CutBox(pos[0],pos[1],pos[2],pos[3],pos[4],pos[5]));
            }else if (comando.compare("putsphere")==0) {
                int pos[4];
                int color[4];
                ss>>pos[0]>>pos[1]>>pos[2]>>pos[3];
                ss>>color[0]>>color[1]>>color[2]>>color[3];
                f.push_back(new PutSphere(pos[0],pos[1],pos[2],pos[3],color[0],color[1],color[2],color[3]));
            }else if (comando.compare("cutsphere")==0) {
                int pos[4];
                ss>>pos[0]>>pos[1]>>pos[2]>>pos[3];
                f.push_back(new CutSphere(pos[0],pos[1],pos[2],pos[3]));
            }else if (comando.compare("putellipsoid")==0) {
                int pos[6];
                int color[4];
                ss>>pos[0]>>pos[1]>>pos[2]>>pos[3]>>pos[4]>>pos[5];
                ss>>color[0]>>color[1]>>color[2]>>color[3];
                f.push_back(new PutEllipsoid(pos[0],pos[1],pos[2],pos[3],pos[4],pos[5],color[0],color[1],color[2],color[3]));
            }else if (comando.compare("cutellipsoid")==0){
                int pos[6];
                ss>>pos[0]>>pos[1]>>pos[2]>>pos[3]>>pos[4]>>pos[5];
                f.push_back(new CutEllipsoid(pos[0],pos[1],pos[2],pos[3],pos[4],pos[5]));
            }
        }else {
            break;
        }
    }
    for (int i = 0; i < f.size(); ++i) {
       f[i]->draw(*sc);
    }

    sc->writeOFF("C:/Users/MatrizD42018/Downloads/testeescrita.off");

    return 0;
}



/*Sculptor s(50,50,150);             //pomo, centro=(25,25,25)
    PutSphere ps(25,25,10,5,1,1,1,0.5);
    ps.draw(s);

    PutBox pb(24,27,24,27,10,35,0,0,0,0.745);//cabo
    pb.draw(s);
    s.setColor(1,1,1,0.8);
    s.putBox(10,40,22,29,35,42);         //guarda-mao

    s.cutBox(20,24,22,29,35,36);         //detalhe do guarda-mao 1
    s.cutBox(27,31,22,29,35,36);         //detalhe do guarda-mao 2

    s.setColor(0,0,0,0.5);
    s.putBox(12,38,23,28,42,120);        //gume da espada

    s.cutBox(20,31,22,23,35,42);         //detalhe do guarda-mao 3
    s.cutBox(20,31,28,29,35,42);         //detalhe do guarda-mao 4

    s.cutEllipsoid(25,25,48,3,3,3);      //detalhe no gume da espada
    s.cutEllipsoid(25,25,57,3,3,3);      //detralhe no gume da espada 2

    s.cutBox(23,28,23,24,37,42);         //detalhe entre o gume e o guarda-mao
    s.putBox(24,27,23,24,38,41);         //detalhe entre o gume e o guarda-mao 2
    s.cutBox(23,28,27,28,37,42);         //detalhe entre o gume o guarda-mao no verso
    s.putBox(24,27,27,28,38,41);         //detalhe entre o gume o guarda-mao no verso 2

    s.setColor(0,0,0,0.3);
    s.putBox(19,20,22,23,35,63);
    s.putBox(20,31,22,23,62,63);         //quadrado entre os circulos do gume
    s.putBox(31,32,22,23,35,63);

    s.putBox(19,20,28,29,35,63);
    s.putBox(20,31,28,29,62,63);        //quadrado entre os circulos do gume no verso
    s.putBox(31,32,28,29,35,63);

    s.writeOFF("/home/davi/Documentos/testesword.off");
    cout << "Done" << endl;*/



