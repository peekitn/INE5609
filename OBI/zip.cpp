#include <iostream>
using namespace std;

int calcula_pontuacao(int carta1, int carta2){
	if (carta1 == carta2){
		return 2 * (carta1 + carta2);
	}else if (carta1 + 1 == carta2 || carta2 + 1 == carta1){
		return 3 * (carta1 + carta2);
	}else{
		return carta1 + carta2;
	}
}
int main(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	int pontuacao_lia = calcula_pontuacao(a, b);
	int pontuacao_carolina = calcula_pontuacao(c, d);

	if (pontuacao_lia > pontuacao_carolina){
		cout << "Lia\n";
	} else if (pontuacao_carolina > pontuacao_lia){
		cout << "Carolina\n";
	} else{
		cout << "empate\n";
	}

	return 0;
}
