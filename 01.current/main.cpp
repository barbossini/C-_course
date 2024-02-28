#include <iostream>
using namespace std;

const double PI = 3.1415;

class Rectangle{
    public:
        double lenght {1};
        double width {1};

    double area(void){
        return lenght*width;
    }
};

class Circle{
    public: 
        double ray {0.5};

    double area(void){
        return 2*PI*ray;
    }
};

int main(){
    Rectangle r1;
    cout <<"Area of r1 : "<<r1.area()<<endl;

    Circle c1;
    cout <<"Area of c1 : "<<c1.area()<<endl;

    return 0;
}
