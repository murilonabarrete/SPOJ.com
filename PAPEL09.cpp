/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - PAPEL09 - Aviões de papel
** 11/04/2016
*/

#include <iostream>

using namespace std;

int main() {
	int Comp, folhasP, folhasF;

	cin >> Comp >> folhasP >> folhasF;

	if (folhasP >= Comp*folhasF)
		cout << "S";
	else
		cout << "N";

}