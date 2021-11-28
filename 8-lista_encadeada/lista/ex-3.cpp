#include<stdio.h>
#include<stdlib.h>

#define MAX 100

struct celula{
  int valor;
  struct celula *prox;
};

void empilhar(int n, celula *&lst){
  celula *novo;

  novo = (celula*) calloc(1, sizeof(celula));
  novo->valor = n;
  novo->prox = lst;
  lst = novo;
}

void binario(celula *lst){
  int aux = lst->valor;
  int bin[MAX];
  int x = 0;
  
  if(lst->valor == 0){
    printf("%d", 0);
  }
  else{
    while(aux >= 1){
      bin[x] = aux % 2;
      aux = aux / 2;
      x++;
    }

    for (int i = x - 1; i >= 0; i--){
      printf("%d", bin[i]);
    }
  }
}

int main() {
  celula *lista = NULL;
  int num;

  scanf("%d", &num);
  empilhar(num, lista);

  binario(lista);
}