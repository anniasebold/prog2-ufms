/*
PROGRAMA QUE CRIA UMA LISTA DINAMICA DUPLAMENTE ENCADEADA
AS OPERACOES REALIZADAS NA LISTA SAO:
- INSERCAO NA LISTA
- REMOCAO DE UM ELEMENTO QUALQUER
- IMPRESSAO DA LISTA
*/
#include "listadupla.h"
#include <stdio.h>



/**/
int main()
{
    celula *listaD = NULL;  /*lista duplamente sem cabeca vazia*/

    int num, op;

    do{

        printf("\n\n1 - Inserir no inicio da lista");
        printf("\n2 - Remover numero da lista");
        printf("\n3 - Imprimir lista");
        printf("\n4 - Sair");
        printf("\nOpcao: ");
        scanf("%d", &op);

        if(op == 1)
        {
            scanf("%d", &num);
            inserir_inicio(num, listaD);
        }
        else if(op == 2)
        {
            scanf("%d", &num);
            remover(num, listaD);
        }
        else if(op == 3)
        {
            imprime_lista(listaD);

        }
    }while(op != 4);

    /*apagar toda a lista duplamente encadeada alocada dinamicamente*/

    return 0;
}
