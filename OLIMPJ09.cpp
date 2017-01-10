/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - OLIMPJ09 - Olimpiadas
** 24/05/2016
*/

#include <iostream>

using namespace std;

int main() {
	int nPaises, mModal, ouro, prata, bronze, medalhas[100], i, j, aux;

	cin >> nPaises >> mModal;

	medalhas[0] = -10;
	for (i = 1; i <= 100; i++)
		medalhas[i] = 0;

	for (i = 0; i < mModal; i++) {
		cin >> ouro >> prata >> bronze;
		medalhas[ouro]++;
		medalhas[prata]++;
		medalhas[bronze]++;
	}

	for (i = 1; i <= nPaises; i++) {
		aux = 0;
		for (j = 1; j <= nPaises; j++) {
			if (medalhas[j] > medalhas[aux]) {
				aux = j;
			}
		}
		medalhas[aux] = -1;
		cout << aux << " ";
	}
	cout << "\n";

}