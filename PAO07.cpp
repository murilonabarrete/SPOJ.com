/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - PAO07 - Pao a metro
** 25/05/2016
*/

#include <iostream>

using namespace std;

bool funcVer(int ksandu, int tempM, int nPessoas);
int calcula(int ksandu, int tempM);
int mI[10000];

int main() {
	int nPessoas, ksandu, i, somaF, maior = 0, aux = 1, tempM, pA = 0, pB = 0;

	cin >> nPessoas >> ksandu;

	for (i = 0; i < ksandu; i++) {
		cin >> mI[i];
  		if (maior < mI[i]) 
  			maior = mI[i];
	}
 
	for (i = 0; i < ksandu; i++) {
		pA += mI[i];
		pB += mI[i]/maior;
	}
 
	if (pA == nPessoas) 
		cout << "1\n";
	else if (pB == nPessoas) 
		cout << ksandu << "\n";
	else {
		somaF = 0;
		while (aux <= maior) {
			tempM = aux + (maior-aux)/2;
		    pA = calcula(ksandu, tempM);

		    if (funcVer(ksandu, tempM, nPessoas)) {
		    	aux = tempM + 1;
		    	somaF = tempM;
		    }
		    else
		    	maior = tempM-1;
		}	  
		cout << somaF << "\n";
	}
}

int calcula(int ksandu, int tempM) {
	int pA = 0, i;
	for (i = 0; i < ksandu; i++) {
		pA += mI[i]/tempM;
	} 
 	return pA;
}

bool funcVer(int ksandu, int tempM, int nPessoas) {
	return calcula(ksandu, tempM) >= nPessoas;
}