#include <iostream>
using namespace std;

struct Card
{
    int face;
    int shape;
    int color;
};


int main(){
    struct Card deck[52] = {/* {1,0,0}, {2,0,0}, .........*/ };

    printf ("%d", deck[0].face);
    printf ("%d", deck[0].shape);
    printf ("%d", deck[0].color);
}