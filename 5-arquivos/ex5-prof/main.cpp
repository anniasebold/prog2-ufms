#include "carro.h"
#include<stdio.h>
#define MAX 20

int main()
{
	int op;
	tMarca M[MAX]; // vetor de marcas
	int tamM = 0;  // tam do vetor de marcas
	int codmarca;
	float nota;
	char modelo[TAMSTR];
	int ano;
	tCarro C[MAX];
	int tamC = 0;


	do{
		printf("\n[1] Cadastrar marca\n");
		printf("[2] Buscar Marca\n");
		printf("[3] Cadastrar carro\n");
		printf("[4] Listagem carros\n");
		printf("[5] Remover marca\n");
		
		printf("[6] Sair\n");
		printf("Opcao:\n");
		scanf("%d", &op);

		if(op == 1)
		{
			printf("\nDigite codigo da marca: ");
			scanf("%d", &codmarca);
			printf("Digite nota da marca: ");
			scanf("%f", &nota);

			inserirM(M, tamM, codmarca, nota);
		}
		else if(op == 2)
		{
			printf("\nDigite codigo da marca: ");
			scanf("%d", &codmarca);

			printf("Resultado da busca: %.1f\n", buscaMarca(M, tamM, codmarca));
		}
		else if(op == 3)
		{
			printf("\nDigite codigo da marca do carro: ");
			scanf("%d", &codmarca);

			if(buscaMarca(M, tamM, codmarca) == 0.0)
				printf("Marca não existe.\n");
			else{
				printf("Digite modelo do carro: ");
				scanf(" %[^\n]", modelo);
				printf("\nDigite ano do carro: ");
				scanf("%d", &ano);

				inserirC(C, tamC, modelo, ano, codmarca);
			}
		}
		else if(op == 4)
		{
			listagem(M, tamM, C, tamC);
		}
		else if(op == 5){
			
		} 

	}while(op != 6);

	return 0;
}