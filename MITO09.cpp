/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - MITO09 - Caçadores de Mitos
** 19/05/2016
*/

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <algorithm>

using namespace std;

int main() {
	int i, nReg, A, B, matriz[1000][1000];

    cin >> nReg;

    for (i = 0; i < nReg; i++) {
        cin >> A >> B;
        if (matriz[A][B]) {
            cout << "1\n";
            return 0;
        }
        matriz[A][B]=1;
    }
    cout << "0\n";
}