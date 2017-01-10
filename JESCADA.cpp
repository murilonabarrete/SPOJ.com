 /*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - JESCADA - Escada
** 24/04/2016
*/

#include <iostream>

using namespace std;

int main() {
	int i, N, inst1, inst2, cont;

	cin >> N;
	inst1 = 0;
	for (i = 0; i < N; i++) {
		cin >> inst2;
		if (i > 0) {
			if (inst2 <= inst1+10) {
				cont += inst2-inst1;
				inst1 = inst2;
			}
			else {
				cont += 10;
				inst1 = inst2;
			}
		}
		else
			inst1 = inst2;
	}
	if (N != 0)
		cont += 10;

	cout << cont << "\n";

}