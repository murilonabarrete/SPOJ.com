/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - VOLUME13 - Volume da TV
** 28/05/2016
*/

#include <iostream>

using namespace std;

int main() {
	int i, vol, trocas, xModif;

	cin >> vol >> trocas;

	for (i = 0; i < trocas; i++) {
		cin >> xModif;
		vol += xModif;
		if (vol > 100)
			vol = 100;
		if (vol < 0)
			vol = 0;
	}

	cout << vol << "\n";
}