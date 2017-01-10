/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - JANELA13 - Janela
** 30/05/2016
*/

#include <iostream>

using namespace std;

int main() {
	int i, F1, F2, F3, resp = 0;

	cin >> F1 >> F2 >> F3;

	for (i = 0; i < 600; i++)
		if (!(F1 <= i && F1+200 > i) && !(F2 <= i && F2+200 > i) && !(F3 <= i && F3+200 > i))
			resp++;

	resp *= 100;
	cout << resp << "\n";
}