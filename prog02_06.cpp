#include <iostream>
using namespace std;

int main(){
	cout << "DIgite um nro entre 23 e 27: ";
	int n;
	cin >> n;

	if(n >= 23 and n <=27){
		cout << "O nro esta ok." << '\n';
	}
	else {
		cout << "O nro esta fora." << '\n';
	}
	return 0;
}
