#include <iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main() {
    struct Rectangle *p;
    p = (struct Rectangle *) malloc (sizeof(struct Rectangle));
    p->length = 10;
    p->breadth = 5;
}