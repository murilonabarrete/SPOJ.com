/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - COPA14 - Copa do Mundo
** 05/06/2016
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool funcCombina(int auxX, int auxY, int i);
int funcEncontra(int auxX);
vector <pair <int, pair <int, int> > > caminho;
pair <int, int> auxF(0, 0);
int pai[1000], nivel[1000];

int main() {
  	int i, N, F, R, A, B, C;

	cin >> N >> F >> R;

    for (i = 0; i < F + R; i++) {
	    cin >> A >> B >> C;
    	caminho.push_back(make_pair(C, make_pair(A, B)));
  	}

    sort(caminho.begin(), caminho.begin()+F);
  	sort(caminho.begin()+F, caminho.end());

  	for (i = 0; i < N; i++) {
    	pai[i] = i;
    	nivel[i] = 0;
  	}

  	for (i = 0; i < (int)caminho.size(); i++) {
    	A = caminho[i].second.first; 
    	B = caminho[i].second.second;
    	C = caminho[i].first;
    	
    	if (funcCombina(A, B, i)) {
      		auxF.first++;
      		auxF.second += C;
    	}
  	}

	cout << auxF.second << "\n";
}

bool funcCombina(int auxX, int auxY, int i) {
  	auxX = funcEncontra(auxX), auxY = funcEncontra(auxY);

  	if (auxX == auxY) 
  		return false;

  	if (nivel[auxX] > nivel[auxY]) 
  		swap(auxX, auxY);

  	pai[auxX] = auxY;
  	if (nivel[auxX] == nivel[auxY]) 
  		nivel[auxY]++;

  	return true;
}

int funcEncontra(int auxX) {
  	if (auxX == pai[auxX]) 
  		return auxX;
  	return pai[auxX] = funcEncontra(pai[auxX]);
}