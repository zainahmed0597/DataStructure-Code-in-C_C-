#include <iostream>
using namespace std;

//call by address

struct Rectangle
{
    int length;
    int breadth;
};

void changeLength(struct Rectangle *p, int l)
{
	p->	length = l;
}   

int main(){

    struct Rectangle r = {10, 5};
    changeLength(&r, 20);
    
    printf("%d \n", r);
    
    printf("%d \n", r);
}
