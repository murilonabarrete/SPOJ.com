/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - PUSAPO11 - Pulo do sapo
** 11/04/2016
*/

#include <iostream>

using namespace std;

int main() {
	int i, j, Npedras, Msapos, Pos, Dist, Pedras[100];

	cin >> Npedras >> Msapos;
	for (i = 0; i < 100; i++)
		Pedras[i] = 0;

	for (i = 0; i < Msapos; i++) {
		cin >> Pos >> Dist;
		Pos--;
		j = Pos%Dist;
		for (j = (Pos%Dist); j < Npedras; j += Dist)
			Pedras[j] = 1;
	}

	for (i = 0; i < Npedras; i++)
		cout << Pedras[i] << "\n";
}