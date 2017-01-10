/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - PEDAGIO1 - Pedágio
** 04/04/2016
*/

#include <iostream>

using namespace std;

int main() {
	int L, D, K, P, npedagios, valor;

	cin >> L >> D;
	cin >> K >> P;

	npedagios = L/D;
	valor = (L*K)+(npedagios*P);

	cout << valor << "\n";

}