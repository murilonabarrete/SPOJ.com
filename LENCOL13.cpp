/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - LENCOL13 - Lençol
** 27/05/2016
*/

#include <iostream>

using namespace std;
int test(int A, int B, int Ax, int Bx);

int main() {
	int i, A1, B1, A2, B2, A, B;
	bool teste = false;

	cin >> A1 >> B1;
	cin >> A2 >> B2;
	cin >> A >> B;
	
	if (test(A, B, A1, B1) || test(A, B, A2, B2))
		teste = true;
	
	for(i = 0; i <= A; i++) {
		if (test(B, i, A1, B1) && test(B, A-i, A2, B2)) 
			teste = true;

		if (test(B, i, A2, B2) && test(B, A-i, A1, B1)) 
			teste = true;
	}
	for (i = 0; i <= B; i++) {
		if(test(A, i, A1, B1) && test(A, B-i, A2, B2)) 
			teste = true;
		if(test(A, i, A2, B2) && test(A, B-i, A1, B1)) 
			teste = true;
	}

	if (teste)
		cout << 'S' << "\n";
	else 
		cout << 'N' << "\n";
}

int test(int A, int B, int Ax, int Bx) {
	if (A <= Ax && B <= Bx)
		return 1;
	if (A <= Bx && B <= Ax)
		return 1;
	return 0;
}