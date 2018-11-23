#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");  //функция, отвечающая за вывод русских символов

	int a,b;
	int c;
	
	cout << "Write first number: ";
	cin >> a;
	cout << "Write second number: ";
	cin >> b;

	cout << "1. Addiction" << '\n' << "2. Difference" << '\n' << "3. Multiplication" << '\n' << "4. Division"<<endl;
	cin >> c;
	switch (c)
	{
	case 1:
		cout << "The result is " << a + b;
		break;
	case 2:
		cout << "The result is " << a - b;
		break;
	case 3:
		cout << "The result is " << a * b;
		break;
	case 4:
		cout << "The result is " << (float)a / b;
		break;
	default:
		cout << "Something goes wrong. Make sure you" << '\'' << "ve choosed the right operation.";


	}


}
