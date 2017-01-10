/*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - ESTAGIO - Estagio
** 29/03/2016
*/

#include <iostream>
using namespace std;
const int MAX_ALUNOS = 1000;

int main() {
	int i, indice_melhor, melhores[1000], aux, n;
	int turma = 1;
	struct {
		int codigo, media;
	} alunos[MAX_ALUNOS];

	// le numero de alunos da primeira turma
	cin >> n;
	while (n > 0) {
		// le dados dos alunos
		for (i = 0; i < n; i++)
    		cin >> alunos[i].codigo >> alunos[i].media;
	
		// procura aluno de maior media
		aux = 0;
		indice_melhor = 0;
		for (i = 1; i < n; i++)
		    if (alunos[i].media > alunos[indice_melhor].media)
		        indice_melhor = i;
		for (i = 0; i < n; i++)
			if (alunos[i].media == alunos[indice_melhor].media) {
				melhores[aux] = i;
				aux++;
			}
	
	    // escreve resposta
		cout << "Turma " << turma++ << "\n";
		for (i = 0; i < aux; i++)
			cout << alunos[melhores[i]].codigo << " ";
		cout << "\n\n";
	
		// le numero de alunos da proxima turma
		cin >> n;
	}
}