/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - CADEIR09 - Cadeiras do auditorio
** 23/05/2016
*/

#include <iostream>

using namespace std;

int sala[201][201], salaPerf[201];

int main() {
	int Li, Co, X, Y, i, j, aux, cont = 0, respX[1000], respY[1000];
    char respM[1000];

    cin >> Li >> Co;

    for (i = 0; i < Li; i++) {
        for (j = 0; j < Co; j++) {
            cin >> sala[i][j];
            sala[i][j]--;
        }
    }

    for (i = 0; i < Co; i++)
        salaPerf[i] = sala[0][i]%Co;

    for (i = 0; i < Co; i++) {
        if (salaPerf[i] == i) 
        	continue;
        for (j = i; j < Co; j++) {
            if (salaPerf[j] == i) {
            	respM[cont] = 'C';
            	respX[cont] = i+1;
            	respY[cont] = j+1;
            	cont++;
            	aux = salaPerf[i];
            	salaPerf[i] = salaPerf[j];
            	salaPerf[j] = aux;
                break;
            } 
        }
    }

    for (i = 0; i < Li; i++)
        salaPerf[i] = sala[i][0]/Co;

    for (i = 0; i < Li; i++) {
        if (salaPerf[i] == i) 
        	continue;
        for (j = i; j < Li; j++) {
            if (salaPerf[j] == i) {
            	respM[cont] = 'L';
            	respX[cont] = i+1;
            	respY[cont] = j+1;
            	cont++;
            	aux = salaPerf[i];
            	salaPerf[i] = salaPerf[j];
            	salaPerf[j] = aux;
                break;
            } 
        }
    }

    if (cont > 0) {
        cout << cont << "\n";
        for (i = 0; i < cont; i++)
            cout << respM[i] << " " << respX[i] << " " << respY[i] << "\n";
    }
    else
        cout << 0 << "\n";
}