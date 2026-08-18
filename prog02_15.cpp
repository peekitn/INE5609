#include <iostream>
using namespace std;

void impar(int x);
void par(int x);

int main(){
	int i;
	do{
		cout << "Entre um numero(0 para sair): " << '\n';
		cin >> i;
		impar(i);
	}while(i != 0);
	return 0;
}
void impar(int x){
	if ((x % 2)!= 0) cout << "O numero eh impar." << '\n';
	else par (x);
}
void par(int x){
	cout << "O numero eh par" << '\n';
}
