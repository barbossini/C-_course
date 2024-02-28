#include <iostream>
#include <string.h>

#include "trigonometry.h"
#include "constants.h"

using namespace std;


int main(){
    Rectangle r1;
    Rectangle r2(2,2);
    cout <<"Area of r1 : "<<r1.area()<<endl;
    cout <<"Area of r2 : "<<r2.area()<<endl;
    r2.set_color();
    r2.get_color();
    return 0;
}

