/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - PACMAN14 - PacMan
** 05/06/2016
*/

#include <iostream>

using namespace std;

int main() {
	int i, j, N, cont = 0, maior = 0;
	char mapa[100][100];

	cin >> N;

	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			cin >> mapa[i][j];

	for (i = 0; i < N; i++) {
		if (i%2 == 0) {
			for (j = 0; j < N; j++) {
				if (mapa[i][j] == '.') {
					continue;
					if (i == N-1 && j == N-1)
						if (cont > maior)
							maior = cont;
				}
				else if (mapa[i][j] == 'o') {
					cont++;
					if (i == N-1 && j == N-1)
						if (cont > maior)
							maior = cont;
				}
				else {
					if (cont > maior)
						maior = cont;
					cont = 0;
				}
			}
		}
		else {
			for (j = N-1; j >= 0; j--) {
				if (mapa[i][j] == '.') {
					continue;
					if (i == N-1 && j == 0)
						if (cont > maior)
							maior = cont;
				}
				else if (mapa[i][j] == 'o') {
					cont++;
					if (i == N-1 && j == 0)
						if (cont > maior)
							maior = cont;
				}
				else {
					if (cont > maior)
						maior = cont;
					cont = 0;
				}
			}	
		}
	}

	cout << maior << "\n";
}