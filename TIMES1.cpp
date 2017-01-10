/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - TIMES1 - Times
** 04/04/2016
	INCOMPLETO, NAO FUNCIONANDO
*/

#include <iostream>

using namespace std;

int main() {
	int i, j, li, col, N, T, niveis[10000], aux;
	
	cin >> N >> T;

	string nomes[10000], times[10000][T], auxnomes;

	for (i = 0; i < N; i++) {
		cin >> nomes[i];
		cin >> niveis[i];
		for (j = i; j > 0; j--) {
			if (niveis[j] > niveis[j-1]) {
				aux = niveis[j-1];
				auxnomes = nomes[j-1];
				niveis[j-1] = niveis[j];
				nomes[j-1] = nomes[j];
				niveis[j] = aux;
				nomes[j] = auxnomes;
			}
		}

	}

	li = 0;
	col = 0;
	for (i = 0; i < N; i++) {
		times[li][col] = nomes[i];
		for (j = li; j > 0; j--) {
			if (times[j][col][0] < times[j-1][col][0]) {
				auxnomes = times[j-1][col];
				times[j-1][col] = times[j][col];
				times[j][col] = auxnomes;
			}
			else if (times[j][col][0] == times[j-1][col][0]) {
				if (times[j][col][1] < times[j-1][col][1]) {
					auxnomes = times[j-1][col];
					times[j-1][col] = times[j][col];
					times[j][col] = auxnomes;		
				}
				else if (times[j][col][1] == times[j-1][col][1]) {
					if (times[j][col][2] < times[j-1][col][2]) {
						auxnomes = times[j-1][col];
						times[j-1][col] = times[j][col];
						times[j][col] = auxnomes;		
					}
					else if (times[j][col][2] == times[j-1][col][2]) {
						if (times[j][col][3] < times[j-1][col][3]) {
							auxnomes = times[j-1][col];
							times[j-1][col] = times[j][col];
							times[j][col] = auxnomes;		
						}
						else if (times[j][col][3] == times[j-1][col][3]) {
							if (times[j][col][4] < times[j-1][col][4]) {
								auxnomes = times[j-1][col];
								times[j-1][col] = times[j][col];
								times[j][col] = auxnomes;		
							}
							else
								break;
						}
						else
							break;
					}
					else
						break;
				}
				else
					break;
			}
			else
				break;
		}
		col++;
		if (col == T) {
			col = 0;
			li++;
		}
	}

	for (i = 0; i < T; i++) {
		cout << "Time " << i+1 << "\n";
		for (j = 0; j < (N/T)+1; j++) {
			cout << times[j][i] << "\n";
		}
		if ((i+1) == (N%T))
			cout << "\n";
	}
	
}