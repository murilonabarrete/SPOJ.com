 /*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - COPA1 - Copa do mundo
** 27/04/2016
*/

#include <iostream>

using namespace std;

int main() {
	int i, N, M, x, y, z;
	char times[32];

	x = 65;
	for (i = 0; i < 16; i++)
		times[i] = x++;

	x = 0;
	y = 1;
	z = 16;
	for (i = 0; i < 15; i++) {
		cin >> N >> M;
		if (N > M)
			times[z] = times[x];
		else
			times[z] = times[y];
		x += 2;
		y += 2;
		z++;
	}

	cout << times[30] << "\n";
}