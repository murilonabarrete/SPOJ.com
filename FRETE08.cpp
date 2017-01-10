/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - FRETE08 - Frete da Familia
** 26/05/2016
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;

#define SIZE 1001

struct conj {
    int cont;
    int main[SIZE];
    int rank[SIZE];
};

struct aresta {
    int u;
    int v;
    int peso;
};

typedef struct conj * conjunto_aux;
typedef struct conj conjunto;

int search(vector<aresta>& arestas, int n);
bool comparacao(const aresta& x, const aresta& y);

int main() {
    int n, m, i;
    aresta are1;
    vector<aresta> arestas;
    cin >> n >> m;
    
    for (i = 0; i < m; i++) {
        cin >> are1.u >> are1.v >> are1.peso;
        arestas.push_back(are1);
    }
    
    cout << search(arestas, n+1) << "\n";
}

void conjIni(conjunto_aux conjA, int cont) {
    int i;
    conjA->cont = cont;
    memset(conjA->main, 0, cont*sizeof(int));
    memset(conjA->rank, 0, cont*sizeof(int));

    for (i = 0; i < cont; ++i)
        conjA->main[i] = i;
}

int conjFim(conjunto_aux conjA, int i) {
    if (i != conjA->main[i])
        conjA->main[i] = conjFim(conjA, conjA->main[i]);
    return conjA->main[i];
}

void conjMeio(conjunto_aux conjA, int i, int j) {
    int x = conjFim(conjA, i);
    int y = conjFim(conjA, j);

    if (conjA->rank[x] > conjA->rank[y])
        conjA->main[y] = x;
    else {
        conjA->main[x] = y;
        if (conjA->rank[x] == conjA->rank[y])
            conjA->rank[y]++;
    }
}

int search(vector<aresta>& arestas, int n) {
    int i;
    sort(arestas.begin(), arestas.end(), comparacao);

    conjunto conj;
    conjIni(&conj, n);
    int resp = 0;

    for (i = 0; i < arestas.size(); ++i) {
        struct aresta are1 = arestas[i];
        int uset = conjFim(&conj, are1.u);
        int vset = conjFim(&conj, are1.v);
        if (uset != vset) {
            resp += are1.peso;
            conjMeio(&conj, uset, vset);
        }
    }

    return resp;
}

bool comparacao(const aresta& x, const aresta& y) {
    return x.peso < y.peso;
}