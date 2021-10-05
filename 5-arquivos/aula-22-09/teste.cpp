#include <stdio.h>
#include <math.h>

#define VERDADEIRO 1 
#define FALSO 0
#define LOGIC int
typedef int logic; 
typedef enum {VERMELHO,AMARELO, VERDE} cor;


int main()
{
    LOGIC a = 2;

    cor  A, B, C;

    A = VERMELHO;
    B = AMARELO;
    C = VERDE;


    printf("a=%d\n", a);


    printf("%d\n", A);
    printf("%d\n", B);  
    printf("%d\n", C);

    printf("\n");  

    return 0;
}
