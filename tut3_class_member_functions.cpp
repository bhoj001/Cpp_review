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
    return length*breadth*height
}





int main(void){



return 0;
}
