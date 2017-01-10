/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - PARPROX - Pontos
** 14/03/2016
*/

#include <iostream>
#include <iomanip>
#include <math.h>
#include <limits>
#include <cfloat>

using namespace std;

int main() {
    int N, i, j;
    long double d, daux;
    daux = DBL_MAX;

    cin >> N;
    long double X[N], Y[N];
 
    for (i = 0.0; i < N; i++) {
        cin >> X[i];
        cin >> Y[i];
    }
 
    for (i = 0.0; i < N-1; i++) {
        for (j = i+1; j < N; j++) {
            d = (((X[i]-X[j])*(X[i]-X[j])) + ((Y[i]-Y[j])*(Y[i]-Y[j])));
            if (d < daux) {
                daux = d;
            }
        }
    }
 
    std::cout.precision(3);
    cout << std::fixed << sqrt(daux) << "\n";
    return 0;
}	