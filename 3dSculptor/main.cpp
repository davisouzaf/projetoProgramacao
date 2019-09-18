#include <iostream>
#include "Sculptor.h"
using namespace std;

int main(){
    Sculptor s(10,10,10);
    s.setColor(1,1,1,1);
    s.putEllipsoid(5,5,5,3,2,2);
    s.writeOFF("testelipse.off");
    cout << "Hello World!" << endl;
    return 0;
}
