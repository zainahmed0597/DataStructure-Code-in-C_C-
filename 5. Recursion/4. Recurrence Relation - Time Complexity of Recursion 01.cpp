#include <iostream>
using namespace std;

//Traising tree of recursive function

void fun2(int n){
    if (n > 0)
    {   
        printf ("%d \n", n); 
        fun2 (n-1);
    }
}

int main(){
    int x = 3;
    fun2(x);
}