 /*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - BAFO - Bafo
** 19/04/2016
*/

#include <iostream>
#include <string>

using namespace std;

int main() {

	int aldo, beto, x, y, conta, contb, aux = 0, saida[100];
	
	while (true) {
		cin >> x;
		if (x == 0)
			break;

		conta = 0;
		contb = 0;
		for (y = 0; y < x; y++) {
			cin >> aldo;
			cin >> beto;
			conta = conta + aldo;
			contb = contb + beto;
		}
		if (conta > contb)
			saida[aux] = 0;
		else
			saida[aux] = 1;

		aux ++;
	}

	for (x = 1; x <= aux; x++) {
		cout << "Teste " << x << "\n";
		if (saida[x-1] == 0)
			cout << "Aldo\n";
		else if (saida[x-1] == 1)
			cout << "Beto\n";
		cout << "\n";
	}


	return(0);
}