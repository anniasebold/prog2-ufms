/*
PROGRAMA QUE CRIA UMA LISTA DINAMICA ENCADEADA
AS OPERACOES REALIZADAS NA LISTA SAO:
- INSERIR LISTA 1
- INSERIR LISTA 2
- CONCATENAR
- IMPRESSAO DAS LISTAS
*/
#include "lista.h"
#include <stdio.h>



/**/
int main()
{
    
    int num, op;

    do{

        printf("\n\n1 - Inserir na lista 1");
        printf("\n2 - Inserir na lista 2");
        printf("\n3 - Concatenar listas");
        printf("\n4 - Imprimir listas");
        printf("\n5 - Sair");
        printf("\nOpcao: ");
        scanf("%d", &op);

        if(op == 1)
        {
            scanf("%d", &num);
            
        }
        else if(op == 2)
        {
			scanf("%d", &num);
            
        }
        else if(op == 3)
        {

        }
        else if(op == 4)
        {

        }

    }while(op != 5);

    /*apagar toda a lista encadeada alocada dinamicamente*/


//    printf("Ponteiro apos desalocar a lista: %p\n", lista);

    return 0;
}
