/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - PAR - Par ou impar
** 21/03/2016
*/

#include <iostream>

using namespace std;

int main() {
	string nome1, nome2;
	int i, j, N = 1, M = 0, cont = 0, cont2 = 0, nN[10000], joga1, joga2, aux;
	string resul[100000];

	while (N != 0) {
		cin >> N;
		
		if (N == 0)
			break;

		nN[M] = N;
		cin >> nome1;
		cin >> nome2;

		for (i = 0; i < N; i++) {
			cin >> joga1;
			cin >> joga2;
			aux = joga1+joga2;
			if (aux%2 == 0)
				resul[cont] = nome1;
			else
				resul[cont] = nome2;
			cont ++;
		}
		M ++;
	}

	for (i = 0; i < M; i++) {
		cout << "Teste " << i+1 << "\n";
		for (j = 0; j < nN[i]; j++) {
			cout << resul[cont2] << "\n";
			cont2 ++;
		}
		cout << "\n";
	}


}