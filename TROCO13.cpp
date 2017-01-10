/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - TROCO13 - Troco
** 30/05/2016
*/

#include <iostream>

using namespace std;

int main() {
	int i, j, Valor, M, auxM;
	bool possibi[100000];

    cin >> Valor >> M;

    possibi[0] = true;
    for (i = 1; i <= Valor; i++) 
    	possibi[i] = false;

    for (i = 0; i < M; i++) {
        cin >> auxM;
        for (j = Valor; j >= auxM; j--)
            if (possibi[j-auxM]) 
            	possibi[j] = true;
    }

    if (possibi[Valor]) 
    	cout << "S\n";
    else 
    	cout << "N\n";
}