/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - GUERRA12 - Guerra por Territorio
** 04/06/2016
*/

#include <iostream>

using namespace std;

int main() {
	int i, N, ai[100000], aux[100000];

	cin >> N;

	for (i = 0; i < N; i++)
		cin >> ai[i];
	aux[0] = ai[0];

	for (i = 1; i < N; i++)
		aux[i] = aux[i-1]+ai[i];

	for (i = 0; i < N; i++)
		if (aux[i] == aux[N-1]-aux[i])
			break;

	cout << i+1 << "\n";
}