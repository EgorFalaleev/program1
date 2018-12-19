#include <iostream>
using namespace std;

class Figure
{
protected:
	double height;
	double length;
public:
	virtual double get_Area() = 0;
	virtual double get_Perimeter() = 0;
};

class Angles
{
protected:
	int number;
public:
	virtual void count_Angles() { cout << "Figure has " << number << "angles"; }
};

class Rectangle : public Figure, public Angles
{
public:
	double get_Area() { return height * length; }
	double get_Perimeter() { return (height + length) * 2; }
};

class RightTriangle : public Figure, public Angles
{
private:
	double hypotenuse = sqrt(height*height + length * length);
public:
	double get_Area() { return height * length / 2; }
	double get_Perimeter() { return height + length + hypotenuse; }
};

class Circle : public Figure
{
private:
	double radius;
public: 
	double get_Area() { return radius * radius*3.14; }
	double get_Perimeter() { return 2 * 3.14*radius; }
};


int main()
{
	Rectangle rect;
	rect.get_Area();
	rect.get_Perimeter();
	rect.count_Angles();

	RightTriangle trgl;
	trgl.get_Area();
	trgl.get_Perimeter();
	trgl.count_Angles();

	Circle cir;
	cir.get_Area();
	cir.get_Perimeter;
}