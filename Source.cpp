#include <iostream>
using namespace std;

void Quadratic_Equation(float  &x, float &y, float &z);

int main()
{
	
	float a,b,c, num1,num2;
	int operation;

	cout << "Choose operation:" << endl;
	cout << "1. Addiction" << '\n' << "2. Difference" << '\n' << "3. Multiplication" << '\n' << "4. Division" << '\n' << "5. Quadratic Equation" << endl;
	cin >> operation;

	if (operation <= 4 && operation>0)
	{
		cout << "Write first number: ";
		cin >> num1;
		cout << "Write second number: ";
		cin >> num2;
	
		switch (operation)
		{
		case 1:
			cout << "The result is " << num1 + num2 << endl;
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
		}

	}
	else if (operation ==5)
	{
		cout << "Write first number (a): ";
		cin >> a;	
		cout << "Write second number (b): ";
		cin >> b;
		cout << "Write third number (c): ";
		cin >> c;

		Quadratic_Equation(a,b,c);
	}
	else
	{
		cout <<  "Something goes wrong. Make sure you" << '\'' << "ve choosed the right operation.";
	}

	return 0;
}

void Quadratic_Equation(float  &x, float &y, float &z)
{
	float d,  x1,  x2;

	d = y * y - 4 * x * z;
	cout << "D = " << d << endl;

	if (d > 0)
	{
		x1 = (-y + sqrt(d)) / (2 * x);
		x2 = (-y - sqrt(d)) / (2 * x);

		cout << "x1 = " << x1 << "; x2 = " << x2 << endl;
	}
	else if (d == 0)
	{
		x1 = (-y + sqrt(d)) / (2 * x);
		cout << "x1 = " << x1 << endl;
	}
	else
	{
		cout << "No roots";
	}
}


// add quadratic equation to menu 
// make quadratic equation without cin and cout