 /*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - FUSOES1 - Fusoes
** 27/04/2016
*/

#include <iostream>

using namespace std;

int main() {
	int Nbancos, Kope, i, cont = 0, opera1, opera2;
	char op;

	cin >> Nbancos >> Kope;

	int bancos[Nbancos+1];
	char saida[Kope];

	for (i = 0; i <= Nbancos; i++)
		bancos[i] = i;

	for (i = 0; i < Kope; i++) {
		cin >> op;
		if (op == 'C') {
			cin >> opera1 >> opera2;
			if (bancos[opera1] == opera2 || bancos[opera2] == opera1)
				saida[cont] = 'S';
			else
				saida[cont] = 'N';
			cont++;
		}
		else {
			cin >> opera1 >> opera2;
			bancos[opera1] = opera1;
			bancos[opera2] = opera1;
		}
	}

	for (i = 0; i < cont; i++)
		cout << saida[i] << "\n";
	cout << "\n";

}