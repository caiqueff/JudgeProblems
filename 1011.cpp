#include <iostream>

using namespace std;

int main()
{
	double raio;
	double pi = 3.14159;
	double volume;
	
	cin >> raio;
	volume = (4/3.0) * pi * (raio * raio * raio);
	cout << fixed;
	cout.precision (3);
	cout << "VOLUME = " << volume << endl;
}