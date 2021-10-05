#include <stdio.h>
#include <string.h>




int main(int argc, char *argv[])
{
    int i;


    printf("Quantidade de argumentos: %d\n", argc);
    printf("Os argumentos: \n");

    for (i = 0; i < argc; i++)
    {
            printf("%s \n", argv[i]);
    }
    return 0;
}
