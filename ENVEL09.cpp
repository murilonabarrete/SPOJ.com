/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - ENVEL09 - Número de Envelopes
** 18/04/2016
*/
 
#include <iostream>
#include <stdio.h>
 
using namespace std;
 
int main() {
    int i, N, K, aux, resp = 1000001, X[1000];
 
    scanf("%d %d", &N, &K);
 
    for (i = 0; i <= K; i++)
        X[i] = 0;
 
    for (i = 0; i < N; i++) {
        scanf("%d", &aux);
        X[aux]++;
    }

    for (i = 1; i <= K; i++)
        if (X[i] < resp)
            resp = X[i];
 
    cout << resp << "\n";
}