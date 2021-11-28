#include "mc.h"

/*funcao procura a marca com codigo 'codmarca' e retorna o endereco
 do no onde a marca foi encontrada. */
tipomarca* buscarMarca(tipomarca* M, char *s) {
  tipomarca *p;
  
  p = M;
  while(p != NULL && strcmp(p->nome, s) !=0) {
    p = p->prox;
  }
  return p;
}

/*funcao insere uma nova marca na lista*/
void inserirMarca(tipomarca*& marca, int codmarca, char *nomemarca) {
  tipomarca* novo;

  novo = (tipomarca*) calloc (1, sizeof(tipomarca));
  novo->codmarca = codmarca;
  strcpy(novo->nome, nomemarca);
  novo->ant = NULL;
  novo->prox = NULL;

  if(marca == NULL)
    marca = novo;
  else {
    tipomarca *p;

    p = marca;

    novo->ant = p;
    novo->prox = p->prox;
    p->prox = novo;

    marca = p;
  }
}

tipocarro* inserirCarro(tipocarro* lst, int codmarca, int codcarro) {
  tipocarro *novo, *p;

  novo = (tipocarro*) calloc(1, sizeof(tipocarro));
  novo->codmarca = codmarca;
  novo->codcarro = codcarro;
  novo->prox = NULL;

  if(lst == NULL)
    lst = novo;
  else{
    p = lst;
    while(p->prox != NULL)
      p = p->prox;

    p->prox = novo;
  }
  return p;
}


/*funcao imprime os CARROS*/
void listarCarro(tipocarro* l) {
  while(l != NULL) {
    printf("%d %d\n", l->codcarro, l->codmarca);
    l = l->prox;
  }
}


/*funcao imprime as marcas*/
void listarMarca(tipomarca* l) {
  while(l != NULL) {
    printf("%d %s\n", l->codmarca, l->nome);
    l = l->prox;
  }
}

void desalocarCarro(tipocarro*&L) {
  tipocarro *aux;

  while( L != NULL ) {
    aux = L;
    L = aux->prox;
    free(aux);
  }
}