#include <iostream>
using namespace std;

int main(){
	int n_tipos;
	cin >> n_tipos;

	int menor_quantidade = 1000000;

	for(int i = 0; i < n_tipos; i++){
		int quantidade_atual;
		cin >> quantidade_atual;

		if(quantidade_atual < menor_quantidade){
			menor_quantidade = quantidade_atual;
	}
}
	cout << menor_quantidade << '\n';

	return 0;
}
