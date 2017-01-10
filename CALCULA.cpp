/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - CALCULA - Calculando
** 21/03/2016
*/

#include <iostream>

using namespace std;

int main() {
	int i, m, X[1000], aux, contOP, contr = 0, result[1000000];
	char op[1000];

	while (true) {
		cin >> m;
		contOP = 1;
		
		if (m == 0)
			break;

		for (i = 0; i < m+(m-1); i++) {
			if (i%2 == 0)
				cin >> X[i];
			else
				cin >> op[i];
		}

		//X[m+(m-1)] = 0;
		aux = X[0];

		for (i = 2; i < m*2; i++) {
			if (op[contOP] == '+')
				aux += X[i];
			else
				aux -= X[i];
			i++;
			contOP += 2;
		}
		result[contr] = aux;
		contr ++;
	}

	for (i = 0; i < contr; i++)
		cout << "Teste " << i+1 << "\n" << result[i] << "\n" << "\n";



}