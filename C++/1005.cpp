#include <iostream>

using namespace std;

int main()
{
	double A;
	double B;
	double MEDIA;
	cin >> A;
	cin >> B;
	MEDIA = ((A * 3.5) + (B * 7.5)) / 11;
	cout << fixed;
	cout.precision(5);
	cout << "MEDIA = " << MEDIA << endl; 
}