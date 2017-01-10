/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - TELESCO2 - Telescópio
** 11/04/2016
*/

#include <iostream>

using namespace std;

int main() {
	int i, A, N, F[10000], resp = 0;

	cin >> A >> N;

	for (i = 0; i < N; i++)
		cin >> F[i];

	for (i = 0; i < N; i++) {
		if ((F[i]*A) >= 40000000)
			resp++;
	}

	cout << resp;

}