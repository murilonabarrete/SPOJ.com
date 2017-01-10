/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - NOTA09 - Notas da prova
** 31/03/2016
*/

#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	if (N == 0)
		cout << "\n" << "E" << "\n";
	else if (N > 0 && N <= 35)
		cout << "\n" << "D" << "\n";
	else if (N > 35 && N <= 60)
		cout << "\n" << "C" << "\n";
	else if (N > 60 && N <= 85)
		cout << "\n" << "B" << "\n";
	else
		cout << "\n" << "A" << "\n";

}