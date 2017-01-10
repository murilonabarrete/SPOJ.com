/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - TARZAN12 - Tarzan
** 01/06/2016
*/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;
#define valorAux(x) ((x)*(x))
void verifica(int arvore);
vector<int> vetor[1010];
int marcador[1010];

int main() {
	int i, j, ok, Narvores, Dalcance, Xi[1001], Yi[1001];

	cin >> Narvores >> Dalcance;
	Dalcance *= Dalcance;

	for (i = 0; i < Narvores; i++)
		cin >> Xi[i] >> Yi[i];

	for (i = 0; i < Narvores; i++) {
		for (j = i+1; j < Narvores; j++) {
			if (valorAux(Xi[i]-Xi[j])+valorAux(Yi[i]-Yi[j]) <= Dalcance) {
				vetor[i].push_back(j);
				vetor[j].push_back(i);
			}
		}
	}

	memset(marcador, 0, sizeof marcador);
	verifica(0); ok = 1;
	for (i = 0; i < Narvores && ok; ok &= marcador[i++]);


	if (ok) 
		cout << "S\n";
	else
		cout << "N\n";
}

void verifica(int arvore) {
	int i;
	if (marcador[arvore])
		return;
	marcador[arvore] = 1;
	for(i = 0; i < vetor[arvore].size(); i++)
		verifica(vetor[arvore][i]);
}