#include <iostream>
#include "Sculptor.h"
using namespace std;

int main(){
    Sculptor s(50,50,50);
    s.setColor(1,1,0,1);
    s.putEllipsoid(25,25,25,5,15,20);
    s.writeOFF("testelipse.off");
    cout << "Hello World!" << endl;
    return 0;

}
