/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - CHUVA08 - Chuva
** 25/05/2016
*/

#include <iostream>
#include <string.h>
#include <algorithm>
#include <utility>
#include <set>

using namespace std;
#define wipe(v, x) memset((v), (x), sizeof(v))
const int num = 0x3f3f3f3f;
int lugar[5000][5000], dMax[5000], aux[5000];

struct endereco {
    bool operator ()(const int X, const int Y) const {
        if (int t = dMax[X] - dMax[Y]) 
            return t < 0;
        return X < Y;
    }
};
set<int, endereco> heap;

int main() {
    int i, j, N, Xi, Yi, Xf, Yf, X1[5000], Y1[5000], X2[5000], Y2[5000];

    cin >> Xi >> Yi >> Xf >> Yf >> N;

    for (int i = 0; i < N; i++)
        cin >> X1[i] >> Y1[i] >> X2[i] >> Y2[i];
    X1[N] = Xi; Y1[N] = Yi; X1[N+1] = Xf; Y1[N+1] = Yf;
    X2[N] = X1[N]; Y2[N] = Y1[N];
    X2[N+1] = X1[N+1]; Y2[N+1] = Y1[N+1];
    N += 2;
    wipe(lugar, num);
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            int dx = max(0, max(X1[i], X1[j]) - min(X2[i], X2[j]));
            int dy = max(0, max(Y1[i], Y1[j]) - min(Y2[i], Y2[j]));
            lugar[i][j] = dx + dy;
        }
    }
    wipe(dMax, num);
    wipe(aux, 0);
    dMax[N-2] = 0;
    heap.insert(N-2);
    while (!heap.empty()) {
        int top = *heap.begin(); heap.erase(top);
        aux[top] = 1;
        for (i = 0; i < N; i++) {
            if (aux[i]) continue;
            int ndMax = dMax[top] + lugar[top][i];
            if (ndMax < dMax[i]) {
                heap.erase(i);
                dMax[i] = ndMax;
                heap.insert(i);
            }
        }
    }

    cout << dMax[N-1] << "\n";
}