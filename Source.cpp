#include <iostream>
using namespace std;

class Figure
{
public:
	virtual double get_Area() = 0;
	virtual double get_Perimeter() = 0;
	virtual void set_values(double, double) = 0;
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
	virtual void set_values(double h, double l) { height = h; length = l; }
};

class RightTriangle : public Figure, public IAngleCountable
{
public:	
	double get_Hypotenuse() { return sqrt(cathetus1*cathetus1 + cathetus2 * cathetus2); }
	double cathetus1, cathetus2;
	virtual double get_Area() { return cathetus1 * cathetus2 / 2; }
	virtual double get_Perimeter() { return cathetus1 + cathetus2 + get_Hypotenuse(); }
	virtual int count_Angles() { return 3; }
	virtual void set_values(double k1, double k2) { cathetus1 = k1; cathetus2 = k2; }
};

class Circle : public Figure
{
public:
	double radius;
	virtual double get_Area() { return radius * radius*3.14; }
	virtual double get_Perimeter() { return 2 * 3.14*radius; }
	virtual void set_values(double r, double x) { radius = r; x = 0; }
};

int main()
{
	Figure* rect = new Rectangle();
	rect->set_values(3, 4);
	cout << "Rectangle area = " << rect->get_Area() << endl;
	cout << "Rectangle perimeter = " << rect->get_Perimeter() << endl;

	Figure* trgl = new RightTriangle();
	trgl->set_values(2, 5);
	cout << "Triangle area = " << trgl->get_Area() << endl;
	cout << "Triangle perimeter = " << trgl->get_Perimeter() << endl;

	Figure* cir = new Circle();
	cir->set_values(1, 0);
	cout << "Circle area =" << cir->get_Area() << endl;
	cout << "Circle perimeter = " << cir->get_Perimeter() << endl;

	IAngleCountable* anglesrect = new Rectangle();
	cout << "Rectangle has " << anglesrect->count_Angles() << " angles." << endl;

	IAngleCountable* anglestrgl = new RightTriangle();
	cout << "Triangle has " << anglestrgl->count_Angles() << " angles." << endl;

	system("pause");
}