/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - PONTES09 - Caminho das pontes
** 20/05/2016
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define grande 1000000000

int main() {
	int i, j, nPilares, mPontes, S, T, B, g[1111][1111], resp[1111], temp[1111];

    cin >> nPilares >> mPontes;

    for (i = 0; i <= nPilares+1; i++) {
        resp[i] = grande;
        for (j = 0; j <= nPilares+1; j++) {
            g[i][j] = 1000000000;
        }
    }

    for (i = 0; i < mPontes; i++) {
        cin >> S >> T >> B;
        g[S][T] = g[T][S] = B;
    }

    int aux = 0;
    resp[0] = 0;
    do {
        temp[aux]=1;
        for (i = 0; i <= nPilares+1; i++)
            if (g[aux][i]+resp[aux] < resp[i])
                resp[i] = g[aux][i]+resp[aux];

        int melhor = grande;
        aux = -1;
        for (i = 0; i <= nPilares+1; i++)
            if (!temp[i] && resp[i] < melhor) {
                melhor = resp[i];
                aux = i;
            }
    } while (aux != -1);

    cout << resp[nPilares+1] << "\n";
}