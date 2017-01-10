/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - ROBO13 - Robo
** 27/05/2016
*/

#include <iostream>

using namespace std;

int main() {
	int L, C, Ai, Bi, i, j, mapa[1002][1002];

	cin >> L >> C;
	cin >> Ai >> Bi;

	for (i = 0; i < 1002; i++) {
		for (j = 0; j < 1002; j++) {
			mapa[i][j] = 0;
		}
	}

	for (i = 1; i <= L; i++) {
		for (j = 1; j <= C; j++) {
			cin >> mapa[i][j];
		}
	}

	while (true) {
		if (mapa[Ai+1][Bi] == 1) {
			mapa[Ai][Bi] = 0;
			Ai++;
		}
		else if (mapa[Ai-1][Bi] == 1) {
			mapa[Ai][Bi] = 0;
			Ai--;
		}
		else if (mapa[Ai][Bi+1] == 1) {
			mapa[Ai][Bi] = 0;
			Bi++;
		}
		else if (mapa[Ai][Bi-1] == 1) {
			mapa[Ai][Bi] = 0;
			Bi--;
		}
		else
			break;
	}

	cout << Ai << " " << Bi << "\n";
}