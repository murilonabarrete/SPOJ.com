/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - DIST13 - Distancia de Manhattan
** 28/05/2016
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	int Xm, Ym, Xr, Yr, resp;

	cin >> Xm >> Ym >> Xr >> Yr;

	resp = abs(Xm-Xr) + abs(Ym-Yr);

	cout << resp << "\n";
}