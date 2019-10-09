#include <iostream>
#include "sculptor.h"
using namespace std;

int main(){
    Sculptor s(50,50,150);
    s.setColor(1,1,1,1);
    s.putSphere(25,25,10,5);             //pomo, centro=(25,25,25)

    //s.setColor(0,0,0,1);
    s.putBox(24,27,24,27,10,35);         //cabo

    s.setColor(1,1,1,1);
    s.putBox(10,40,22,29,35,42);         //guarda-mao

    s.cutBox(20,24,22,29,35,36);         //detalhe do guarda-mao 1
    s.cutBox(27,31,22,29,35,36);         //detalhe do guarda-mao 2

    //s.setColor(0,0,0,1);
    s.putBox(12,38,23,28,42,120);        //gume da espada

    s.cutBox(20,31,22,23,35,42);         //detalhe do guarda-mao 3
    s.cutBox(20,31,28,29,35,42);         //detalhe do guarda-mao 4

    s.cutEllipsoid(25,25,48,3,3,3);      //detalhe no gume da espada
    s.cutEllipsoid(25,25,57,3,3,3);      //detralhe no gume da espada 2

    s.cutBox(23,28,23,24,37,42);         //detalhe entre o gume e o guarda-mao
    s.putBox(24,27,23,24,38,41);         //detalhe entre o gume e o guarda-mao 2
    s.cutBox(23,28,27,28,37,42);         //detalhe entre o gume o guarda-mao no verso
    s.putBox(24,27,27,28,38,41);         //detalhe entre o gume o guarda-mao no verso 2

    //s.setColor(0,0,0,1);
    s.putBox(19,20,22,23,35,63);
    s.putBox(20,31,22,23,62,63);         //quadrado entre os circulos do gume
    s.putBox(31,32,22,23,35,63);

    s.putBox(19,20,28,29,35,63);
    s.putBox(20,31,28,29,62,63);        //quadrado entre os circulos do gume no verso
    s.putBox(31,32,28,29,35,63);

    s.writeOFF("testesword2.off");
    cout << "Hello World!" << endl;
    return 0;

}
