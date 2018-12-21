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
	Rectangle(double h, double l): height(h), length(l) {}
	virtual double get_Area() { return height * length; }
	virtual double get_Perimeter() { return (height + length) * 2; }
	virtual int count_Angles() { return 4; }
};

class RightTriangle : public Figure, public IAngleCountable
{
public:	
	double get_Hypotenuse() { return sqrt(cathetus1*cathetus1 + cathetus2 * cathetus2); }
	double cathetus1, cathetus2;
	RightTriangle(double c1, double c2): cathetus1(c1), cathetus2(c2) {}
	virtual double get_Area() { return cathetus1 * cathetus2 / 2; }
	virtual double get_Perimeter() { return cathetus1 + cathetus2 + get_Hypotenuse(); }
	virtual int count_Angles() { return 3; }
};

class Circle : public Figure
{
public:
	double radius;
	Circle(double r): radius(r) {}
	virtual double get_Area() { return radius * radius*3.14; }
	virtual double get_Perimeter() { return 2 * 3.14*radius; }
};

int main()
{
	int choosefigure;
	cout << "Choose figure: " << '\n' << "1. Rectangle" << '\n' << "2. Right triangle" << '\n' << "3. Circle" << endl;
	cin >> choosefigure;
	switch (choosefigure)
	{
	case 1:
		{
			Figure* rect = new Rectangle(5, 5);
			cout << "Rectangle area = " << rect->get_Area() << endl;
			cout << "Rectangle perimeter = " << rect->get_Perimeter() << endl; 
			IAngleCountable* anglesrect = new Rectangle(0, 0);
			cout << "Rectangle has " << anglesrect->count_Angles() << " angles." << endl;
			break; 
		}
	case 2: 
		{
			Figure* trgl = new RightTriangle(10, 3);
			cout << "Triangle area = " << trgl->get_Area() << endl;
			cout << "Triangle perimeter = " << trgl->get_Perimeter() << endl;
			IAngleCountable* anglestrgl = new RightTriangle(0, 0);
			cout << "Triangle has " << anglestrgl->count_Angles() << " angles." << endl;
			break;
		}
	case 3:
		{
			Figure* cir = new Circle(2);
			cout << "Circle area =" << cir->get_Area() << endl;
			cout << "Circle perimeter = " << cir->get_Perimeter() << endl;
			break;
		}
	default: 
		{
			cout << "Invalid figure" << endl;
			break; 
		}
	}
}