/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - AERO - Aeroporto
** 31/03/2016
*/

#include <iostream>

using namespace std;

int main() {
	int i, j, A = 1, V = 1, voos[20000], aerops[100], cont = 1, resuls[10000], maior;

	while (A != 0 && V != 0) {
		cin >> A >> V;
		if (A == 0 && V == 0)
			break;

		for (i = 0; i < V; i++)
			cin >> voos[i] >> voos[i+V];

		for (i = 0; i < A; i++)
			aerops[i] = 0;

		for (i = 0; i < A; i++)
			for (j = 0; j < V*2; j++)
				if (voos[j] == i+1)
					aerops[i]++;

		maior = -1;
		for (i = 0; i < A; i++)
			if (aerops[i] > maior) {
				maior = aerops[i];
				resuls[0] = i + 1;
			}

		cout << "Teste " << cont++ << "\n";
		for (i = 0; i < A; i++)
			if (aerops[i] == maior)
				cout << i+1 << " ";
		cout << "\n\n";
	}

}
