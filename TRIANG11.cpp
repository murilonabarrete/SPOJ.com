/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - TRIANG11 - Triangulos
** 02/05/2016
*/
 
#include <iostream>

using namespace std;

int main() {
	int A, B, C;

	cin >> A >> B >> C;

	if (A+B > C && A+C > B && B+C > A) {
		if (A == B && B == C && A == C) {
			cout << "a\n";
		}
		else if (A*A == B*B+C*C || B*B == A*A+C*C || C*C == A*A+B*B) {
			cout << "r\n";
		}
		else {
			cout << "o\n";
		}
	}
	else
		cout << "n\n";
}