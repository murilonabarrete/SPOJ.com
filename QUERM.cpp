/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - QUERM - Quermesse
** 29/03/2016
*/

#include <iostream>

using namespace std;

int main() {
	int i, j = 0, n, x[10000], resul[10000];

	do {
		cin >> n;
		if (n == 0)
			break;
		for (i = 0; i < n; i++) {
			cin >> x[i];
			if (x[i] == i+1) {
				resul[j] = x[i];
				j++;
			}
		}
	} while (n != 0);

	for (i = 0; i < j; i++)
		cout <<"Teste " << i+1 << "\n" << resul[i] << "\n" << "\n";


}