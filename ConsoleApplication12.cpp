// ConsoleApplication12.cpp: определ€ет точку входа дл€ консольного приложени€.
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

/*
«аданы три сопротивлении R1, R2, R3 . ¬ычислить значение сопротивлени€ R0 по
формуле: 1/R0 = 1/R1+1/R2+1/R3.
 онтрольный пример: R1=2, R2=4, R3=8 R0 = 1.142857
*/