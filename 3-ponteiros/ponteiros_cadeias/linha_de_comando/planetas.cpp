/*
ESTE PROGRAMA LE VARIOS NOMES NA LINHA DE COMANDO E VERIFICA
SE ALGUM DOS NOMES É UM NOME DE PLANETA VALIDO.
CASO SEJA, IMPRIME A POSICAO ONDE FOI ENCONTRADO NO VETOR.
*/

#include <stdio.h>
#include <string.h>

#define NUM_PLANETAS 9

int main(int argc, char *argv[])
{
    char *planetas[9] = {"Mercurio", "Venus", "Terra", "Marte", "Jupiter",
                        "Saturno", "Urano", "Netuno", "Plutão"};
    int i, j, k;


    //printf("Iniciando execução do programa.");
    /*if(argc == 1){
        printf("Numero de argumentos insuficiente.\n");
        return 0;
    }*/
    for (i = 1; i < argc; i++)
    {
        for (j = 0; j < NUM_PLANETAS; j++)
            if (strcasecmp(argv[i], planetas[j]) == 0)
            {
                k = j; j = NUM_PLANETAS;
            }

        if (j == NUM_PLANETAS + 1)
            printf("%s é o planeta %d\n", argv[i], k);
        else
            printf("%s não é um planeta\n", argv[i]);
    }
    return 0;
}
