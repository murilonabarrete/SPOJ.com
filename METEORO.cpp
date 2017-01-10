 /*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - METEORO - Meteoros
** 18/04/2016
*/

#include <iostream>

using namespace std;

int main() {
	int i, N, X1, X2, Y1, Y2, c = 0, cont, X, Y;

	while (true) {
		cin >> X1 >> Y1 >> X2 >> Y2;
		if (X1 == 0 && Y1 == 0 && X2 == 0 && Y2 == 0)
			break;
		cin >> N;
		cont = 0;
		for (i = 0; i < N; i++) {
			cin >> X >> Y;
			if (X >= X1 && X <= X2 && Y <= Y1 && Y >= Y2)
				cont++;
		}

		cout << "Teste " << ++c << "\n";
		cout << cont << "\n\n";
	}

}