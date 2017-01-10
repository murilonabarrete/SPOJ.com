/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - CORRID12 - Corrida
** 04/06/2016
*/

#include <iostream>

using namespace std;

int main() {
	int C, N, resp;

	cin >> C >> N;

	resp = C % N;

	cout << resp << "\n";
}