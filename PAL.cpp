 /*
** Nome: Murilo Baliani Nabarrete
** R.A. 11115013
** Praticas Avançadas de Programacao C
** Exercicio: SPOJ - PAL - Palindrome
** 18/04/2016
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	int i, j, n;
	string palavra;
	bool teste;

	while (true) {
		cin >> n;
		if(n == 0) 
			break;
		
		cin >> palavra;
		teste = true;
		if (palavra.size() == 3)
			if(palavra[0] != palavra[2]) 
				teste = false;
		else {
			j = palavra.size()-1;
			for (i = 0; i < (palavra.size()/2); i++) {
				if (palavra[i] != palavra[j]) {
					teste = false;
					break;
				}
				j--;
			}
		}
		if (teste) 
			cout << "sim\n";
		else 
			cout << "nao\n";
	}
}