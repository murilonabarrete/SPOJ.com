/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - CARNA12 - Carnaval
** 02/06/2016
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	double Ni[5], resp;

	cin >> Ni[0] >> Ni[1] >> Ni[2] >> Ni[3] >> Ni[4];

	sort(Ni, Ni+5);

	cout.precision(1);
	resp = Ni[1]+Ni[2]+Ni[3];
	cout << fixed << resp << "\n";
}