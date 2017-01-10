/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - TRANSP11 - Transporte
** 11/04/2016
*/

#include <iostream>

using namespace std;

int main() {
	int i, A, B, C, X, Y, Z, resp;

	cin >> A >> B >> C;
	cin >> X >> Y >> Z;

	resp = (X/A)*(Y/B)*(Z/C);

	cout << resp;
}