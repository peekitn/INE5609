#include <iostream>
using namespace std;

int main(){
	int num_cm;
	cin >> num_cm;

	int pedacos = 1;

	while(num_cm >= 2){
		num_cm = num_cm / 2;
		pedacos = pedacos * 4;
	}
	cout << pedacos << '\n';
		
	return 0;	
}
