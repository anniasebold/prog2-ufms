/*Escreva um programa para realizar operacoes sobre um vetor, conforme menu a segui

[1] - Inserir vetor
[2] - Imprimir vetor
[3] - Remover o menor elemento
[4] - Sair

Opcao 1 - o usuario informa n, a quantidade de elementos a inserir no vetor, seguido dos 
elementos. Considere que n <= 50. Sempre que a opcao 1 for escolhida o usuario podera 
informar um novo vetor. Utilize uma funcao 'leitura' para realizar a leitura dos n
elementos do vetor

Opcao 2 - o programa deve imprimir o vetor atual com n elementos. Utilize a funcao 
'impressao' para realizar a impressao dos elementos

Opcao 3 - o programa deve imprimir o menor elemento, bem como remove-lo do vetor. 
Observe que, com a remocao de um elemento, o valor de n deve ser alterado.
Crie uma função removeMinimo para ser usada nesta opcao. A função deve receber o vetor, 
remover o menor elemento (considere que nao ha repeticao no vetor),
retornando para a funcao main o valor que foi removido. Além disso, o valor de n deve
ser alterado dentro da funcao removeMinimo.
*/

#include<stdio.h>
#define TAM 50

// prototipo
void leitura(int v[TAM], int n);
void impressao(int v[TAM], int n);
int removeMinimo(int v[TAM], int n);

int main() {
  int opcao;		// opcao do menu
  int vetor[TAM]; // vetor de números
  int n;  	// numero de elementos a armazenar no vetor
  int menorElemento;

  do{
    printf("\n[1] Inserir vetor");
    printf("\n[2] Imprimir vetor");
    printf("\n[3] Remover o menor elemento");
    printf("\n[4] Sair\n");
    scanf("%d", &opcao);
    
    if(opcao == 1){
      scanf("%d", &n);
      leitura(vetor, n);
    }
    else if(opcao == 2) {
      impressao(vetor, n);
    }
    else if(opcao == 3) {
      printf("Menor elemento: %d", removeMinimo(vetor, n));
    }

  }while(opcao != 4);

  return 0;
}

void leitura(int v[TAM], int n) {
  int i;
  for (i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }
}

void impressao(int v[TAM], int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("%d ", v[i]);
  }
}

int removeMinimo(int v[TAM], int n) {
  int i, menorElemento, indiceMenor;
  menorElemento = v[0];
  for (i = 0; i < n; i++) {
    if (v[i] < menorElemento) {
      menorElemento = v[i];
      indiceMenor = i;
    }
  }
  for (i = indiceMenor; i < n-1; i++) {
    v[i] = v[i+1];
  }
  n = n-1;
  return menorElemento;
}