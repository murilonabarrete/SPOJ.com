/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - ELEVADO2 - Elevador
** 10/04/2016
*/

#include <iostream>

using namespace std;

int main() {
	int i, N, C, saindo, entrando, aux;
	char resp = 'N';

	cin >> N >> C;
	for (i = 0; i < N; i++) {
		cin >> saindo >> entrando;
		C += saindo;
		C -= entrando;
		if (C < 0)
			resp = 'S';
	}
	cout << resp;
}