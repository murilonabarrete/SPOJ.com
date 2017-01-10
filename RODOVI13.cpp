/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - RODOVI13 - Rodovia
** 27/05/2016
*/

#include <iostream>

using namespace std;

int main() {
    int i, N, A, B, aux, auxA[20000], auxB[20000], auxC[20000], auxD[20000];
  	char rFinal = 'S';

  	cin >> N;

  	for (i = 1; i <= N; ++i) {
    	auxA[i] = 0;
    	auxB[i] = 0;
    	auxC[i] = 0;
    	auxD[i] = 0;
  	}

  	for (i = 1; i <= N; ++i) {
	    cin >> A >> B;
	    auxD[A] = B;
	    ++auxB[A];
	    ++auxA[B];
  	}

	for (i = 1; i <= N; ++i) {
    	if ((auxA[i] != 1) || (auxB[i] != 1)) {
		    rFinal = 'N';
	  	    break;
    	}
  	}

	A = 1;
	aux = 0;
	while (auxC[A] == 0) {
    	auxC[A] = 1;
	    ++aux;
	    A = auxD[A];
	}

  	if (aux != N) 
  		rFinal = 'N';
  	cout << rFinal << "\n";
}