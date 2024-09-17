#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a, z1, z2; //вхідний параметр і результати обчислень
	cout << "a = "; cin >> a;
	z1 = 1 - (sin(2 * a) * sin(2 * a) / 4) + cos(2 * a);
	z2 = cos(a) * cos(a) + cos(a) * cos(a) * cos(a) * cos(a);

	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	cin.get();
	return 0;
}