/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - ALBUM12 - Album de Fotos
** 02/06/2016
*/

#include <iostream>

using namespace std;

int main() {
	int X, Y, L1, H1, L2, H2;

	cin >> X >> Y >> L1 >> H1 >> L2 >> H2;

	if (((X >= L1+L2) && (Y >= H1 && Y >= H2)) || ((X >= L1+H2) && (Y >= H1 && Y >= L2)) || ((X >= H1+L2) && (Y >= L1 && Y >= H2)) || ((X >= H1+H2) && (Y >= L1 && Y >= L2)) ||
	    ((Y >= L1+L2) && (X >= H1 && X >= H2)) || ((Y >= L1+H2) && (X >= H1 && X >= L2)) || ((Y >= H1+L2) && (X >= L1 && X >= H2)) || ((Y >= H1+H2) && (X >= L1 && X >= L2)))
		cout << "S\n";
	else
		cout << "N\n";
}