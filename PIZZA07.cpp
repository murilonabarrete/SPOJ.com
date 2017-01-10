/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - PIZZA07 - Pizza
** 24/05/2016
*/

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

deque<int> pilha;
int get(int st, int end);
int soma[200000];

int main() {
	int nFatias, K[200000], i, best;

    cin >> nFatias;

    for (i = 0; i < nFatias; i++) {
        cin >> K[i];
        K[nFatias+i] = K[i];
    }

    soma[0] = K[0];
    for (i = 1; i < 2*nFatias; i++) 
    	soma[i] = soma[i-1] + K[i];

    best = 0;
    for (i = 0; i < 2*nFatias; i++) {
        while (!pilha.empty() && get(pilha.back(), i) <= K[i] ) 
        	pilha.pop_back();
        while (!pilha.empty() && i - pilha.front() + 1 > nFatias) 
        	pilha.pop_front();

        pilha.push_back(i);
        best = max(best, get(pilha.front(), i));
    }

    cout << best << "\n";
}

int get(int st, int end) {
    return soma[end] - (st==0?0:soma[st-1]);
}