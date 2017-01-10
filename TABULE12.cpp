/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - TABULE12 - O Tabuleiro Esburacado
** 01/06/2016
*/

#include <iostream>

using namespace std;

int main() {
	int i, N, M, R = 4, C = 4, resp;
	bool teste = false;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> M;
		switch (M) {
			case 1:
				R -= 2;
				C += 1;
				break;
			case 2:
				R -= 1;
				C += 2;
				break;
			case 3:
				R += 1;
				C += 2;
				break;
			case 4:
				R += 2;
				C += 1;
				break;
			case 5:
				R += 2;
				C -= 1;
				break;
			case 6:
				R += 1;
				C -= 2;
				break;
			case 7:
				R -= 1;
				C -= 2;
				break;
			case 8:
				R -= 2;
				C -= 1;
				break;
		}

		if ((R == 2 && C == 2) || (R == 3 && C == 5) || (R == 4 && C == 1) || (R == 4 && C == 2)) {
			teste = true;
			resp = i+1;
			break;
		}
	}

	if (teste)
		cout << resp << "\n";
	else
		cout << N << "\n";
}