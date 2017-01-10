/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - OVERF09 - Overflow
** 11/04/2016
*/

#include <iostream>

using namespace std;

int main() {
	int N, P, Q;
	char C;

	cin >> N;
	cin >> P >> C >> Q;

	if (C == '+')
		P += Q;
	else
		P *= Q;

	if (P <= N)
		cout << "OK";
	else
		cout << "OVERFLOW";


}