#include <iostream>

using namespace std;

int main()
{
	double distancia;
	double gasosa;
	double total;
	
	cin >> distancia;
	cin >> gasosa;
	
	total = distancia / gasosa;
	cout << fixed;
	cout.precision(3);
	cout << total << " km/l" << endl;
}