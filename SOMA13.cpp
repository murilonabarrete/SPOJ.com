/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - SOMA13 - Soma de Fracoes
** 28/05/2016
*/

#include <iostream>

using namespace std;

int main() {
	int i, a, b, c, d, dividendo, divisor, mDiv = 1;

	cin >> a >> b >> c >> d;

	dividendo = (a*d)+(b*c);
	divisor = b*d;

	for (i = 1; i <= divisor; i++)
		if (dividendo%i == 0 && divisor%i == 0)
			mDiv = i;
	dividendo /= mDiv;
	divisor /= mDiv;

	cout << dividendo << " " << divisor << "\n";
}