/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - OBIHANOI - Torres de Hanoi
** 30/03/2016
*/

#include <iostream>

using namespace std;
int cont;
void Hanoi(int N, int orig, int dest, int temp);

int main() {
	int N = 1, aux = 0, teste = 1, resul[1000];

	cin >> N;
	while (N != 0) {
		cont = 0;
		Hanoi(N, 1, 3, 2);
		cout << "Teste " << teste++ << "\n" << cont << "\n\n";
		aux++;

		cin >> N;
	}
}

void Hanoi(int N, int orig, int dest, int temp) {
	if (N == 1){
		cont++;
	}
	else {
		Hanoi(N-1, orig, temp, dest);
		cont++;
		Hanoi(N-1, temp, dest, orig);
	}
}