/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - CORRID13 - Corrida
** 27/05/2016
*/

#include <iostream>

using namespace std;

int main() {
	double N1, Dist1, Vel1, N2, Dist2, Vel2, t1, t2;

	cin >> N1 >> Dist1 >> Vel1;
	cin >> N2 >> Dist2 >> Vel2;

	t1 = Dist1/Vel1;
	t2 = Dist2/Vel2;

	if (t1 < t2)
		cout << N1 << "\n";
	else
		cout << N2 << "\n";
}