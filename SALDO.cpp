/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - SALDO - Saldo de gols
** 31/03/2016
*/

#include <iostream>

using namespace std;

int main() {
	int i, n, melhor, partida1, partida2, teste = 1, golspro[10000], golscontra[10000];

	cin >> n;
	while (n > 0) {
		for (i = 0; i < n; i++)
			cin >> golspro[i] >> golscontra[i];

		melhor = 0;
		partida1 = -1;
		partida2 = -1;
		for (i = 0; i < n; i++) {
			if ((golspro[i] - golscontra[i]) <= 0)
				continue;
			else {
				partida1 = i+1;

			}
		}
		for (i = n-1; i > 0; i--) {
			if ((golspro[i] - golscontra[i]) <= 0)
				continue;
			else {
				partida2 = i+1;

			}
		}

		cout << "Teste " << teste++ << "\n";
		if (partida2 > 0 && partida1 > 0)
			cout << partida2 << " " << partida1 << "\n\n";
		else
			cout << "nenhum\n\n";


		cin >> n;
	}


}