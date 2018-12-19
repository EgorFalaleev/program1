#include <iostream>
using namespace std;

class Figure
{
public:
	virtual double get_Area() = 0;
	virtual double get_Perimeter() = 0;
protected:
	double height;
	double length;
};

class Rectangle : public Figure
{
public:
	double get_Area() { return height * length; }
	double get_Perimeter() { return (height + length) * 2; }
};

class RightTriangle : public Figure
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
	Rectangle* rect;
	rect->get_Area();
}