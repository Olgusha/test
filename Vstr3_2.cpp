// Vstr3_2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	const float pi = 3.14;
	float  L, S, R;
	
	cout << "Vvedite dlinu okruzhnosti L: ";
	cin >> L;
	R = L / (2 * pi);
	S = pi*R*R;
	cout << "Znachenie S kruga ravno: " << S << "\n";
	return 0;
}

