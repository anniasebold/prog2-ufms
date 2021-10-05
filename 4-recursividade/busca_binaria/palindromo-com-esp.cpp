#include <stdio.h>
#include <string.h>
#define MAX 50

// funcao retorna true se str e palindrome e false caso contrario
bool ehPalindome(int i, int j, char *str) {
	if(i < j) {
		if(str[i] != ' ' && str[j] != ' '){

			if (str[i] != str[j])
				return false;
			else 
				return ehPalindome(i+1, j-1, str);
		
		}

		else if(str[i] == ' ' && str[j] != ' ')
			return ehPalindome(i+1, j, str);

		else if(str[i] != ' ' && str[j] == ' ')
			return ehPalindome(i, j-1, str);

	}
	return true;
}

int main() {
	char nome[MAX];
	//int n;
  
	printf("Digite nome: ");
	scanf(" %[^\n]", nome);

	
	printf("Eh palindrome? %d\n", ehPalindome(0, strlen(nome)-1, nome));

	return 0;
}