#include <iostream>

using namespace std;

bool verificaLinha(int n, int *p);
bool verificaColuna(int n, int *p);
bool verificaQuadrado(int n, int *p);

int main() {
	int n;
	cin >> n;

	int matriz[9*n][9*n], *p;
	p = matriz[0];

	for (int aux = 1; aux <= n; aux++) {
		for (int i = 0; i < 9*n; i++) {
			for (int j = 0; j < 9; j++) {
				cin >> matriz[i][j];
			}
		}
	}

	for (int aux = 1; aux <= n; aux++) {
		cout << "\nInstancia " << aux << "\n";
		if (verificaLinha(n, p))
			if (verificaColuna(n, p)) 
				if (verificaQuadrado(n, p))
					cout << "SIM\n";
				else
					cout << "NAO\n";
	}

}

bool verificaLinha(int n, int *p) {
	return true;
}

bool verificaColuna(int n, int *p) {
	return true;
}

bool verificaQuadrado(int n, int *p) {
	return true;
}