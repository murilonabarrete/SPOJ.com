/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - PRIMO - Primo
** 24/03/2016
*/

#include <iostream>

using namespace std;
void Primo(int N, int x);

int main() {
	int N, x;
	cin >> N;
	Primo(N, 2);
}

void Primo(int N, int x) {
	if (N == 0 || N == 1 || N%x == 0) {
		if (N == x) {
			cout << "sim\n";
			return;
		}	
		cout << "nao\n";
		return;
	}
	Primo(N, x+1);
}