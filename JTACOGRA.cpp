/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - JTACOGRA - Tacógrafo
** 04/04/2016
*/

#include <iostream>

using namespace std;

int main() {
	int i, N, T, V, dfinal = 0;

	cin >> N;

	for (i = 0; i < N; i++) {
		cin >> T >> V;
		dfinal += T*V;
	}

	cout << dfinal << "\n";

}