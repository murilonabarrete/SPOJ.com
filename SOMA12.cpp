/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - SOMA12 - Soma de Casas
** 02/06/2016
*/

#include <iostream>

using namespace std;

int main() {
	int i, j, N, numCasa[100001], K;
	bool teste = false;

	cin >> N;

	for (i = 0; i < N; i++)
		cin >> numCasa[i];

	cin >> K;

	i = 0; j = N-1;
	while (true) {
		if (numCasa[i]+numCasa[j] == K) {
			cout << numCasa[i] << " " << numCasa[j] << "\n";
			break;
		}
		else if (numCasa[i]+numCasa[j] > K)
			j--;
		else
			i++;
	}
}