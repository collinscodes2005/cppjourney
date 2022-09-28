//Program to manipulate struct
#include <iostream>

using namespace std;

class Rectangle {
	public:
		Rectangle();
		Rectangle(double l, double b); // constructor 
		double area();
		double perimeter();
	
	private:
		// memmber
		double length;
		double breadth;
};

Rectangle::Rectangle(){
}

// initialize the members

Rectangle::Rectangle(double l, double b){
	length = l;
	breadth = b;
}

double Rectangle::area(){
	return length * breadth;
}

double Rectangle::perimeter(){
	return 2 * (length + breadth);
}

int main (){
	Rectangle rect(100, 50);
	
//	rect.length = 100;
//	rect.breadth = 50;
	
	cout << "Area is " << rect.area() << endl;	
	cout << "Perimeter is " << rect.perimeter() << endl;
}