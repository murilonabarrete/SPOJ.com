/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - CHAMADA1 - Chamada
** 10/04/2016
*/

#include <iostream>

using namespace std;

int main() {
	int i, j, N, K, cont;
	string nomes[101], aux;

	cin >> N >> K;
	for (i = 0; i < N; i++) {
		cin >> nomes[i];
		for (j = i; j > 0; j--) {
			if (nomes[j][0] < nomes[j-1][0]) {
				aux = nomes[j-1];
				nomes[j-1] = nomes[j];
				nomes[j] = aux;
			}
			else if (nomes[j][0] == nomes[j-1][0]) {
				if (nomes[j][1] < nomes[j-1][1]) {
					aux = nomes[j-1];
					nomes[j-1] = nomes[j];
					nomes[j] = aux;
				}
			}
			else
				break;
		}
	}

	cout << nomes[K-1] << "\n";
}