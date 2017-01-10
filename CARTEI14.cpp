/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - CARTEI14 - Carteiro
** 05/06/2016
*/

#include <iostream>
#include <cstdlib>
#include <map>

using namespace std;
map <int, int> endereco;

int main() {
	int i, N, M, auxEnd, aux1 = 0, aux2 = 0, aux3 = 0, resp = 0;

	cin >> N >> M;

	for (i = 0; i < N; i++) {
		cin >> auxEnd;
		endereco[auxEnd] = i;
	}

	for (i = 0; i < M; i++) {
		cin >> auxEnd;
		aux1 = endereco[auxEnd];
		aux3 = aux2-aux1;
		resp += abs(aux3);
		aux2 = aux1;
	}

	cout << resp << "\n";
}