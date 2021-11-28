#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TAM 40

/*tipo struct para marca */
struct tipomarca {
  int codmarca;
  char nome[TAM];
  struct tipomarca *ant;
  struct tipomarca *prox;
};

/*tipo struct para carro */
struct tipocarro {
  int codmarca;   // codigo da marca do carro
  int codcarro;   // codigo do carro
  struct tipocarro *prox;
};


tipomarca* buscarMarca(tipomarca* M, char *s);

void inserirMarca (tipomarca *&marca, int codmarca, char* nome);

tipocarro* inserirCarro(tipocarro* lst, int codmarca, int codcarro);

void listarMarca(tipomarca* );

void listarCarro(tipocarro* );

void desalocarCarro(tipocarro*&L);