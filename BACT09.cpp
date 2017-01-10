 /*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - BACT09 - Bactérias
** 24/04/2016
*/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int i, N, D, C, final;
	double aux, resul = 0.0;

	cin >> N;
	for (i = 0; i < N; i++) {
		cin >> D >> C;
		aux = (double)C*log(D);
		if (aux > resul) {
			resul = aux;
			final = i;
		}
	}

	cout << final << "\n";
}