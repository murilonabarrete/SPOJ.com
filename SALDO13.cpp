/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - SALDO13 - Saldo do Vovô
** 26/05/2016
*/

#include <iostream>

using namespace std;

int main() {
	int n, dias, i, menor, mov;

	cin >> dias >> n;

	menor = 1000000;
	for (i = 0; i < dias; i++) {
		cin >> mov;
		n += mov;
		if (n < menor)
			menor = n;
	}

	cout << menor << "\n";
}