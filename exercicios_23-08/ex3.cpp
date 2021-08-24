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
  N = floor(N);

  return N;
};

int main() {
  data data1, data2;
  int dias_decorridos;
  printf("Informe a primeira data: (dd/mm/aa) ");
  scanf("%d/%d/%d", &data1.dia, &data1.mes, &data1.ano);
  printf("Informe a segunda data: (dd/mm/aa) ");
  scanf("%d/%d/%d", &data2.dia, &data2.mes, &data2.ano);

  dias_decorridos = calculaN(data2) - calculaN(data1);
  printf("Dias decorridos: %d\n", dias_decorridos);

  return 0;
}