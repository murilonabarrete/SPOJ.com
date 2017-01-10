/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - VENDE13 - Vende-se
** 27/05/2016
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int i, Npossui, Kvende, Xi[100000], dMin = 1000000, aux;

	cin >> Npossui >> Kvende;

	for (i = 0; i < Npossui; i++)
		cin >> Xi[i];

	sort (Xi, Xi+Npossui);

	for (i = 0; i < Npossui; i++) {
		aux = i+(Npossui-Kvende)-1;
		if (aux < Npossui)
			if (Xi[aux]-Xi[i] < dMin)
				dMin = Xi[aux]-Xi[i];
	}

	cout << dMin << "\n";
}