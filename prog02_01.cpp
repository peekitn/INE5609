// Inicializacao de variaveis

#include <iostream>
using namespace std;

int main () {
    int a = 5;
    int b(3);
    int c{2};
    int res;

    a = a + b;
    res = a - c;	
    cout << res << endl;

    return 0;
}
