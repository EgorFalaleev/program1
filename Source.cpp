#include <iostream>
using namespace std;

void Quadratic_Equation();

void main()
{
	float num1,num2;
	int operation;

	cout << "Choose operation:" << endl;
	cout << "1. Addiction" << '\n' << "2. Difference" << '\n' << "3. Multiplication" << '\n' << "4. Division" << endl;
	cin >> operation;

	cout << "Write first number: ";
	cin >> num1;
	cout << "Write second number: ";
	cin >> num2;
	
	switch (operation)
	{
	case 1:
		cout << "The result is " << num1 + num2<<  endl;
		break;
	case 2:
		cout << "The result is " << num1 - num2 << endl;
		break;
	case 3:
		cout << "The result is " << num1 * num2 << endl;
		break;
	case 4:
		cout << "The result is " << num1 / num2 << endl;
		break;
	default:
		cout << "Something goes wrong. Make sure you" << '\'' << "ve choosed the right operation.";
	}
    Quadratic_Equation();
}

void Quadratic_Equation()
{
	float a,  b,  c;
	float d,  x1,  x2;
	cout << "Write first number (a): " << endl;
	cin >> a;
	cout << "Write second number(b): " << endl;
	cin >> b;
	cout << "Write third number(c): " << endl;
	cin >> c;

	cout << a << "x^2 + " << b << "x + " << c << "= 0" << endl;

	d = b * b - 4 * a * c;
	cout << "D = " << d << endl;

	if (d > 0)
	{
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);

		cout << "x1 = " << x1 << "; x2 = " << x2 << endl;
	}
	else if (d == 0)
	{
		x1 = (-b + sqrt(d)) / (2 * a);
		cout << "x1 = " << x1 << endl;
	}
	else
	{
		cout << "No roots";
	}
}
