#include <iostream>
using namespace std;

/*  1:About Main Memory
    2:How a Program use Memory
    3:Static Allocation
    4:Dynamic Allocation    */
    
int main(){
    int *p;
    p=new int[5];           //C++
    p=(int*) malloc(2*5):   //C
    delete[]p;
    p=NULL; 
}
