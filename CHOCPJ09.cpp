 /*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - CHOCPJ09 - Competicao de chocolate
** 25/04/2016
*/

#include <iostream>

using namespace std;

int main() {
	int N, M;
	bool teste;

	cin >> N >> M;
	if (M >= N)
		teste = true;
	else
		teste = N%(M+1) != 0;

	if (teste)
		cout << "Paula\n";
	else
		cout << "Carlos\n";
	
}