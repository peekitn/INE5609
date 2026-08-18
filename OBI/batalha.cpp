#include <iostream>
using namespace std;

int main(){
	int A1, D1, A2, D2;
	cin >> A1 >> D1 >> A2 >> D2;

	if(D1 == A2 and D2 != A1){
		cout << 1 << '\n';
	}
	else if(D2 == A1 and D1 != A2){
		cout << 2 << '\n';
	}
	else {
		cout << -1 << '\n';
	}
	return 0;
}
