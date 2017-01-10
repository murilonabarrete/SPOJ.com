/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - PENAL06 - Penalidade minima
** 24/05/2016
*/

#include <iostream>
#include <cstring>

using namespace std;

int N, A;
typedef pair<int,int> tipo1;
const int Nmax = 1e3+10;
tipo1 tabuleiro[Nmax][Nmax], tabuleiroAux[Nmax][Nmax];
bool teste[Nmax][Nmax];

tipo1 somador(const tipo1& A, const tipo1& B);
void calc(int X, int Y);
inline int funcAux(int num, int d);

int main(){
    int i, j, resp;

    cin >> N;

    memset(tabuleiroAux, -1, sizeof(tabuleiroAux));
    for (i = 1; i <= N; i++){
        for (j = 1; j <= N; j++){
            cin >> A;
            if (A != 0)
                tabuleiro[i][j] = tipo1(funcAux(A,2), funcAux(A,5));
            else
                tabuleiro[i][j] = tipo1(-1,-1);
        }
    }

    for (i = 1; i <= N; i++) {
        tabuleiro[i][N+1].first = -1;
        tabuleiro[i][N+1].second = -1;
        tabuleiro[N+1][i].first = -1;
        tabuleiro[N+1][i].second = -1;
    }

    calc(1,1);
    resp = min(tabuleiroAux[1][1].first, tabuleiroAux[1][1].second);

    for (i = 1; i <= N; i++){
        for (j = 1; j <= N; j++){
            swap(tabuleiro[i][j].first, tabuleiro[i][j].second);
            teste[i][j]  = 0;
        }
    }

    calc(1,1);
    resp = min(resp, min(tabuleiroAux[1][1].first, tabuleiroAux[1][1].second));

    cout << resp << "\n";
}

inline int funcAux(int num, int d){
    int ret = 0;
    while (num/d * d == num){
        ret++;
        num /= d;
    }
    return ret;
}

tipo1 somador(const tipo1& A, const tipo1& B) {
    return tipo1(A.first + B.first, A.second + B.second);
}

void calc(int X, int Y){
    if (teste[X][Y]) 
        return;
    if (X == N && Y == N) {
        tabuleiroAux[X][Y] = tabuleiro[N][N]; 
        return;
    }

    teste[X][Y] = 1;

    bool f1 = 0, f2 = 0;
    if (X+1 <= N && tabuleiro[X+1][Y].first != -1) {
        f1 = 1; 
        calc(X+1,Y);
    }
    if (Y+1 <= N && tabuleiro[X][Y+1].first != -1) {
        f2 = 1; 
        calc(X,Y+1);
    }

    f1 = (X+1 <= N && tabuleiro[X+1][Y].first != -1);
    f2 = (Y+1 <= N && tabuleiro[X][Y+1].first != -1);

    if (f1 && f2)
        tabuleiroAux[X][Y] = somador(tabuleiro[X][Y], min(tabuleiroAux[X+1][Y], tabuleiroAux[X][Y+1]));
    else if (f1)
        tabuleiroAux[X][Y] = somador(tabuleiro[X][Y], tabuleiroAux[X+1][Y]);
    else if (f2)
        tabuleiroAux[X][Y] = somador(tabuleiro[X][Y], tabuleiroAux[X][Y+1]);
    else
        tabuleiro[X][Y].first = -1;
}
