#include <iostream>

using namespace std;

int main()
{
	double A;
	double pi = 3.14159;
	double raio;
	
	cin >> raio;
	A = pi * raio*raio;
	
	cout << fixed;
	cout.precision(4);
	cout << "A=" << A << endl;
}