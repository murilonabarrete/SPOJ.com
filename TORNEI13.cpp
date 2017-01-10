/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - TORNEI13 - Torneio
** 01/06/2016
*/

#include <iostream>

using namespace std;
const int numGrande = 1000000007;
long long defineJogo(int n,int k);

int main() {
    int i, Nrodadas, Krodadas, aux, temp, piorJogad = 0, melhorJogad = 0;
    long long respF;

    cin >> Nrodadas >> Krodadas >> aux;
    for(i = 1; i < (1<<Nrodadas); i++) {
        cin >> temp;
        if(temp > aux) 
        	melhorJogad++;
        else 
        	piorJogad++;
    }

    if(Krodadas <= Nrodadas) {
        respF = ((1ll<<(Krodadas-1))*defineJogo(piorJogad,(1<<(Krodadas-1))-1))%numGrande;
        respF *= defineJogo((1<<Nrodadas)-((1<<(Krodadas-1))),(1<<(Krodadas-1)))-defineJogo(piorJogad-((1<<(Krodadas-1))-1),(1<<(Krodadas-1)));
        respF %= numGrande;
        respF *= (1<<(Nrodadas-Krodadas+1));
        respF %= numGrande;
        respF *= defineJogo((1<<Nrodadas)-(1<<Krodadas),(1<<Nrodadas)-(1<<Krodadas));
        cout << (respF%numGrande+numGrande)%numGrande << "\n";
    }
    else {
        if(melhorJogad > 0)
        	cout << "0\n";
        else 
        	cout << defineJogo((1<<Nrodadas),(1<<Nrodadas)) << "\n";
    }
}

long long defineJogo(int Nrodadas, int Krodadas) {
	int i;
    long long jogadorX = 1;
    for(i = 0; i < Krodadas; i++) {
        jogadorX *= Nrodadas-i;
        jogadorX %= numGrande;
    }
    return jogadorX;
}