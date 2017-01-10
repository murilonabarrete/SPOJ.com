/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - VIVO - Vivo ou Morto
** 28/03/2016
*/

#include <iostream>

using namespace std;

int main() {
	int i, j, P, R, x[100], y[100], resp[100000], Paux, coman, aux, cont, cont2;

	do {
		cin >> P;
		cont = P;
		cin >> R;
		if (P == 0 && R == 0)
			break;

		for (i = 0; i < P; i++)
			cin >> x[i];

		for (int k = 0; k < R; k++) {
			cin >> Paux;
			cin >> coman;
			for (i = 0; i < Paux; i++) {
				cin >> aux;
				if (aux != coman) {
					x[i] = 0;
					P--;
				}
			}

			j = 0;
			for (i = 0; i < Paux; i++) {
				if (x[i] != 0) {
					y[j] = x[i];
					j++;
				}
			}
			for (i = 0; i < P; i++)
				x[i] = y[i];
		}

		resp[cont2] = x[0];
		cont2++;
	} while (P != 0 || R != 0);

	for (i = 0; i < cont2; i++)
		cout << "Teste " << i+1 << "\n" << resp[i] << "\n\n";

}