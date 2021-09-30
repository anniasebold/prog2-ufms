#include <stdio.h>
#include<string.h>

#define MAX 20

struct tipoA {
	char nome[MAX+1];
	int op1, op2;
};

// PROTOTIPO DAS FUNCOES
int buscaIguais (int n, tipoA *v);
int maiorSelecionado(int n, tipoA *v);


int main() {
	int n, i, indice;
  tipoA v[MAX];

	// leitura de n
	scanf("%d", &n);
	// leitura do vetor
  for (i = 0; i < n; i++) {
    scanf(" %s %d %d", v[i].nome, &v[i].op1, &v[i].op2);
  }

	// chamada da funcao para calcular a quantidade de vezes da mais escolhida
  printf("%d\n", maiorSelecionado(n, v));

	// chamada da funcao para verificar aluno que informou as 2 optativas iguais
  indice = buscaIguais(n, v);

  if(indice >= 0){
    printf("%s\n", v[indice].nome);
  } else {
    printf("Inexistente");
  }

	return 0;
}

// CORPO DAS FUNCOES
int buscaIguais(int n, tipoA *v) {
  int i, indice = 0;

  for (i = 0; i < n; i++) {
    if(v[i].op1 == v[i].op2) {
      indice = i;
      return indice;
    }
  }
  return -1;
}

int maiorSelecionado(int n, tipoA *v) {
  int i, count, var, aux = 0;

  for(var = 1; var < 20; var++) {
    count = 0;
    for (i = 0; i < n; i++) {
      if(v[i].op1 == var) {
        count += 1;
      }
      if(v[i].op2 == var){
        count += 1;
      }
    }
    if(var == 1){
      aux = count;
    } 
    else if(count > aux){
      aux = count;
    }
  }
  return aux;
}