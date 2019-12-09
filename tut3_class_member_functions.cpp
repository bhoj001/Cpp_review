#include <iostream>
using namespace std;

class Box{

public: 
    double length,breadth,height;
    double get_volume(void);// function declaration
    void set_length(double x);
    void set_breadth(double x);
    void set_height(double x);
};

// we use scope resolution operator(i.e. ::) to define functions outside of classes
// syntax is <return type> <class_name>::<fxn_name_with_parameters>{}
// e.g.
void Box::set_length(double x){
    length = x;
}

void Box::set_breadth(double x){
    breadth = x;
}

void Box::set_height(double x){
    height = x;
}

double Box::get_volume(){
    return length*breadth*height;
}

int main(void){
Box b1;
b1.set_length(4);
b1.set_height(5);
b1.set_breadth(8);
cout<<"Total volumn =" << b1.get_volume()<< endl;

Box b2;
b2.set_length(2);
b2.set_height(5);
b2.set_breadth(10);
cout<<"Total volumn =" << b2.get_volume()<< endl;

return 0;
}
