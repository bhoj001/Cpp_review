#include <iostream>
using namespace std;

class Shape{
	public :
		// pure virutal fxn providing interface
		virtual double get_area(double w=0,double h=0)=0;
};

class Rectangle: public Shape{
	public: double get_area(double w, double h){return w*h ;}
};

class Triangle: public Shape{
	public:	double get_area(double w,double h){return (w*h)/2;}
};

int main(void){
Rectangle rect;
Triangle tri;
cout<<"Total area of rectangle:"<<rect.get_area(3,4)<<endl;
cout <<"Total triangle area:"<<tri.get_area(3,4)<<endl;
return 0;
}

