// Vstr3_3.cpp: ���������� ����� ����� ��� ����������� ����������.
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

//��������� ���������� ���������� ��� ������������� ��������������� ��������
//�� ������� S = v*t + (a*t2) / 2, ��� v � ��������, t � �����, � � ���������.