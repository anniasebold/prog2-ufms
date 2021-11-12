#include "features.h"

int main() {
  int opcao, n;
  Aluno aluno[MAX];

  system("clear");
  do {
    printf("Menu de opções:");
    printf("\n[1] Cadastrar um novo aluno");
    printf("\n[2] Buscar aluno pelo nome");
    printf("\n[3] Ler arquivo com listagem de alunos");
    printf("\n[4] Gerar arquivos com alunos APROVADOS");
    printf("\n[5] Gerar arquivos com alunos REPROVADOS");
    printf("\n[6] Fechar programa");
    printf("\nEscolha uma opção: ");
    scanf("%d", &opcao);
    system("clear");

    if(opcao == 1) {
      cadastraAluno(aluno, n);
    }
    else if(opcao == 2) {
      buscaAlunos(aluno, n);
    }
    else if(opcao == 3) {
      leArquivo(aluno, n);
    }
    else if(opcao == 4) {
      geraArquivoAprovados(aluno, n);
    }
    else if(opcao == 5) {
      geraArquivoReprovados(aluno, n);
    }
    else if(opcao == 6) {
      geraArquivoCadastrados(aluno, n);
    }
    else {
      printf("Opção Inválida");
    }
    printf("\n");

  } while(opcao != 6);

  return 0;
}