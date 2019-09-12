#include <iostream>
#include "Sculptor.h"
using namespace std;

int main(){
    Sculptor s(2,2,2);
    s.setColor(1,0,0,1);
    s.putVoxel(0,0,0);


    cout << "Hello World!" << endl;
    return 0;
}
