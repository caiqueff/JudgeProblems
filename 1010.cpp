#include <iostream>

using namespace std;

int main()
{
	int cod1;
	int num1;
	double valor1;
	int cod2;
	int num2;
	double valor2;
	double total;
	
	cin >> cod1 >> num1 >> valor1;
	cin >> cod2 >> num2 >> valor2;
	total = ((num1*valor1)+(num2*valor2));
	cout << fixed;
	cout.precision(2);
	cout << "VALOR A PAGAR: R$ " << total << endl;
}