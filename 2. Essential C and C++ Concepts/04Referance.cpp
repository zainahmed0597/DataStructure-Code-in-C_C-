#include <iostream>
using namespace std;

int main () {
    int a = 10;
    int &r = a;                  //referance

    cout << a << endl;
    r++;
    cout << r << endl;

};