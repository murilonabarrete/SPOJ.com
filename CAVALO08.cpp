/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - CAVALO08 - Cavalos
** 26/05/2016
*/

#include <iostream>

using namespace std;

int main() {
	int mLI, nCO, resp;

	cin >> mLI >> nCO;

	if (mLI > nCO) {
		if (nCO == 1)
			resp = mLI;
		else if (nCO == 2)
			resp = (mLI/4)*4+min(2, (mLI%4))*2;
		else
			resp = (nCO*mLI+1)/2;
	}
	else {
		if (mLI == 1)
			resp = nCO;
		else if (mLI == 2)
			resp = (nCO/4)*4+min(2, (nCO%4))*2;
		else
			resp = (mLI*nCO+1)/2;
	}

	cout << resp << "\n";
}