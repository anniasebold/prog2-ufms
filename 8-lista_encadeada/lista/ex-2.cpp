#include <stdio.h> /*printf*/
#include <stdlib.h> /*malloc, calloc, free*/

struct celula {
    int chave;
    struct celula *prox;
};

void inserir(int n, celula* &lst);
void imprimir(celula *lst);
void desalocar(celula* &L);

int main() {
    celula *lista = NULL;  /*lista sem cabeca vazia*/

    int num = 0, count = 0;

    while (num >= 0) {
      scanf("%d", &num);
      if (num >= 0) {
        inserir(num, lista);
        count += num;
      }
    }
    
    printf("%d", count);
    printf("\n");

    /*apagar toda a lista encadeada alocada dinamicamente*/
    desalocar(lista);

    //printf("Ponteiro apos desalocar a lista: %p\n", lista);
}

void imprimir(celula *lst) {
    celula *p;
    for(p = lst; p != NULL; p = p->prox)
        printf("%d ", p->chave);

}


void inserir(int n, celula* &lst) {
    celula *novo, *p;

    novo = (celula*) malloc(sizeof(celula));
    novo->chave = n;
    novo->prox = NULL;

    if(lst == NULL)
        lst = novo;
    else {
        p = lst;
        while(p->prox != NULL)
            p = p->prox;

        p->prox = novo;
    }
}

void desalocar(celula* &L) {
    celula *aux;

    while( L != NULL) {
        aux = L;

        L = aux->prox;

        free(aux);
    }
}