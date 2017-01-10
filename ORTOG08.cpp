/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - ORTOG08 - Ortografia
** 31/05/2016
*/

#include <iostream>
#include <string>

using namespace std;
int testa(int M, string& a, string& b);
int t[50][10];

int main () {
	int i, j, N, M;
	string local[2000], aux[1000];

    cin >> N >> M;
  
    for (i = 0; i < N; i++) 
    	cin >> local[i];
    for (j = 0; j < M; j++) 
    	cin >> aux[j];
  
    for (i = 0; i < M; i++) {
    	for (j = 0; j < N; j++) {
        	if (testa(M, local[j], aux[i]))
            	cout << local[j] << " ";
    	}
    	cout << "\n";  	
    }
}

int testa (int M, string& x, string& y) {
    int X1 = x.size(), X2 = y.size();
  	for (int i = 0; i <= 2; i++) t[0][i+2] = i;

    for (int i = 1; i <= X1; i++) {
    	for (int j = -2; j <= 2; j++) {
        	if (i+j < 0 && i+j > X2) continue;
        	if (i+j == 0) {
	        	t[i][j+2] = i;
		        continue;
      		}      
      		if (x[i-1] == y[i+j-1]) 
      			t[i][j+2] = t[i-1][j+2];
      		else {
        		t[i][j+2] = t[i-1][j+2]+1;
        		if (j != 2) 
        			t[i][j+2] = min(t[i][j+2], t[i-1][j+3]+1);
        		if (j != -2) 
        			t[i][j+2] = min(t[i][j+2], t[i][j+1]+1);
  			}
		}
	}
  
  	M = 10;
  	for (int i = -2; i <= 2; i++) {
    	if (X1 + i < 0 || X1 + i > X2) 
    		continue;
    	M = t[X1][i+2] + X2 - X1 - i;
  	}
  	return (M < 3);
}