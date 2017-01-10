/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - COLOR11 - Colorindo
** 02/05/2016
*/
 
#include <iostream>
#include <queue>
#include <string.h>

using namespace std;

int matriz[200][200];

int colorindo(int N, int M, int x, int y);

int main () {
	int i, N, M, x, y, K, a, b;
	cin >> N >> M >> x >> y >> K;
	x--;
	y--;
	for (i = 0; i < N; i++) 
		memset(matriz[i], 0, sizeof(int)*M);
	for (i = 0; i < K; i++) {
		cin >> a >> b;
		matriz[a-1][b-1] = 2;
	}
	cout << colorindo(N, M, x, y) << "\n";
}

int colorindo(int N, int M, int x, int y) {
	int cnt = 0;
	int incx[] = {-1, -1, -1, 0, 0, 1, 1, 1}, incy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
	queue<pair<int, int> > fila;
	fila.push(make_pair<int, int>(x, y));
	while (!fila.empty()) {
		x = fila.front().first;
		y = fila.front().second;
		fila.pop();
		if (matriz[x][y] > 0) 
			continue;
		cnt++;
		matriz[x][y] = 1;
		for (int i = 0; i < 8; i++) {
			if (x + incx[i] >= 0 && x + incx[i] < N && y + incy[i] >= 0 && y + incy[i] < M)
				fila.push(make_pair<int, int>(x + incx[i], y + incy[i]));
		}
	}
	return cnt;
}