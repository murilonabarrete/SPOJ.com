/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - COLCH12 - Colchao
** 01/06/2016
*/

#include <iostream>

using namespace std;

int main() {
	int A, B, C, H, L;
	bool teste = false;

	cin >> A >> B >> C >> H >> L;

	if ((A <= H && B <= L) ||
		(A <= L && B <= H) ||
		(A <= H && C <= L) ||
		(A <= L && C <= H) ||
		(B <= H && C <= L) ||
		(B <= L && C <= H)) {
		teste = true;
	}

	if (teste)
		cout << "S\n";
	else
		cout << "N\n";

}