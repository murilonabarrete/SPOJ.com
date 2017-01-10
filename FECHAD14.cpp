/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - FECHAD14 - Fechadura
** 05/06/2016
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int i, N, M, alt[1000], auxAlt = 0, aux;

	cin >> N >> M;

	for (i = 0; i < N; i++)
		cin >> alt[i];

	for (i = 0; i < N-1; i++) {
		aux = M-alt[i];
		alt[i] += aux;
		alt[i+1] += aux;
		auxAlt += abs(aux);
	}

	cout << auxAlt << "\n";
}