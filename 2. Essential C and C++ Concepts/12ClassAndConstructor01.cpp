#include <iostream>
using namespace std;

class Rectangle{
	private:
		int length;
		int breadth;
	public:
	
	Rectangle(){length = breadth = 1;}	//over loaded constructor	default constructor
	Rectangle(int l, int b);			//over loaded constructor	parameter constructor
	int area();							//functions for data members of an opjects and also facilitators
	int Perimeter();					//facilitators
	int getLength(){					//accessor
		return length;			
	}	
	void setLength(int l){				//mutator 
		length = l;
	}		
	~Rectangle();						//destoryer
};

Rectangle::	Rectangle(int l, int b){
	length = l;
	breadth = b;
}

int Rectangle::area(){
	return length*breadth;
}

int Rectangle::Perimeter(){
	return 2 * (length + breadth);
}

Rectangle::~Rectangle(){
}

int main(){
	 Rectangle r(10, 50);
	 cout << r.area()<<"\n";
	 cout << r.Perimeter()<<"\n";
	 r.setLength(20);
	 cout << r.getLength()<<"\n";
}
