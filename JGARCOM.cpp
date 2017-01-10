/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - JGARCOM - Garçom
** 18/04/2016
*/

#include <iostream>

using namespace std;

int main() {
	int N, L, C, resul = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> L >> C;
		if (L > C)
			resul += C;
	}

	cout << resul;

}