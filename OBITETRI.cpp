/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - OBITETRI - Testris
** 18/04/2016
*/

#include <iostream>

using namespace std;

int main() {
	int i, j, k, J, maior, menor, soma, aux, notas[1000], num = 1;
	string nomes[1000], auxnomes;

	while (true) {
		cin >> J;
		if (J == 0)
			break;

		for (i = 0; i < J; i++) {
			cin >> nomes[i];
			maior = -1;
			menor = 1001;
			soma = 0;
			for (j = 0; j < 12; j++) {
				cin >> aux;
				if (aux > maior)
					maior = aux;
				if (aux < menor)
					menor = aux;
				soma += aux;
			}
			soma -= (maior+menor);
			notas[i] = soma;
			for (k = i; k > 0; k--) {
				if (notas[k] > notas[k-1]) {
					auxnomes = nomes[k-1];
					nomes[k-1] = nomes[k];
					nomes[k] = auxnomes;
					aux = notas[k-1];
					notas[k-1] = notas[k];
					notas[k] = aux;	
				}
				else if (notas[k] == notas[k-1]) {
					if (nomes[k][0] < nomes[k-1][0]) {
						auxnomes = nomes[k-1];
						nomes[k-1] = nomes[k];
						nomes[k] = auxnomes;
						aux = notas[k-1];
						notas[k-1] = notas[k];
						notas[k] = aux;
					}
					else if (nomes[k][0] < nomes[k-1][0]) {
						auxnomes = nomes[k-1];
						nomes[k-1] = nomes[k];
						nomes[k] = auxnomes;
						aux = notas[k-1];
						notas[k-1] = notas[k];
						notas[k] = aux;
					}
					else
						break;
				}
				else
					break;
			}

		}
		cout << "Teste " << num++ << "\n";
		for (i = 0; i < J; i++)
			if (i > 0)
				if (notas[i] == notas[i-1])
					cout << i << " " << notas[i] << " " << nomes[i] << "\n";
				else
					cout << i+1 << " " << notas[i] << " " << nomes[i] << "\n";
			else
				cout << i+1 << " " << notas[i] << " " << nomes[i] << "\n";
		cout << "\n";

	}

}