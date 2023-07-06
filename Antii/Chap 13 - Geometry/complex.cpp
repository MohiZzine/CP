#include <bits/stdc++.h>

using namespace std;

typedef long double C;

typedef complex<C> P;

#define X real()
#define Y imag()

int main() {
//	P u = {4, 2};
//	P v = {3, 1};
//	P s = u + v;
//	cout << s.X << " " << s.Y << "\n";
//	P a = {4, 2};
//	P b = {3, -1};
//	printf("The distance between a and b is: %f\n", abs(b - a));
//	printf("The angle of complex number u is: %f\n", arg(u));

	P v = {4, 2};
	cout << arg(v) <<endl;
	
	P w = polar(1.0, 0.5);
	cout << abs(w) << " " << arg(w) << endl;
	return 0;
}