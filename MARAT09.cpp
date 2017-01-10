/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - MARAT09 - Maratona
** 19/05/2016
*/

#include <iostream>

using namespace std;

int main() {
	int nPostos, distInterm, posto1, posto2, i;
	bool teste = true;

	cin  >> nPostos >> distInterm >> posto1;

	for (i = 1; i < nPostos; i++) {
		cin >> posto2;
		if (posto2-posto1 > distInterm)
			teste = false;
		posto1 = posto2;
	}
	if (42195-posto2 > distInterm)
			teste = false;

	if (teste)
		cout << "S\n";
	else
		cout << "N\n";
}