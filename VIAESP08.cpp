/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - VIAESP08 - Viagem Espacial
** 25/05/2016
*/

#include <iostream>
#include <inttypes.h>

using namespace std;
int64_t calcula(int64_t X[2], int64_t Y[2]);
int64_t entrada[1000][2][2], Z[2], R;

int main () {
  	int i, inteirosN, rFIM = 0;

    cin >> inteirosN >> Z[0] >> Z[1] >> R;
  	for (i = 0; i < inteirosN; i++) {
    	cin >> entrada[i][0][0] >> entrada[i][0][1] >> entrada[i][1][0] >> entrada[i][1][1]; 
  	}
  	for (i = 0; i < inteirosN; i++) {
    	int64_t X[2], Y[2], W[2];
    
        X[0] = entrada[i][1][0] - entrada[i][0][0];
    	X[1] = entrada[i][1][1] - entrada[i][0][1];
    	Y[0] = Z[0] - entrada[i][0][0];
    	Y[1] = Z[1] - entrada[i][0][1];
    
    	W[0] = Y[0]*calcula(X,X) - X[0]*calcula(X,Y);
	    W[1] = Y[1]*calcula(X,X) - X[1]*calcula(X,Y);
    
    	if (calcula(W, W) <= R * R * calcula(X, X) * calcula(X, X)) rFIM++;
    }

    cout << rFIM << endl;
};

int64_t calcula(int64_t X[2], int64_t Y[2]) {
  return X[0]*Y[0] + X[1]*Y[1];
}