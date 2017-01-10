/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - ESCADA14 - Matriz Escada
** 05/06/2016
*/

#include <iostream>

using namespace std;

int main() {
	int i, j, N, M, aux1 = -1, aux2, matriz[500][500];
	bool teste = true;

	cin >> N >> M;

	for (i = 0; i < N; i++)
		for (j = 0; j < M; j++)
			cin >> matriz[i][j];

	for (i = 0; i < N; i++) {
		aux2 = M;
		for (j = 0; j < M; j++) {
			if (matriz[i][j] != 0) {
				if (j <= aux1)
					teste = false;
				if (aux2 == M)
					aux2 = j;
			}
		}
		aux1 = aux2;
	}

	if (teste)
		cout << "S\n";
	else
		cout << "N\n";
}