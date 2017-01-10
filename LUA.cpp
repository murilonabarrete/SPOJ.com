/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - LUA - Temperatura Lunar
** 31/03/2016
*/

#include <iostream>

using namespace std;

int main() {
	int i, N = 1, M = 1, aux, ma, me, cont = 1, temperaturas[10000];

	while (N != 0 && M != 0) {
		cin >> N >> M;
		if (N == 0 && M == 0)
			break;

		for (i = 0; i < N; i++)
			cin >> temperaturas[i];

		aux = 0;
		for (i = 0; i < M; i++)
			aux += temperaturas[i];

		ma = aux;
		me = aux;
		for (i = 1; i < N-(M-1); i++) {
			aux = aux-temperaturas[i-1]+temperaturas[i+(M-1)];
			if (aux > ma)
				ma = aux;
			if (aux < me)
				me = aux;
		}

		cout << "Teste " << cont++ << "\n";
		cout << me/M << " " << ma/M;
		cout << "\n\n";
	}

}