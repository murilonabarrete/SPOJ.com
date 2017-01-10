/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - PESCA11 - O mar não está para peixe
** 11/04/2016
*/

#include <iostream>

using namespace std;

int main() {
	int i, j, k, N, Xi, Xf, Yi, Yf, resulf = 0, resul[100][100];

	cin >> N;

	for (i = 0; i < 100; i++)
		for (j = 0; j < 100; j++)
			resul[i][j] = 0;

	for (k = 0; k < N; k++) {
		cin >> Xi >> Xf >> Yi >> Yf;
		for (i = Xi; i < Xf; i++)
			for (j = Yi; j < Yf; j++)
				resul[i][j] = 1;
	}

	for (i = 0; i < 100; i++)
		for (j = 0; j < 100; j++)
			resulf += resul[i][j];

	cout << resulf;

}