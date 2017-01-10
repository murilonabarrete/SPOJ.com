/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - BIT - Bits Trocados
** 27/03/2016
*/

#include <iostream>

using namespace std;

int main() {
	int x, y, cont = 0, aux, saida[4][10000];

	do {
		cin >> x;
		y = x;
		aux = 0;
		cont ++;
		while (x >= 50) {
			aux ++;
			saida[0][cont] = aux;
			x = x - 50;
		}
		aux = 0;
		while (x >= 10) {
			aux ++;
			saida[1][cont] = aux;
			x = x - 10;
		}
		aux = 0;
		while (x >= 5) {
			aux ++;
			saida[2][cont] = aux;
			x = x - 5;
		}
		aux = 0;
		while (x >= 1) {
			aux ++;
			saida[3][cont] = aux;
			x = x - 1;
		}
	} while(y > 0);

	for (x = 1; x < cont; x++)
		cout << "Teste " << x << "\n" << saida[0][x] << " " << saida[1][x] << " " << saida[2][x] << " " << saida[3][x] << "\n" << "\n";
}