/*
 
 PROGRAMA PARA ABRIR UM ARQUIVO TEXTO CONTENDO VARIOS DADOS DE ALUNOS 
 (RGA E MEDIA),
 LER OS DADOS E CONTAR O NUMERO DE ALUNOS COM MEDIA MAIOR OU IGUAL A 7.0,
 IMPRIMIR EM UM ARQUIVO DE SAIDA CHAMADO "RESULT.TXT", o nome do arquivo de entrada
 seguido da quantidade de alunos com media >= 7.0

 O NOME DO ARQUIVO A SER ABERTO, CUJOS DADOS SERAO LIDOS SERÁ INFORMADO NA LINHA DE
  COMANDO
 */

#include<stdio.h>  /*FILE, printf, scanf*/
#define MAX 30


int main(int argc, char* argv[])
{
    
    FILE* entrada;    /* variavel para acessar um arquivo de entrada*/
    FILE* saida;      /* variavel para acessar um arquivo de saida*/
    char RGA[MAX];    /* nome do aluno */
    float media;
    int cont = 0;     // contador de notas acima de 7.0 (inclusive)
    
    if(argc != 2){
        printf("Erro nos parâmetros da linha de comando.");
        return 0;
    }
    // NOME DO ARQUIVO A SER ABERTO VIRA PELA LINHA DE COMANDO - ENTRADA 1

    /*abertura de um arquivo*/
    entrada = fopen(argv[1], "r");
    
    /* verificando se arquivo foi aberto */
    if( entrada == NULL )
    {
        printf("\n\n Arquivo %s nao pode ser aberto.\n\n", argv[1]);
    }
    else
    {
        // abrindo arquivo de saida
        saida = fopen("result.txt", "a");
        if(saida == NULL){
            printf("Arquivo result.txt nao pode ser aberto.\n");
            fclose(entrada);
            return 0;
        }

        /*leitura dos dados do arquivo*/
        fscanf(entrada, "%s %f", RGA, &media);
        
        while( feof(entrada) == 0 )    /*CHEGOU AO FINAL DO ARQUIVO??? verificando se chegou ao fim do arquivo*/
        {
            
            if(media >= 7.0)
                cont++;        
            /*leitura dos proximos dados do arquivo*/
            fscanf(entrada, "%s %f", RGA, &media);
        }
        fprintf(saida, "%s %d\n", argv[1], cont);
        
        /*fechamento do arquivo*/
        fclose(entrada);
        fclose(saida);
        
    }
    printf("\n");    
    return 0;
}

