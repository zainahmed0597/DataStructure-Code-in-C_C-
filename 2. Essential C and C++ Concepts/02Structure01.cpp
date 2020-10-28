#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main(){

    // struct Rectangle r;                 //declear

    struct Rectangle r = {10, 5};       //initialization

    r.length = 15;
    r.breadth = 10;

    printf("Aera of Rectangle is %d", r.length * r.breadth );
    
}