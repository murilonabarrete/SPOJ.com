/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - COSTA12 - Costa
** 04/06/2016
*/

#include <iostream>

using namespace std;

int main() {
	int i, j, M, N, cont = 0;
	char mapa[1002][1002];

	cin >> M >> N;

	for (i = 0; i <= 1001; i++)
		for (j = 0; j <= 1001; j++)
			mapa[i][j] = '.';

	for (i = 1; i <= M; i++)
		for (j = 1; j <= N; j++)
			cin >> mapa[i][j];

	for (i = 1; i <= M; i++) {
		for (j = 1; j <= N; j++) {
			if (mapa[i][j] == '#') {
				if (mapa[i][j+1] == '.')
					cont++;
				else if (mapa[i][j-1] == '.')
					cont++;
				else if (mapa[i+1][j] == '.')
					cont++;
				else if (mapa[i-1][j] == '.')
					cont++;
				else
					continue;
			}
		}
	}
	cout << cont << "\n";	
}