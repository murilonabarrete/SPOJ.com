/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - FREQUE12 - Frequencia na Aula
** 01/06/2016
*/

#include <iostream>

using namespace std;

int main() {
	int i, N, V, Vi[1000001], cont = 0;

	cin >> N;

	for (i = 0; i < 1000001; i++) 
		Vi[i] = 0;

	for (i = 0; i < N; i++) {
		cin >> V;
		Vi[V]++;
	}

	for (i = 0; i < 1000001; i++)
		if (Vi[i] != 0)
			cont++;

	cout << cont << "\n";
}