#include <iostream>
using namespace std;

void fun(int A[], int n)
{
    A [0] = 25;
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", A[i]);
    }
}

int main(){

    int A[5] = {2, 4, 6, 8, 10};
    fun(A,5); 
}