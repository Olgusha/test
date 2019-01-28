// ConsoleApplication12.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{

	float  R1, R2, R3;
	float R0;
	cout << "Vvedite R1: ";
	cin >> R1;
	cout << "Vvedite R2: ";
	cin >> R2;
	cout << "Vvedite R3: ";
	cin >> R3;
	R0 = 1/((1/R1)+(1/R2)+(1/R3));
	cout << "Znachenie R0 ravno: " << R0 << "\n";
    return 0;
}

