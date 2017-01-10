/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - CALCUL11 - Calculadora
** 30/03/2016
*/

#include <iostream>

using namespace std;

int main() {
	int i, N;
	double x[100000], resul;
	char op[100000];

	cin >> N;
	for (i = 0; i < N; i++) {
		cin >> x[i];
		cin >> op[i];
	}
	resul = 1;
	for (i = 0; i < N; i++) {
		if (op[i] == '*')
			resul *= x[i];
		else
			resul /= x[i];
	}
	cout << (int) resul << "\n";

}