#include "trigonometry.h"


Rectangle::Rectangle(double l,double w){
    this->lenght = l;
    this->width  = w;
}

double Rectangle::area(void){return lenght*width; }

void Rectangle::set_color(void){
    cout << "select new rectangle color: "<<endl;
    cin >> this->color;
}

void Rectangle::get_color(void){
    cout<< "Rectangle color: "<<this->color<<endl;
}




Circle::Circle ( double r={0.5}){this->radius=r;}

double Circle::area(void){return 2*PI*radius;}