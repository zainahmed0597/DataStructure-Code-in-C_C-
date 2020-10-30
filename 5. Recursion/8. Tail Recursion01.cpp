#include <iostream>
using namespace std;

// Tail Recursion
int fun(int n)
{
   
    if(n>0){
        print ("%d",n);
        fun(n-1);
    }
    return 0;
}

// Tail Recursion with loop
int fun(int n){
    while (n >0)
    {
        printf("%d",n);
        n--;
    }
    
}

    
