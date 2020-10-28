#include <iostream>
using namespace std;

class Arithametic{
	private:
		int a;
		int b;
	public:
		Arithametic(int a, int b);
		int add();
		int sub();
};

Arithametic::Arithametic(int a, int b){
	this->a = a;
	this->b = b;
}

int Arithametic::add(){
	int c;
	c = a + b;
	return c;
}

int Arithametic::sub(){
	int c;
	c = a - b;
	return c;
}