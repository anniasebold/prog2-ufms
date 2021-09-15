#include<stdio.h>
#define TAM 50

// prototipo
void leitura(int v[TAM], int n);
void impressao(int v[TAM], int n);
int removeMinimo(int v[TAM], int &n);

int main()
{
	int opcao;		// opcao do menu
	int vetor[TAM]; // vetor de números
	int n;			// numero de elementos a armazenar no vetor

	do{
		printf("\n[1] Inserir vetor\n");
		printf("[2] Imprimir vetor\n");
		printf("[3] Remover o menor elemento\n");
		printf("[4] Sair\n");
		printf("\nSua escolha: ");
		scanf("%d", &opcao);

		if(opcao == 1)
		{
		    printf("\nDigite o tamanho do vetor: ");
            scanf("%d", &n);

			// chamada da funcao para leitura do vetor
            leitura(vetor,n);
		}
		else if(opcao == 2)
		{
            // chamada da funcao para impressao do vetor
            impressao(vetor,n);
            printf("\n");


		}
		else if(opcao == 3)
		{
            printf("%d", removeMinimo(vetor, n));
            printf("\n");

		}

	}while(opcao != 4);

	return 0;
}

void leitura(int v[TAM], int n) {

    int i;

    for(i = 0; i < n; i++){
        printf("Digite o valor que vai coluna %d: ", i);

        fflush(stdin);
        scanf("%d", &v[i]);
    }
}

void impressao(int v[TAM], int n) {
    int i;

    for(i = 0; i < n; i++){
        printf("%d\t", v[i]);
    }

}

int removeMinimo(int v[TAM], int &n){

    int i;
    int pos = 0;
    int menor = 0;

    for(i = 0; i < n; i++){
        if (i == 0) {
            menor = v[i];
        }
        else {
            if (v[i] < menor) {
                menor = v[i];
                pos = i;
            }
        }
    }

    for(i = pos; i < n - 1; i++) {
        v[i] = v[i + 1];
    }

    n = n - 1;

    return menor;

}