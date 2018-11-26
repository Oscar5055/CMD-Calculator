
#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include <conio.h>

using namespace std;

float x, y;
int choose;

int main()
{

	for (;;)
	{
		cout << "Insert 1st Number: ";
		cin >> x;
		cout << "Insert 2nd Number: ";
		cin >> y;

		cout << endl;
		cout << endl;

		cout << "MAIN MENU" << endl;
		cout << "---------------" << endl;
		cout << "1. Add" << endl;
		cout << "2. Substract" << endl;
		cout << "3. Multiply" << endl;
		cout << "4. Division" << endl;
		cout << "5. Exit" << endl;
		cout << endl;



		cout << "Choose: ";
		choose = _getch();
		cout << endl;

		switch (choose)
		{
		case '1':
			cout << "Result = " << x + y;
			break;
		case '2':
			cout << "Result = " << x - y;
			break;
		case '3':
			cout << "Result = " << x * y;
			break;
		case '4':
			if ((y == 0), (x == 0)) cout << "Can't Division by 0";
			else cout << "Result = " << x / y;
			break;
		case '5':
			exit(0);
			break;
		default:
			cout << "Wrong Option Choosed";
			break;

			

		}
		getchar(); getchar();
		system("cls");
	}


}

