/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - CORRID11 - Corrida
** 02/05/2016
*/
 
#include <iostream>
#include <limits.h>

using namespace std;

int main() {
	int i, j, Ncomp, Mvoltas, aux, maisRap, melhortempo = INT_MAX, tempos[100][100];

	cin >> Ncomp >> Mvoltas;

	for (i = 0; i < Ncomp; i++)	{
		for (j = 0; j < Mvoltas; j++)
			cin >> tempos[i][j];

		aux = 0;
		for (j = 0; j < Mvoltas; j++)
			aux += tempos[i][j];

		if (melhortempo > aux) {
			melhortempo = aux;
			maisRap = i+1;
		}
	}

	if (Ncomp != 0)
		cout << maisRap << "\n";
}