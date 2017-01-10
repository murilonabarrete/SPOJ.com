/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - GINCAN11 - Gincana
** 11/04/2016
	INCOMPLETO! NAO FUNCIONA!
*/

#include <iostream>

using namespace std;

int main() {
	int i, j, N, M, amiz1[10000], amiz2[10000], resul[10000][10000];

	cin >> N >> M;

	for (i = 0; i < M; i++)
		cin >> amiz1[i] >> amiz2[i];

	for (i = 0; i < 10000; i++)
		for (j = 0; j < 10000; j++)
			resul[i][j] = 0;

	resul[0][0] = amiz1[0];
	resul[1][0] = amiz2[0];
	x = 0;
	y = 0;
	for (i = 0; i < M; i++) {
		for (j = 0; j < M; j++) {
			if (amiz1[i] == amiz2[j]) {
				resul[x][y] = amiz
			}


		}


	}

}