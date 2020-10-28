#include <iostream>
using namespace std;

//call by address

struct Test
{
    int A[5];
    int n;
};

void fun(struct Test t1)
{
	
}   

int main(){

    struct Test t = { {2, 4, 6, 8, 10}, 5};
//    fun(t);
    printf("%d \n", t);
}
