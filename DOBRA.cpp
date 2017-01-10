/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - DOBRA - Dobradura
** 16/04/2016
*/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int i, N = 0, resul, cont = 1;

	while (N != -1) {
		cin >> N;
		if (N == -1)
			break;

		resul = (pow(2,N)+1)*(pow(2,N)+1);

		cout << "Teste " << cont++ << "\n";
		cout << resul << "\n\n";
	}
}