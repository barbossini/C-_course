#include <iostream>
#include <string_view>

class Dog{
    public : 
        Dog() = default;
        Dog(std::string_view name_param, std::string_view breed_param, int  age_param);
        ~Dog();

    private : 
        std::string name;
        std::string breed;
        int * p_age{nullptr};
};
Dog::Dog(std::string_view name_param, std::string_view breed_param, int  age_param){
    name = name_param;
    breed = breed_param;
    p_age = new int;
    *p_age = age_param;
    std::cout << "Dog constructor called for " << name << std::endl;
}

Dog::~Dog(){
    delete p_age;
    std::cout << "Dog destructor called for : " << name << std::endl;
}

void one_func(){
    Dog dog("Finger","Labrador",5);
    std::cout<<"Dog instance created"<<std::endl;
}

void some_func(){
    Dog* p_dog = new Dog("Fluffy","Shepherd",2);
    std::cout<<"Dog instance created"<<std::endl;
    delete p_dog;// Causes for the destructor of Dog to be called
}


int main(){ 
    std::cout << "implicite call" <<std::endl;
    //implicite call to ~Dog()
    one_func();

    std::cout << std::endl;

    std::cout << "explicite call" <<std::endl;
    //explicite call to ~Dog()
    some_func();

    std::cout << "Done!" << std::endl;
    return 0;
}