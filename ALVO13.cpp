/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - ALVO13 - Tiro ao alvo
** 27/05/2016
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long int i, C, alvos[100000], Tiros, X, Y, aux, resp, temp, cont = 0;

    cin >> C >> Tiros;

    for (i = 0; i < C; i++) {
        cin >> alvos[i];
        alvos[i] *= alvos[i];
    }

    for (i = 0; i < Tiros; i++) {
        cin >> X >> Y;
        aux = X*X + Y*Y;
        long long int* resp = lower_bound(alvos, alvos + C, aux);
        temp = C-(resp-alvos);
        cont += temp;
    }
	
	cout << cont << "\n";	
}