/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - FUGIT09 - O fugitivo
** 13/05/2016
*/

#include <iostream>
#include <string.h>
#include <set>

using namespace std;

int main() {
	int i, N, distMax, D;
	long long lim, X = 0, Y = 0;
	char c;

	cin >> N >> distMax;

	lim = ((long long) distMax)*distMax;
	for (i = 0; i < N; i++) {
		cin >> c >> D;
		switch (c) {
            case 'N': Y += D;
            break;
            case 'S': Y -= D;
            break;
            case 'L': X += D;
            break;
            case 'O': X -= D;
            break;
        }
		if (Y*Y+X*X > lim) {
			cout << "1\n";
			return 0;
		}
	}

	cout << "0\n";
}