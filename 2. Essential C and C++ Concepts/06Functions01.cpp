#include <iostream>
using namespace std;

int add(int a, int b){ // formal parameter
    int c;
    c = a + b;
    return(c);
}                       //declear of a function

int main(){

    int x, y, z;

    x = 10;
    y = 5;
    z = add(x, y);      //calling a function  //Actual parameters

    printf("sum is %d", z);
}