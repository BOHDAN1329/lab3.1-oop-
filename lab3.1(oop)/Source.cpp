#include "Fraction.h"
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Fraction x, y , k(3,2) , l(1,4), f(k);
	cin >> x; 
	cout << x;
	cin >> y;
	cout << y;
	
	cout << "�������� ���������" << endl;
	cout << "x + y = " << x + y << endl;
	
	cout << "�������� ��������" << endl;
	cout << "x - y = " << x - y << endl;

	cout << "�������� ������" << endl;
	cout << "x / y = " << x / y << endl;

	cout << "�������� � ��������������" << endl;

	cout << "�������� ���������" << endl;
	cout << "l + k = " << l + k << endl;

	cout << "�������� ��������" << endl;
	cout << "l - f = " << l - f << endl;

	cout << "�������� ������" << endl;
	cout << "k / f = " << k / f << endl;


	return 0;
}