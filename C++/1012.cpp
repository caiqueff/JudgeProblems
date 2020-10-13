#include <iostream>

using namespace std;

int main()
{
	double A;
	double B;
	double C;
	double pi = 3.14159;
	double triangulo;
	double retangulo;
	double circulo;
	double trapezio;
	double quadrado;
	
	cin >> A >> B >> C;
	triangulo = (A * C) / 2;
	circulo = pi * C * C;
	trapezio = ((A + B)* C) / 2;
	quadrado = B * B;
	retangulo = A * B;
	
	cout << fixed;
	cout.precision (3);
	cout << "TRIANGULO: " << triangulo << endl;
	cout << "CIRCULO: " << circulo << endl;
	cout << "TRAPEZIO: " << trapezio << endl;
	cout << "QUADRADO: " << quadrado << endl;
	cout << "RETANGULO: " << retangulo << endl;
}