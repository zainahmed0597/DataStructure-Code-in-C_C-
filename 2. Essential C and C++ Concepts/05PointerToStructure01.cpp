#include <iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main() {
    struct Rectangle r = {10, 5};
    struct Rectangle *p = &r;

    r.length = 15;
    r.breadth = 20;
    (*p).length = 25; //change value through pointer
    p->length = 30;

    cout << r.length << endl;
    cout << r.breadth << endl;
}