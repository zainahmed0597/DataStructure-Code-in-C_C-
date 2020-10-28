#include <iostream>
#include <stdlib.h>
using namespace std; /* Pointer is use for Accessing Heap, Accessing Resourcing,  Parameter Passing */

int main (){
    int *p;

    p = (int *)malloc( 5* sizeof(int));  // in C language
    
    p = new  int[5];                     // in C++ language
};