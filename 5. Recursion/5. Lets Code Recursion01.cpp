#include <iostream>
using namespace std;

//Tail Recursion

void fun(int n){
    if (n > 0)
    {   
        printf ("%d \n", n); 
        fun (n-1);
    }
}

int main(){
    int x = 3;
    fun(x);
    return 0;
}