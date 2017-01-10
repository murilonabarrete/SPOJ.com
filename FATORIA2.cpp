/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - FATORIA2 - Fatorial
** 24/03/2016
*/

#include <iostream>

using namespace std;
int Fatorial(int N);

int main() {
	int N;
	cin >> N;
	cout << Fatorial(N) << "\n";
}

int Fatorial(int N) {
	if (N == 0)
		return 1;
	if (N == 1)
		return 1;
	return Fatorial(N-1)*N;
}