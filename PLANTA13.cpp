/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - PLANTA13 - Plantacao
** 27/05/2016
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int i, N, K, Ai[100001], fM = 0, aux = 0;
	long long int soma = 0, resp = 0;
	char ind;

	cin >> N >> K;

	for(i = 0; i < K; i++)
		cin >> Ai[i];

	sort(Ai, Ai+K);

	for(i = 0; i < N; i++) {
		cin >> ind;
		if (ind == 'E')
			aux--;
		else if (ind == 'C')
			aux++;

		soma += aux;
		while(Ai[fM] <= -aux && fM < K) {
			resp += soma+(i+1)*Ai[fM];
			fM++;
		}
	}

	while(fM < K) {
		resp += soma + N*Ai[fM];
		fM++;
	}

	cout << resp << "\n";
}
