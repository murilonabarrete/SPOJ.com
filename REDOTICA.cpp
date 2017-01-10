/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - REDOTICA - Rede ótica
** 14/04/2016
*/

#include <iostream>

using namespace std;

int main() {
	int i, N, M, aux, aux2, X[5000], Y[5000], Z[5000], respX[5000], respY[5000], cont, co = 1;
	bool b;

	N = 1;
	while (N != 0 ) {
		b = false;
		cin >> N >> M;
		if (N == 0)
			break;

		int verif[N+1];
		for (i = 0; i <= N; i++)
			verif[i] = i;

		for (i = 0; i < M; i++) {
			cin >> X[i] >> Y[i] >> Z[i];
			if (X[i] > Y[i]) {
				aux = X[i];
				X[i] = Y[i];
				Y[i] = aux;
			}
		}

		b = false;
		cont = 0;
		while (b == false) {
			aux = 100;
			for (i = 0; i < M; i++)
				if (Z[i] < aux) {
					aux = Z[i];
					aux2 = i;
				}
			respX[cont] = X[aux2];
			respY[cont] = Y[aux2];
			Z[aux2] = 101;
			cont++;
			for (i = 1; i <= N; i++) {
				if (respX[cont-1] == verif[i])
					verif[i] = 0;
				if (respY[cont-1] == verif[i])
					verif[i] = 0;
			}
			for (i = 1; i <= N; i++) {
				if (verif[i] != 0)
					break;
				else
					if (i == N)
						b = true;
					else
						continue;
			}
		}

		for (i = 0; i < cont; i++)
			for (int j = i; j < cont; j++)
				if (respX[j] < respX[i]) {
					aux = respX[j];
					respX[j] = respX[i];
					respX[i] = aux;
					aux = respY[j];
					respY[j] = respY[i];
					respY[i] = aux;
				}
		cout << "Teste " << co++ << "\n";
		for (i = 0; i < cont; i++)
			cout << respX[i] << " " << respY[i] << "\n";
		cout << "\n";


	}



}