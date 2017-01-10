 /*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - MARCIAN1 - Marciano
** 27/04/2016
*/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int L, A, P, R;
    double caixa;

    cin >> L >> A >> P >> R;

    caixa = sqrt((sqrt((L*L)/4 + (A*A)/4))*(sqrt((L*L)/4 + (A*A)/4)) + (P*P)/4);

    if (caixa <= R)
		cout << "S\n";
    else
    	cout << "N\n";

}