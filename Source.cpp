#include <iostream>
using namespace std;

class Figure
{
public:
	virtual double get_Area() = 0;
	virtual double get_Perimeter() = 0;
};

class IAngleCountable
{
public:
	virtual int count_Angles() = 0;
};

class Rectangle : public Figure, public IAngleCountable
{
public:
	double height, length;
	virtual double get_Area() { return height * length; }
	virtual double get_Perimeter() { return (height + length) * 2; }
	virtual int count_Angles() { return 4; }
};

class RightTriangle : public Figure, public IAngleCountable
{
public:	
	double get_Hypotenuse() { return sqrt(cathetus1*cathetus1 + cathetus2 * cathetus2); }
	double cathetus1, cathetus2;
	virtual double get_Area() { return cathetus1 * cathetus2 / 2; }
	virtual double get_Perimeter() { return cathetus1 + cathetus2 + get_Hypotenuse(); }
	virtual int count_Angles() { return 3; }
};

class Circle : public Figure
{
public:
	double radius;
	double get_Area() { return radius * radius*3.14; }
	double get_Perimeter() { return 2 * 3.14*radius; }
};

int main()
{
	Figure* rect = new Rectangle();
	rect->get_Area();
	rect->get_Perimeter();

	Figure* trgl = new RightTriangle();
	trgl->get_Area();
	trgl->get_Perimeter();

	Figure* cir = new Circle();
	cir->get_Area();
	cir->get_Perimeter();

	IAngleCountable* anglesrect = new Rectangle();
	cout << "Rectangle has " << anglesrect->count_Angles() << " angles." << endl;

	IAngleCountable* anglestrgl = new RightTriangle();
	cout << "Triangle has " << anglestrgl->count_Angles() << " angles." << endl;}