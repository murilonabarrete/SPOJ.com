/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - QUADRA13 - Quadradinho de 8
** 30/05/2016
*/

#include <iostream>

using namespace std;

int main() {
	int i, N, numN,  c = 8, aux = 0;
	long long ordem[8], resp = 0;

	cin >> N;

	for (i = 0; i < 8; i++)
		ordem[i] = 0;
	ordem[0]++;

	for (i = 0; i < N; i++) {
		cin >> numN;
		aux = (aux+numN)%c;
		ordem[aux]++;
	}

	for (i = 0; i < c; i++)
		resp += ordem[i]*(ordem[i]-1)/2;

	cout << resp << "\n";
}