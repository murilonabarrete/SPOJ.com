/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - POLIGO13 - Poligono
** 28/05/2016
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int i, N, lPol[100000], resp = 0, aux = 0;

	cin >> N;

	for (i = 0; i < N; i++)
		cin >> lPol[i];
	sort (lPol, lPol+N);

	for (i = 0; i < N; i++) {
		if (lPol[i] < aux)
			resp = i+1;
		aux += lPol[i];
	}

	cout << resp << "\n";
}