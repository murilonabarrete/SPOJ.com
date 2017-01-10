/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - CACHE13 - Cachecol da Vovó Vitória
** 30/05/2016
*/

#include <iostream>

using namespace std;

typedef long long num; 
void potencia(num auxX[2][2], num auxY[2][2], num auxZ);
void produto(num auxX[2][2], num auxY[2][2], num auxZ[2][2]);
void copia(num auxX[2][2], num auxY[2][2]);
long long mud(num auxX);

int div = 1000000007;

int main() {
	long long int N;

    cin >> N;

    num ini1[2][2] = {{5, -2}, {1, 0}};
    num ini2[2][2] = {{54, 0}, {12, 0}};
    num monte[2][2];
    potencia(monte, ini1, N-1);
    produto(ini1, monte, ini2);

    cout << ini1[1][0] << "\n";
}

void potencia(num auxX[2][2], num auxY[2][2], num auxZ) {
	int i, j;
    if (auxZ == 0) {
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 2; j++) {
                if (i == j) 
                	auxX[i][j] = 1;
                else 
                	auxX[i][j] = 0;
            }
        }
        return;
    }
    if (auxZ == 1) {
        copia(auxX, auxY);
        return;
    }

    num temp[2][2];
    potencia(auxX, auxY, auxZ/2);
    produto(temp, auxX, auxX);
    if (auxZ&1) 
    	produto(auxX, temp, auxY);
    else 
    	copia(auxX, temp);
}

void produto(num auxX[2][2], num auxY[2][2], num auxZ[2][2]) {
	int i, j, k;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            auxX[i][j] = 0;
            for (k = 0; k < 2; k++) {
                auxX[i][j] += auxY[i][k]*auxZ[k][j];
            }
            auxX[i][j] = mud(auxX[i][j]);
        }
    }
}

void copia(num auxX[2][2], num auxY[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
        	auxX[i][j] = auxY[i][j];
    }
}

long long mud(num auxX) {
    return ((auxX%div)+div)%div;
}