#include <stdio.h>

// constantes
#define TAM 5
#define MAX 60

// definicao de tipos
struct tData {
  int dia;
  int mes;
  int ano;
};

struct tAgenda {
	char compromisso[MAX];
  tData data;
};

void leitura(tAgenda agenda[TAM]);

void listagem(tAgenda agenda[TAM], int M, int A);

// funcao principal
int main() {
  tAgenda agenda[TAM];
  int M, A;

  leitura(agenda);
  do {
    scanf("%d/%d", &M, &A);
    listagem(agenda, M, A);
  } while(M != 0);

  return 0;
}

void leitura(tAgenda agenda[TAM]){
  int i;
  for (i = 0; i < TAM; i++) {
    scanf(" %[^\n]", agenda[i].compromisso);
    scanf("%d/%d/%d", &agenda[i].data.dia, &agenda[i].data.mes, &agenda[i].data.ano); 
  }
}

void listagem(tAgenda agenda[TAM], int M, int A) {
  int i;
  for (i = 0; i < TAM; i++) {
    if(agenda[i].data.ano == A && agenda[i].data.mes == M) {
      printf("%s\n", agenda[i].compromisso);
    }
  }
}