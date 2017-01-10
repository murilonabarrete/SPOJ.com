 /*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - DANCA1 - Dança
** 27/04/2016
*/

#include <iostream>

using namespace std;
bool verifica();

int main() {
	int i, nToras, nIndios, toraIni[1000], sentido[1000], batidas = 0;
	bool teste1 = true, teste2;

	cin >> nToras >> nIndios;

	for (i = 0; i < nIndios; i++)
		cin >> toraIni[i] >> sentido[i];

	if (nIndios == 1) {
		batidas = nToras;
		teste1 = false;
	}

	while (teste) {
		for (i = 0; i < nIndios; i++) {

		}

	}

	

	cout << batidas << "\n";
}

bool verifica() {
	for (int i = 0; i < nToras; i++)
		if (o vetor atual de toras for diferente do vetor inicial de toras)
			// if (vetoratual[i] == vetorIni[i] || (vetoratual[i] + vetorIni[i] = 0))
			return (false);
	return (true);
}