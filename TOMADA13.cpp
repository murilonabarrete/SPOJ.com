/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - TOMADA13 - Tomadas
** 27/05/2016
*/

#include <iostream>

using namespace std;

int main() {
	int T1, T2, T3, T4, resp;

	cin >> T1 >> T2 >> T3 >> T4;

	resp = (T1-1)+(T2-1)+(T3-1)+T4;

	cout << resp << "\n";
}