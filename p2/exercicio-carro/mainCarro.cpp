#include<stdio.h>
#include "mc.h"


/*funcao main*/
int main() {
  int op, codmarca, codcarro;
  char nome[TAM];
  tipomarca *aux;
  tipomarca *marca = NULL;
  tipocarro *carro = NULL;

  do {
    printf("\n1 - Cadastrar marca");
    printf("\n2 - Cadastrar carro");
    printf("\n3 - Remover último carro");
    printf("\n4 - Sair");
    printf("\nOpcao: ");
    scanf("%d", &op);
    
    if(op == 1) {
      printf("Codigo  da marca: ");
      scanf("%d", &codmarca);
      printf("Nome da marca: ");
      scanf("%s", nome);

      inserirMarca(marca, codmarca, nome);
    }
    else if(op == 2) {
      printf("Codigo do carro: ");
      scanf("%d", &codcarro);

      printf("Nome da marca: ");
      scanf("%s", nome);

      aux = buscarMarca(marca, nome);
      if(aux != NULL) {
        carro = inserirCarro(carro, aux->codmarca, codcarro);
      }
      else {
        printf("Marca inválida");
      }
    }
    else if(op == 3) {
      listarMarca(marca);
      listarCarro(carro);
    }
    else if(op == 4) {
      desalocarCarro(carro);
    }
    
  } while(op != 4);

  return 0;
}


