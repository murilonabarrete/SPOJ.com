/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - FLIPERAM - Fliperama
** 31/03/2016
*/

#include <iostream>

using namespace std;

int main() {
	int N, M, i, j, maior, aux, cont = 0, valores[10000], resul[500];

	cin >> N >> M;
	for (i = 0; i < N; i++)
		cin >> valores[i];

	for (i = 0; i < M; i++) {
		maior = 0;
		for (j = 0; j < N; j++) {
			if (valores[j] >= maior) {
				maior = valores[j];
				aux = j;
			}
		}
		valores[aux] = 0;
		resul[cont] = maior;
		cont++;
	}

	for (i = 0; i < M; i++)
		cout << resul[i] << "\n";


}