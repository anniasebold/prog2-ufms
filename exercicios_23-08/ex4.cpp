#include<stdio.h>
#include <math.h>

struct data {
  int dia;
  int mes;
  int ano;
};

int fAno(int ano, int mes) {
  if (mes <= 2) {
    return (ano = ano - 1);
  } else {
    return ano;
  };
};

int gMes(int mes) {
  if (mes <= 2) {
    mes += 13;
  } else {
    mes += 1;
  };
  return mes;
};

int calculaN(data data) {
  int N;
  N = (1461 * fAno(data.ano, data.mes) /4) + (153 * gMes(data.mes) /5) + data.dia;

  return N;
};

void calculaDiaSemana(data data) {
  int D;
  D = (calculaN(data) - 621049) % 7;

  if (D == 0) {
    printf("Domingo\n");
  } else if(D == 1) {
    printf("Segunda\n");
  } else if(D == 2) {
    printf("Terça\n");
  } else if(D == 3) {
    printf("Quarta\n");
  } else if(D == 4) {
    printf("Quinta\n");
  } else if(D == 5) {
    printf("Sexta\n");
  } else if(D == 6) {
    printf("Sábado\n");
  }

}

int main() {
  data data1;
  printf("Informe uma data: (dd/mm/aa) ");
  scanf("%d/%d/%d", &data1.dia, &data1.mes, &data1.ano);

  calculaDiaSemana(data1);

  return 0;
}