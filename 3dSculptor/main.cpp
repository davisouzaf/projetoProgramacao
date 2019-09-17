#include <iostream>
#include "Sculptor.h"
using namespace std;

int main(){
    Sculptor s(16,16,16);
    s.setColor(1,1,0,1);
    s.putBox(1,16,1,16,1,16);
    s.cutBox(5,10,10,15,1,5);
    s.writeOFF("testebox3.off");
    cout << "Hello World!" << endl;
    return 0;
}
