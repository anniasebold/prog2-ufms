#include <stdio.h>
#include <string.h>
#define MAX 100



// chamada externa
// ehpalindrome(0, strlen(str)-1, str)

int ehpalindrome(int i, int j, char *str) {
	if(i < j) { // i > j || i == j
		if(str[i] != str[j]) {
			return 0; // nao eh palindrome
		}

		return ehpalindrome(i+1, j-1, str);
	}

	return 1;
}


int main() {
	char matrizNomes[MAX][MAX], nome[MAX];
	int n, i;

	printf("Qtde de nomes a cadastrar: ");
	scanf("%d", &n);
	printf("Digite %d nomes (1 por linha): ", n);
	for(i = 0; i < n; i++) {
		scanf(" %[^\n]", matrizNomes[i]);
	}

	printf("Nome a pesquisar: ");
	scanf(" %[^\n]", nome);

	printf("Posicao de %s = %d \n", nome, busca_binariaS(n, matrizNomes, nome));

	return 0;
}


int busca_binariaS(int n, char M[MAX][MAX], char *nome) {
	int esq, dir, meio;
	
	esq = -1;
	dir = n;
	while (esq < dir - 1) {
		meio = (esq + dir) / 2; 

		if (  strcmp(M[meio], nome) < 0  ) // v[meio] < x)        
	         esq = meio;
	    else
			dir = meio;
	}



	if(dir == n || strcmp(M[dir], nome) != 0)
		return -1;
	else //if(strcmp(v[dir], nome) == 0)
		return dir;	
}

//strcmp(a,b)   < 0   --> a < b
//strcmp(a,b)   > 0   --> a > b