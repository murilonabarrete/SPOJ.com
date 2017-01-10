/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - BATALHA2 - Batalha naval
** 28/04/2016
*/
 
#include <iostream>

using namespace std;

int main() {
	int i, j, N, M, K, L, C, cont = 0, aux1;
	char jogo[102][102];
	bool teste;

	for (i = 0; i <= 101; i++)
		for (j = 0; j <= 101; j++)
			jogo[i][j] = '.';

	cin >> N >> M;
	for (i = 1; i <= N; i++) {
		for (j = 1; j <= M; j++) {
			cin >> jogo[i][j];
			if (jogo[i][j] == '#') {
				if (jogo[i][j+1] != '.') {
					jogo[i][j] = '*';
					jogo[i][j+1] = '*';
				}
				if (jogo[i][j-1] != '.') {
					jogo[i][j] = '*';
					jogo[i][j-1] = '*';
				}
				if (jogo[i+1][j] != '.') {
					jogo[i][j] = '*';
					jogo[i+1][j] = '*';	
				}
				if (jogo[i-1][j] != '.') {
					jogo[i][j] = '*';
					jogo[i-1][j] = '*';	
				}
			}
		}
	}

	cin >> K;

	for (i = 0; i < K; i++) {
		teste = false;
		cin >> L >> C;
		if (jogo[L][C] == '#')
			cont++;
		else if (jogo[L][C] == '*') {
			jogo[L][C] = '$';
			aux1 = C;
			while (jogo[L][++aux1] != '.') {
				if (jogo[L][aux1] == '$')
					teste = true;
				else {
					teste = false;
					break;
				}
			}
			aux1 = C;
			while (jogo[L][--aux1] != '.') {
				if (jogo[L][aux1] == '$')
					teste = true;
				else {
					teste = false;
					break;
				}
			}
			aux1 = C;
			while (jogo[++aux1][C] != '.') {
				if (jogo[aux1][C] == '$')
					teste = true;
				else {
					teste = false;
					break;
				}
			}
			aux1 = C;
			while (jogo[--aux1][C] != '.') {
				if (jogo[aux1][C] == '$')
					teste = true;
				else {
					teste = false;
					break;
				}
			}
			if (teste)
				cont++;
		}
		else
			continue;
	}

	cout << cont << "\n";

	for (i = 1; i <= N; i++) {
		for (j = 1; j <= M; j++)
			cout << jogo[i][j] << " ";
		cout << "\n";
	}
}