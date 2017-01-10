/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - COMETA2 - Cometa
** 10/04/2016
*/

#include <iostream>

using namespace std;

int main() {
	int A, ano = 1986;

	cin >> A;

	while (true) {
		if (A < ano) {
			cout << ano;
			break;
		}
		else
			ano += 76;
	}
}