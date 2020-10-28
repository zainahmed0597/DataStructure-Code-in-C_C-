#include <iostream>
using namespace std;

//Traising tree of recursive function

void fun2(int n){
    if (n > 0)
    {
        //Ascending / Calling time 
        fun2 (n-1);//*2
        printf ("%d \n", n);
        //Descending / returining time
    }
}

int main(){
    int x = 3;
    fun2(x);
}