// Vstr3_3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	
	int  v, t, a;
	float S;
	cout << "Vvedite skorost' v: ";
	cin >> v;
	cout << "Vvedite vremya t: ";
	cin >> t;
	cout << "Vvedite uskorenie a: ";
	cin >> a;
	S = v*t + ((a*t*t) / 2);
	cout << "Znachenie rasstoyaniya S ravno: " << S << "\n";
	return 0;
}

//Вычислить пройденное расстояние при прямолинейном равноускоренном движении
//по формуле S = v*t + (a*t2) / 2, где v – скорость, t – время, а – ускорение.