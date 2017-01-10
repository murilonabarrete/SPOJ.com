/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - TROIA13 - Famílias de Troia
** 30/05/2016
*/

#include <iostream>
#include <vector>

using namespace std;
void verifica(int Y);

vector<int> vetor[100001];
bool teste[100001];

int main() {
	int i, N, M, X, Y, resp = 0;

    cin >> N >> M;

    for(i = 0; i < M; i++) {
        cin >> X >> Y;
        vetor[X].push_back(Y);
        vetor[Y].push_back(X);
    }
    for(i = 1; i <= N; i++)
        if(!teste[i]) {
            resp++;
            verifica(i);
        }

    cout << resp << "\n";
}

void verifica(int Y) {
	int i, prox;
    teste[Y] = 1;
    for(i = 0; i < vetor[Y].size(); i++) {
        prox = vetor[Y][i];
        if(!teste[prox]) 
        	verifica(prox);
    }
}