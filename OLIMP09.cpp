/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - OLIMP09 - Olimpiadas
** 20/05/2016
*/

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;

struct pais {
    int ouro, prata, bronze, id;
    bool operator< (pais ot) const {
        if (ouro != ot.ouro) 
        	return ouro > ot.ouro;
        if (prata != ot.prata) 
        	return prata > ot.prata;
        return bronze > ot.bronze;
    }
};

pais ordem[110];

int main() {
	int nPaises, mModal, ouro, prata, bronze;
    
    cin >> nPaises >> mModal;
    
    for (int i = 0; i < nPaises; i++) 
    	ordem[i].id = i+1;

    for (int i = 0; i < mModal; i++) {
        scanf("%d %d %d", &ouro, &prata, &bronze);
        ordem[ouro-1].ouro++;
        ordem[prata-1].prata++;
        ordem[bronze-1].bronze++;
    }

    stable_sort(ordem, ordem+nPaises);
    for (int i = 0; i < nPaises; i++)
        cout << ordem[i].id << " ";
}