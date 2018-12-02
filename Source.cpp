#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");  //функция, отвечающая за вывод русских символов

	int num1,num2, operation;
	
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
		cout << "The result is " << num1 + num2;
		break;
	case 2:
		cout << "The result is " << num1 - num2;
		break;
	case 3:
		cout << "The result is " << num1 * num2;
		break;
	case 4:
		cout << "The result is " << (float)num1 / num2; 
		break;
	default:
		cout << "Something goes wrong. Make sure you" << '\'' << "ve choosed the right operation.";


	}


}
