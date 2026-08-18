#include <iostream>
using namespace std;

int subtracao(int a, int b){
	return a - b;
}
int main(){
	int z = subtracao(7, 2);
	cout << z << '\n';
	cout << subtracao(7, 2) << '\n';

	int x = 5, y = 3;
	cout << subtracao(x, y) << '\n';

	z = 4 + subtracao(x, y);
	cout << z << '\n';

	return 0;
}
