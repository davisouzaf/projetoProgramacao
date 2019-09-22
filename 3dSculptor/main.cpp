#include <iostream>
#include "Sculptor.h"
using namespace std;

int main(){
    Sculptor s(70,70,70);
    s.setColor(1,1,0,0.01);
    s.putSphere(0,70,0,15);
    s.setColor(0,1,0,0.5);
    s.putBox(0,50,0,25,0,25);
    s.cutBox(5,15,0,10,0,25);
    s.cutBox(35,45,0,10,0,25);
    s.cutBox(0,50,0,5,0,25);
    s.setColor(1,0,0,1);
    s.putEllipsoid(10,5,3,4,4,3);
    s.putEllipsoid(10,5,22,4,4,3);
    s.cutBox(0,50,20,25,0,25);
    s.setColor(0,0,1,1);
    s.putBox(8,13,3,8,3,21);
    s.cutEllipsoid(38,5,22,7,7,5);
    s.cutEllipsoid(38,5,3,7,7,5);
    s.setColor(1,0,0,1);
    s.putEllipsoid(38,5,22,5,5,4);
    s.putEllipsoid(38,5,3,5,5,4);
    s.setColor(0,0,1,1);
    s.putBox(35,42,3,8,2,20);
    s.cutBox(0,8,13,20,0,25);
    s.cutSphere(48,13,15,5);
    s.setColor(1,0,0,1);
    s.putEllipsoid(48,13,15,2,4,4);
    s.writeOFF("programateste2.off");
    s.~Sculptor();
    cout << "Done" << endl;
    return 0;

}
