/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - CONTA1 - Conta de agua
** 31/03/2016
*/

#include <iostream>

using namespace std;

int main() {
	int N, resul;

	cin >> N;

	if (N <= 10)
		resul = 7;
	else if (N > 10 && N <= 30)
		resul = 7+(N-10);
	else if (N > 30 && N <= 100)
		resul = 7+20+((N-30)*2);
	else
		resul = 7+20+140+((N-100)*5);

	cout << resul << "\n";
}