/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - BANDA09 - Banda
** 22/05/2016
*/

#include <iostream>

using namespace std;

int mapa[100][100];

int main() {
    int nMusicos, mPares, X, Y, Zentrosamento, melhor;

    cin >> nMusicos >> mPares;

    for (int i = 0; i < mPares; i++) {
        cin >> X >> Y >> Zentrosamento;
        mapa[X-1][Y-1] = Zentrosamento;
        mapa[Y-1][X-1] = Zentrosamento;
    }

    melhor = -1;
    for (int i = 0; i < nMusicos; i++) {
        for (int j = i+1; j < nMusicos; j++) {
            for (int k = j+1; k < nMusicos; k++) {
                int aux = mapa[i][j]+mapa[i][k]+mapa[j][k];
                if (aux > melhor) {
                    melhor = aux;
                    X = i+1; 
                    Y = j+1; 
                    Zentrosamento = k+1;
                }
            }
        }
    }

    cout << X << " " << Y << " " << Zentrosamento << "\n";    
}