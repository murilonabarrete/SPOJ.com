/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - CONSEC12 - Consecutivos
** 02/06/2016
*/

#include <iostream>

using namespace std;

int main() {
	int i, j, N, Vi[100001], maior = 0;

	cin >> N;

	for (i = 0; i < N; i++)
		cin >> Vi[i];

	for (i = 0; i < N; i++) {
		for (j = i; j < N&& Vi[i] == Vi[j]; j++) {
			if ((j-i) > maior)
				maior = (j-i);
		}
	}

	cout << ++maior << "\n";
}