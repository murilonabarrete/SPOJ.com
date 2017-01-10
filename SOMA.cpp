/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - SOMA - Soma
** 24/03/2016
*/

#include <iostream>

using namespace std;

int main() {
	int N, X[50], Y = 0;

	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> X[i];

	for (int i = 0; i < N; i++)
		Y += X[i];

	cout << Y << "\n";
}