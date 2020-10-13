#include <iostream>

using namespace std;

int main()
{
	int func;
	double salario;
	double hora;
	
	cin >> func;
	cin >> salario;
	cin >> hora;
	salario = salario * hora;
	cout << fixed;
	cout.precision (2);
	
	cout << "NUMBER = " << func << endl;
	cout << "SALARY = U$ " << salario << endl;	
}