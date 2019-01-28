// ConsoleApplication12.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	float  R1, R2, R3;
	float R0;
	cout << "¬ведите R1: ";
	cin >> R1;
	cout << "¬ведите R2: ";
	cin >> R2;
	cout << "¬ведите R3: ";
	cin >> R3;
	R0 = 1/((1/R1)+(1/R2)+(1/R3));
	cout << "«начение сопротивлени€ R0 равно: " << R0 << "\n";
    return 0;
}

