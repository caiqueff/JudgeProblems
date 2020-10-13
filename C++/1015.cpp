#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x1;
	double x2;
	double y1;
	double y2;
	double dist;
	
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	
	dist = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
	
	cout << fixed;
	cout.precision (4);
	
	cout << dist << endl;
}