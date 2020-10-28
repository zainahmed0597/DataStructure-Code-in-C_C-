#include <iostream>
using namespace std;

/*  1:About Main Memory
    2:How a Program use Memory
    3:Static Allocation
    4:Dynamic Allocation    */
    
void fun2(int i){
    int a;
}

void fun1(){
    int x;
    fun2(x);
}

int main(){
    int a;
    float b;

    fun1();
}
 