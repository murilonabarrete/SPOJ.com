/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - MINADO2 - Campo minado
** 02/05/2016
*/
 
#include <iostream>

using namespace std;

int main() {
	int i, N, campo[100], minas[100];

	cin >> N;

	for (i = 0; i < N; i++) {
		cin >> campo[i];
	}

	for (i = 0; i < N; i++) {
		if (i == 0) {
			minas[i] = campo[i] + campo[i+1];
		}
		else if (i == N-1) {
			minas[i] = campo[i-1] + campo[i];
		}
		else {
			minas[i] = campo[i-1] + campo[i] + campo[i+1];
		}
	}

	for (i = 0; i < N; i++)
		cout << minas[i] << "\n";
}