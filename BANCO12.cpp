/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - BANCO12 - Banco
** 01/06/2016
*/

#include <iostream>
#include <cstdlib>
#include <queue>

using namespace std;
queue <int> fila;

int main(){
	int i, j, C, N, c[20], d[1001], t[1001], cont = 0, aux = 0, temp;

	cin >> C >> N;

	for (i = 0; i < C; i++)
		c[i] = 0;

	for (i = 0; i < N; i++)
		cin >> t[i] >> d[i];

	for (i = 0; aux < N || !fila.empty(); i++) {
		for (j = 0; j < C; j++) {
			c[j] = max(0, c[j]-1);
		}

		while(aux < N && t[aux] == i) {
			fila.push(aux);
			aux++;
		}

		for (j = 0; j < C; j++) {
			if (c[j] == 0 && !fila.empty()) {
				temp = fila.front();
				fila.pop();
				if(i-t[temp] > 20)
					cont++;
				c[j] = d[temp];
			}
		}
	}

	cout << cont << "\n";
}