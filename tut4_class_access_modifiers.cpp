#include <iostream>
using namespace std;
/*
by:bbk
date: 2019-Dec-9th
purpose: to check access modifier (public,private,protected) in cpp language.
*/
// For public: This can be accessed outside the class via object and within a program.
// by default all members are private.
class Box{
    public:
        double width;// public memeber
        void set_width(double x);//public function declaration
};
// using scope resolution to set width
void Box::set_width(double x){
    width = x;
}

// private member exmple
// private members can only be accessed via members of the class itself , not by outside fxn, or
//  even derived classes

class Shape{    
    private: double length; // we don't need to say private by defualt non specified members are private
    public:
        void set_length(double x);//private fxn delaration
        double get_length();//private
    
};
void Shape::set_length(double x){
    length = x; // permissible as set_lenght is also memeber of the class , so can access private variable.
}
double Shape::get_length(){
    return length;
}
// protected: protected members is like private except it can be accessed vai derived class
// in other words derive class can access protected members of base class.
// using via object will not work, same as in private.
class Circle{
    protected: double radius;

    public: double get_area(double r);// declaration of area fxn this is public on purpose so we can access via objecet
    public: double get_default_area();
};
#define PI 3.14
double Circle::get_area(double r){
    return (PI*r*r);
}

double Circle::get_default_area(){
    return (PI*radius*radius);
}
// lets have derived class to make concept clear
class SmallCircle:public Circle{
    public: void set_radius(double x);
};
void SmallCircle::set_radius(double r){
    radius = r; // permissible as set_radius is member of SmallCicle class and radius is protected member of 
    // the base class Circle
}

int main(void){
// For public 
Box b1;
b1.set_width(7);
cout<<"width:"<<b1.width<<endl; //b1.width is ok because width is public

// For private eg.
Shape s1;
// We can not do below as both fxn are private
// note: if we make set_lenght and get_length private we can not access even vai object.set_length
// we have made this public on purpose so that we can manipulate private variables like length 
s1.set_length(8);//permissible as public
cout<< "Lenght:"<<s1.get_length()<<endl;
// s1.length will not work as lenght is private variable


//For protected:

SmallCircle sc;
sc.set_radius(2);
cout<<"circle area: "<<sc.get_default_area()<<endl;

// also smallcircle will have get_area fxn of the base class we can utilize it
cout<<"Use base method via derived class object-area(public get_area fx):"<<sc.get_area(3)<<endl;
cout<<"Note:if get_area() fxn was protected or private we can not call it in main fxn using sc.get_area(3) "<<endl;

//To get radius value 

// below is not permissible as radius is protected member like 
// private we can not get protected member vai . operator using object
// cout<<"radius ="<<sc.radius<<endl;// not permissible

// if we want to get radius we need to implement public method and then call that method 


return 0;
}
