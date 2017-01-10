/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - CAPITA13 - Capital
** 27/05/2016
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int i, lados[4];
	bool teste = false;

	for (i = 0; i < 4; i++)
		cin >> lados[i];
	sort(lados, lados+4);
	
	if (lados[0]*lados[3] == lados[1]*lados[2])
		teste = true;

	while (next_permutation(lados, lados+4)) {
		if (lados[0]*lados[3] == lados[1]*lados[2]) {
			teste = true;
			break;
		}
	} 

	if (teste)
		cout << 'S' << "\n";
	else
		cout << 'N' << "\n";
}