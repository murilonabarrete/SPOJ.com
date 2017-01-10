 /*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - DESCULPA - Pedido de Desculpas
** 25/04/2016
*/

#include <iostream>

using namespace std;

int main() {
	int i, j, comp, nFrases, nCarac[50], nDescu[50], aux1, aux2, cont = 1;

	while (true) {
		cin >> comp >> nFrases;
		if (comp == 0 && nFrases == 0)
			break;
		cin >> nCarac[0] >> nDescu[0];
		for (i = 1; i < nFrases; i++) {
			cin >> nCarac[i] >> nDescu[i];
			aux2 = i;
			for (j = i-1; j >= 0; j--) {
				if (nDescu[j] < nDescu[aux2]) {
					aux1 = nDescu[j];
					nDescu[j] = nDescu[aux2];
					nDescu[aux2] = aux1;
					aux1 = nCarac[j];
					nCarac[j] = nCarac[aux2];
					nCarac[aux2] = aux1;
					aux2--;
				}
			}
		}

		aux1 = 0;
		for (i = 0; i < nFrases; i++)
			if (nCarac[i] <= comp) {
				comp -= nCarac[i];
				aux1 += nDescu[i];
			}

		cout << "Teste " << cont++ << "\n";
		cout << aux1 << "\n\n";
	}
	
}