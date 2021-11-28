#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"


// Desaloca todos os nos da pilha
void desalocarP(celula *&lst) {
    celula *aux;
    while(lst)         // lst != NULL
    {
        aux = lst;
        lst = lst->prox;
        free(aux);
    }
    //lst = NULL;
}


/*Fun��o recebe o ponteiro para o topo da pilha, cria um novo n�(c�lula) para
armazenar x e coloca esse n� como topo da pilha*/
void empilharI(int x, celula *&lst) {
    celula *nova;

    nova = (celula *) malloc(sizeof (celula));
    nova->chave = x;
    nova->prox = lst;
    lst = nova;
}

/*Fun��o recebe o ponteiro para o topo da pilha, desempilha e retorna o valor do topo*/
int desempilharI(celula *&lst) {
    celula *aux;
    int num;

    if(lst == NULL)
        return -1;
    else{
        num = lst->chave;
        aux = lst;
        lst = lst->prox;
        free(aux);
        return num;
    }
}


/*Fun��o recebe o ponteiro para o topo da pilha e imprime todos os n�s (c�lulas)
da pilha*/
void imprimePI(celula *lst) {
    celula *p;

    for (p = lst; p != NULL; p = p->prox)
        printf("%d ", p->chave);
}

