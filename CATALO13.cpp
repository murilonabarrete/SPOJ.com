/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - CATALO13 - Catalogo de Musicas
** 27/05/2016
*/

#include <iostream>
#include <vector>
#include <map>
#include <cstring>

using namespace std;

vector<int> sQuebra(string ent);
int trad(string str);
void mResp(int index, int indexF);
void encontraResp(int index);

int N, big = 100000, subP[100000], tamP[100000], procura[100000], respF;
vector<int> auxP[100000];

map<string, int> busca;

int main() {
	int i, j, u, v, ini;
	char arquivo[1000000];
		
	cin >> N;

	busca[""] = 0;
	for (i = 0; i < N; i++) {
		cin >> arquivo;
		ini += strlen(arquivo);
		vector<int> caminho = sQuebra(string(arquivo));
		subP[caminho[caminho.size()-1]]++;

		for (j = 0; j + 1 < caminho.size(); j++) {
			u = caminho[j];
			v = caminho[j + 1];
			auxP[u].push_back(v);
		}
	}
	encontraResp(0);
	respF = ini;
	memset(procura, 0, sizeof procura);
	mResp(0, ini);
	cout << respF << "\n";
}

vector<int> sQuebra(string ent) {
	int i, strB = 0, indexP = -1, indexMp;
	vector<int> art(1);
	for (i = 0; i < ent.size(); i++) {
		if (ent[i] == '/') {
			string mounted = ent.substr(strB, i - strB);
			indexMp = trad(mounted);
			art.push_back(indexMp);
			strB = i + 1;
		}
	}
	return art;
}

int trad(string str) {
	if (busca.count(str) == 0) {
		tamP[busca.size()] = str.size() + 1;
		int position = busca.size();
		busca[str] = position;
	}
	return busca[str];
}

void mResp(int index, int indexF) {
	int i, temp, solN;
	for (i = 0; i < auxP[index].size(); i++) {
		temp = auxP[index][i];

		if (procura[temp])
			continue;
		solN = indexF-tamP[temp]*subP[temp]+3*(N-subP[temp]);

		if (respF > solN)
			respF = solN;
		mResp(temp, solN);
		procura[temp] = 1;
	}
}

void encontraResp(int index) {
	int i, temp;
	for (i = 0; i < auxP[index].size(); i++) {
		temp = auxP[index][i];
		
		if (procura[temp])
			continue;
		encontraResp(temp);
		procura[temp] = 1;
		subP[index] += subP[temp];
	}
}