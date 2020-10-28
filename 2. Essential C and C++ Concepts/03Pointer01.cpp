#include <iostream>
using namespace std;    /* Pointer is use for Accessing Heap, Accessing Resourcing,  Parameter Passing */

int main (){
    int a = 10;
    int *p;     //declaration

    p = &a;     //initialisation

    printf("%d", a);
    cout << endl ;
    printf("%d", *p);   //dereferencing
};