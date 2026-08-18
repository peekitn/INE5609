#include <iostream>
using namespace std;

void duplicate(int& a, int& b, int& c){
	a *= 2;
	b *= 2;
	c *= 2;
}
int main(){
	int x = 1, y = 3, z = 7;
	duplicate(x, y, z);
	cout << "X = " << x << ", Y = " << y << ", Z = " << z << '\n';

	return 0;
}
