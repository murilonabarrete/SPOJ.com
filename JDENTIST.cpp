 /*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - JDENTIST - Dentista
** 24/04/2016
*/

#include <iostream>

using namespace std;

int main() {
	int i, j, cont, N, aux1, aux2, final, entrada[10000], saida[10000];

	cin >> N;
	cin >> entrada[0] >> saida[0];
	for (i = 1; i < N; i++) {
		cin >> entrada[i] >> saida[i];
		aux2 = i;
		for (j = i-1; j >= 0; j--) {
			if (saida[j] > saida[aux2]) {
				aux1 = saida[j];
				saida[j] = saida[aux2];
				saida[aux2] = aux1;
				aux1 = entrada[j];
				entrada[j] = entrada[aux2];
				entrada[aux2] = aux1;
				aux2--;
			}
		}
	}

	final = 0;
	cont = 0;
	for (i = 0; i < N; i++)
		if (entrada[i] >= final) {
			cont++;
			final = saida[i];
		}


	cout << cont << "\n";
}