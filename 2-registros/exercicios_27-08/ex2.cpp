/*Faca um programa para cadastrar carros com os seguintes dados: 
marca (maximo de 15 letras), ano e preço. Suponha que no maximo serao cadastrados
30 carros. O seu programa deve possuir o seguinte menu:

1 - Cadastrar um carro: nesta opcao o usuario informa os dados de APENAS UM CARRO, que 
deverão ser armazenados num vetor de registros.

2 - Listar carros: lista os dados de todos os carros cadastrados

3 - Media de precos: calcula e imprime a media dos precos dos carros de um determinado
ano. O usuario informa um ano e a media dos precos dos carros deste ano
deve ser impressa.

FUNCOES A CRIAR:
1 - Uma funcao para cadastrar um carro: recebe o vetor e o numero de carros cadastrados 
ate o momento. Atencao: nesta funcao o numero de carros deverá aumentar em uma unidade.
2 - Uma funcao para listar os dados de todos os carros: recebe o vetor e o numero de carros
cadastrados ate o momento
3 - Uma funcao para calcular e retornar a media dos precos dos carros de um determinado ano 
informado pelo usuario: recebe o vetor, o numero de carros
cadastrados ate o momento e um ano, retorna a media.
*/

#include <stdio.h>
#include <string.h>

#define MAX 15
#define TAM 30

struct tCarro {
	char marca[MAX];
	int ano;
	float preco;
};

/*prototipo das funcoes*/
void menu();
void leitura(tCarro carros[TAM], int &n); 
void listagem(tCarro carros[TAM], int n);
double calcMedia(tCarro carros[TAM], int n, int ano);


// funcao principal
int main() {
	// declaracao de variaveis
	int opcao, n, ano;
  double media = 0;
  tCarro carros[TAM];

	do{
		menu();
		scanf("%d", &opcao);

		if(opcao == 1) {
      leitura(carros, n);
			// ler os dados de um carro - funcao
		}
		else if(opcao == 2) {
      listagem(carros, n);
			// imprimir todos os carros cadastrados - funcao
		}
		else if(opcao == 3) {
      scanf("%d", &ano);
      media = calcMedia(carros, n, ano);
      if (media == 0.0) {
        printf("Nenhum carro foi encontrado nesse ano.");
      } else {
        printf("Media dos precos: %.2f\n", media);
      }
			// ler um ano e imprimir a media de precos dos carros do ano
		}
	}while(opcao != 4);

	return 0;
}

void menu() {
	printf("\n[1] Cadastrar um carro\n");
	printf("[2] Listar carros\n");
	printf("[3] Media de precos de um ano\n");
	printf("Opcao: ");
}

void leitura(tCarro carros[], int &n) {
  printf("Marca: ");
  scanf(" %[^\n]", carros[n].marca);
  printf("Ano: ");
  scanf(" %d", &carros[n].ano);
  printf("Preco: ");
  scanf(" %f", &carros[n].preco);
  n++;
}

void listagem(tCarro carros[TAM], int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("Marca: %s\n", carros[i].marca);
    printf("Ano: %d\n", carros[i].ano);
    printf("Preco: %.2f\n", carros[i].preco);
  }
}

double calcMedia(tCarro carros[TAM], int n, int ano) {
  int i;
  double soma = 0.0;
  int cont = 0;

  for (i = 0; i < n; i++) {
    if (carros[i].ano == ano) {
      soma += carros[i].preco;
      cont += 1;
    }
    if (cont == 0) {
      return 0.0;
    } else {
      return soma/cont;
    }
  }
}