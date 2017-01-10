/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - ELEICOES - Eleições
** 25/03/2016
*/

#include <iostream>
#include <stdlib.h>

using namespace std;
int compare (const void * a, const void * b);

int main() {
	int N, aux, maior = 0, resul, cont = 0, X[100000];

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> X[i];
	}

	qsort (X, N, sizeof(int), compare);

	for (int i = 0; i < N; i++) {
		aux = X[i];
		if (aux == X[i+1])
			cont++;
		else {
			if (cont > maior) {
				maior = cont;
				resul = aux;
			}
			cont = 0;
		}
	}

	cout << resul << "\n";
}

/*
**funcao usada pelo QuickSort que esta na biblioteca <stdlib, 
**copiada de um tutorial da internet que ensina usar o algoritmo de ordenacao
*/
int compare (const void * a, const void * b) {
	return ( *(int*)a - *(int*)b );
}

