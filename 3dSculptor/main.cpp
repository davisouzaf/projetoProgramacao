#include <iostream>
#include "Sculptor.h"
using namespace std;

int main(){
    Sculptor s(16,16,16);
    s.setColor(0,0,1,0.3);
    s.putSphere(8,8,8,3);
    s.writeOFF("testesphere.off");
    cout << "Hello World!" << endl;
    return 0;
}
