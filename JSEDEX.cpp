/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - JSEDEX - Sedex
** 18/04/2016
*/

#include <iostream>

using namespace std;

int main() {
	int N, A, L, P;

	cin >> N >> A >> L >> P;

	if (N <= A && N <= L && N <= P)
		cout << "S";
	else
		cout << "N";

}