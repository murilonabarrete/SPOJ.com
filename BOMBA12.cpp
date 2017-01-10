/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - BOMBA12 - Bomba
** 02/06/2016
*/

#include <iostream>
#include <cstring>

using namespace std;
#define funcaoF(a,b,c) for(int (a) = (b); (a) < (c); ++a)
#define funcaoP make_pair
pair<int,int> fila[20000];

int main() {
	int N, M, X, Y, a, b, c, enderecoX, cont = 1, nzinho[501], diferente[501][3], aux[501][3], aux2, aux3, temp[501][501][2];

	cin >> N >> X >> Y >> M;

	memset(diferente, 0x3f, sizeof diferente);
	memset(aux, 0, sizeof aux);
	
	funcaoF(i, 0, N)
	nzinho[i] = 0;
	
	funcaoF(i, 0, M){
		cin >> a >> b >> c;
		temp[a][nzinho[a]][0] = b;
		temp[a][nzinho[a]++][1] = c;
	}

	fila[0] = funcaoP(X, 0);
	diferente[X][0] = 0;

	funcaoF(pos, 0, cont) {
		enderecoX = fila[pos].first, c = fila[pos].second;
		if (aux[enderecoX][c])
			continue;
		aux[enderecoX][c] = 1;
		if (enderecoX == Y) {
			cout << diferente[enderecoX][c] << endl;
			return 0;
		}
		funcaoF(j, 0, nzinho[enderecoX]) {
			aux2 = temp[enderecoX][j][0];
			aux3 = temp[enderecoX][j][1];
			if(!c xor aux3)
				continue;
			if(diferente[aux2][(c+1)%3] > diferente[enderecoX][c] + 1) {
				diferente[aux2][(c+1)%3] = diferente[enderecoX][c] + 1;
				fila[cont++] = funcaoP(aux2, (c+1)%3);
			}
		}
	}

	cout << "*" << endl;
}