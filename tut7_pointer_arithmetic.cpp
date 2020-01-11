#include<iostream>
using namespace std;
const int MAX = 3;

int main(){

    // increment operation with pointer
    int VAR[MAX] = {20,300,444};
    int *ptr;

    ptr = VAR;

    for (int i =0 ;i <MAX;i++){

        cout << "each element address = " << ptr << endl;
        cout << "each element value = " << *ptr << endl;
        // increment the pointer address
        ptr++;
    }
    

    return 0;
}