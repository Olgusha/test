// Vstr3_2.cpp: определ€ет точку входа дл€ консольного приложени€.
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

/*
ѕо заданной длине окружности найти площадь круга по формуле S = pi*R2, радиус
вычислить из формулы длины окружности: L=2*pi *R
ѕримечание pi = 3.14
*/