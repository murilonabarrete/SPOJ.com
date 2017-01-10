/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - MACACO - Macaco-prego
** 16/04/2016
*/

#include <iostream>

using namespace std;

int main() {
	int i, N = 1, X, Y, U, V, x, y, u, v, cont = 1;
	bool testeN;

	while (N != 0) {
		cin >> N;
		if (N == 0)
			break;

		testeN = false;
		cin >> X >> Y >> U >> V;
		cin >> x >> y >> u >> v;

		if (X < x)
			X = x;
		if (Y > y)
			Y = y;
		if (U < u)
			U = u;
		if (V > v)
			V = v;

		if (U <= X || V >= Y)
			testeN = true;

		cout << "Teste " << cont++ << "\n";
		if (testeN)
			cout << "nenhum";
		else
			cout << X << " " << Y << " " << U << " " << V << "\n\n";
	}

}