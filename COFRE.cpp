/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - COFRE - Cofrinhos da Vó Vitória
** 17/04/2016
*/

#include <iostream>

using namespace std;

int main() {
	int i, N, J, Z, aux, cont = 1, resul[100];

	while (true) {
		cin >> N;
		if (N == 0)
			break;

		aux = 0;
		for (i = 0; i < N; i++) {
			cin >> J >> Z;
			aux += J-Z;
			resul[i] = aux;
		}
		cout << "Teste " << cont++ << "\n";
		for (i = 0; i < N; i++)
			cout << resul[i] << "\n";
		cout << "\n";

	}

}