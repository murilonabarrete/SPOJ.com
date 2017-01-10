/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - CHUVA11 - Chuva
** 11/04/2016
*/

#include <iostream>

using namespace std;

int main() {
	int i, j, N, mapa1[100000];

	cin >> N;

	for (i = 0; i < N*N*2; i++)
		cin >> mapa1[i];

	for (i = 0; i < N*N; i++)
		mapa1[i] = mapa1[i] + mapa1[(N*N)+i];
	
	j = 0;
	for (i = 0; i < N*N; i++) {
		cout << mapa1[i] << " ";
		j++;
		if (j/N == 1) {
			cout << "\n";
			j = 0;
		}
	}

}