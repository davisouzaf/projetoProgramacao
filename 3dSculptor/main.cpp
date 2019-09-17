#include <iostream>
#include "Sculptor.h"
using namespace std;

int main(){
    Sculptor s(16,16,16);
    s.setColor(1,1,0,1);
    s.putBox(1,5,3,6,4,5);
    s.cutBox(1,2,3,4,4,4);
    s.writeOFF("testebox1.off");
    cout << "Hello World!" << endl;
    return 0;
}
