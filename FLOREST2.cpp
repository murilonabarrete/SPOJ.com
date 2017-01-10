/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - FLOREST2 - Floresta
** 01/05/2016
*/
 
#include <iostream>

using namespace std;

int main() {
	int i, N, cont = 0;

	cin >> N;

	for (i = 2; (2*i*i)-(2*i)+1 <= N; i++)
		if ((N+i-1)%(2*i-1) == 0)
			cont++;

	cout << cont << "\n";
}