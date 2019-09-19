#include <iostream>
#include "Sculptor.h"
using namespace std;

int main(){
    Sculptor s(50,50,50);
    s.setColor(0,1,1,0.5);
    s.putBox(0,50,0,50,0,50);
    s.cutBox(0,25,0,25,0,25);
    s.setColor(1,0,1,1);
    s.putSphere(0,0,0,20);
    s.writeOFF("testeform1.off");
    cout << "Hello World!" << endl;
    return 0;

}
