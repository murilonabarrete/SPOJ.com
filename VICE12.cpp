/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - VICE12 - Vice-campeao
** 04/06/2016
*/

#include <iostream>

using namespace std;

int main() {
	int A, B, C;

	cin >> A >> B >> C;

	if (A > B && A > C) {
		if (B > C)
			cout << B << "\n";
		else
			cout << C << "\n";
	}
	else if (B > A && B > C) {
		if (A > C)
			cout << A << "\n";
		else
			cout << C << "\n";
	}
	else {
		if (A > B)
			cout << A << "\n";
		else
			cout << B << "\n";
	}
}