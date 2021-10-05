#include <stdio.h>
#include<string.h>

// constantes
#define TAM 5
#define MAX 15

// definicao de tipos
struct tEletrodomestico {
	float potencia;
  float tempo;
  char nome[MAX];
};

void leitura(tEletrodomestico eletro[MAX]);

void listagem(tEletrodomestico eletro[MAX]);

// funcao principal
int main() {
  tEletrodomestico eletro[MAX];

  leitura(eletro);
  listagem(eletro);

  return 0;
}

void leitura(tEletrodomestico eletro[MAX]){
  int i;
  for (i = 0; i < TAM; i++) {
    scanf(" %[^\n]", eletro[i].nome);
    scanf(" %f", &eletro[i].potencia);
    scanf(" %f", &eletro[i].tempo);
  }
}

void listagem(tEletrodomestico eletro[MAX]) {
  int i;
  float t, consumoDiario = 0, consumo = 0, consumoRelativo = 0, consumoTotal = 0;
  scanf(" %f", &t);
  for (i = 0; i < TAM; i++) {
    consumoDiario = eletro[i].potencia * eletro[i].tempo;
    consumoTotal += consumoDiario * t;
    consumoDiario = 0;
  }
  printf("%.2f\n", consumoTotal);
  for (i = 0; i < TAM; i++) {
    consumo = (eletro[i].potencia * eletro[i].tempo) * t;
    consumoRelativo = consumo/consumoTotal;
    consumoRelativo *= 100;
    consumoDiario = 0;
    printf("%.2f\n", consumoRelativo);
  }
}