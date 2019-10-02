#include <iostream>

using namespace std;

int main()
{
	string nome;
	double salario;
	double bonus = 0.15;
	double vendas;
	double total;
	
	cin >> nome;
	cin >> salario;
	cin >> vendas;
	total = (salario + (vendas * bonus));
	cout << fixed;
	cout.precision(2);
	cout << "TOTAL = R$ " << total << endl; 
}