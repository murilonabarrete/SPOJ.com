/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - LINGUA14 - Lingua do P
** 05/06/2016
*/

#include <iostream>
#include <stdio.h>
#include <strings.h>

using namespace std;

int main() {
	int i, aux = 0, entC, temp;
	char final[1000];

	while (true) {
		entC = getchar();
		if (entC == '\n') {
			break;
			temp = 0;
		}
		else if (entC == ' ') {
			final[aux] = ' ';
			aux++;
			temp = 0;
		}
		else if (entC == 'p') {
			if (temp == entC) {
				final[aux] = entC;
				aux++;
				temp = 0;
			}
			else
				temp = entC;
		}
		else {
			final[aux] = entC;
			aux++;
			temp = 0;
		}
	}

	for (i = 0; i < aux; i++)
		cout << final[i];
	cout << "\n";
}