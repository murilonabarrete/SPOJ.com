/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - FROTATAX - Frota de Táxi
** 18/04/2016
*/

#include <iostream>

using namespace std;

int main() {
	float A, G, Ra, Rg;

	cin >> A >> G >> Ra >> Rg;

	if ((Rg/Ra) >= (G/A))
		cout << "G";
	else
		cout << "A";

}