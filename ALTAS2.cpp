/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - ALTAS2 - Altas aventuras
** 30/04/2016
*/
 
#include <iostream>

using namespace std;

int main() {
	int i, N, K, cont = 0, testes;

	cin >> N >> K;

	while (true) {
		testes = N/2;
		if (N-testes >= 7)
			cont++;
		cont++;
		if (N%2 == 0)
			N = testes;
		else
			N = testes+1;
		if (N <= 3) {
			cont += 2;
			break;
		}
	}

	cout << cont << "\n";

}