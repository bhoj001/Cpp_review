#include<iostream>
using namespace std;

int main(){

    int var = 40;
    int *ip;

    ip = &var;

    cout << "var="<< var << endl;
    cout << "address of var = ip="<<ip <<endl;
    cout << "value at the address=" << *ip <<endl;
    cout << "address using &var=" << &var<< endl;

    int *iptr;
    iptr = &var;
    cout << "iptr= "<< *iptr<<endl;

    /*
    Note: for simple int value we use '&val' for array we just use 'var'
    */
    int x[2]= {2,3};
    int *ptr = x;
    cout << "ptr = "<< *ptr<<endl; // this will print the first address of an array


    // I know this is bad but just testing
    // insteading of doing var we did *(&var)
    cout << "values using *(&var)=";
    cout << *(&var) <<endl;

    //-- Null pointer example

    int *np = NULL;
    // value at NULL pointer will be 0
    cout<< "np= "<< np <<endl;
    // below gives segmentation fault: Segmentation fault (core dumped)
    // cout << "*np= "<< *np <<endl;



    return 0;
}