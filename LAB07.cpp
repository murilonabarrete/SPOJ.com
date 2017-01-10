/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - LAB07 - Labirinto
** 23/05/2016
*/

#include <iostream>
#include <queue>
#include <cstdio> 

using namespace std;

struct labirinto {
	int x, y, t;
	labirinto(int _x, int _y, int _t) : x(_x), y(_y), t(_t) {}
};

int main() {
	int n, m, i, j, k, ans, board[100][100], dist[100][100][100], X1, Y1, X2, Y2, t, h, O;

	cin >> n >> m;

	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			cin >> board[i][j];

	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			for (k = 0; k < 10; k++)
				dist[i][j][k]=-1;

	queue<labirinto> q;
	dist[0][0][0] = 0;
	q.push(labirinto(0,0,0));
	ans = -1;
	while (!q.empty()) {
		labirinto cur = q.front();

		if (cur.x == n-1 && cur.y == m-1) {
			ans = dist[cur.x][cur.y][cur.t];
			break;
		}

		q.pop();
		for (X1 = -1; X1 <= 1; X1++) {
			for (Y1 = -1; Y1 <= 1; Y1++) {
				if (X1*Y1 != 0 || X1+Y1==0) 
					continue;
				X2 = cur.x+X1;
				Y2 = cur.y+Y1;
				t = cur.t;

				if (X2 < 0 || X2 >= n || Y2 < 0 || Y2 >= m) 
					continue;
				if (dist[X2][Y2][(t+1)%10] != -1) 
					continue;

				h = (board[cur.x][cur.y]+t)%10;
				O = (board[X2][Y2]+t)%10;

				if (O > h+1) 
					continue;

				dist[X2][Y2][(t+1)%10] = dist[cur.x][cur.y][cur.t]+1;
				q.push(labirinto(X2,Y2,(t+1)%10));
			}
		}

		if (dist[cur.x][cur.y][(cur.t+1)%10] == -1) {
			dist[cur.x][cur.y][(cur.t+1)%10] = dist[cur.x][cur.y][cur.t]+1;
			q.push( labirinto(cur.x,cur.y,(cur.t+1)%10));
		}
	}

	cout << ans << "\n";
}