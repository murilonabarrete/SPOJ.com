/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - AUTO08 - Auto Estrada
** 25/05/2016
*/

#include <iostream>

using namespace std;

int main() {
	int comp, i, cont = 0;
	char blocos;

	cin >> comp;

	for (i = 0; i < comp; i++) {
		cin >> blocos;
		if (blocos == 'P')
			cont += 2;
		else if (blocos == 'C')
			cont += 2;
		else if (blocos == 'A')
			cont++;
		else
			continue;
	}

	cout << cont << "\n";
}