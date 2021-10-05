#include "marca.h"
#include <string.h>
#define TAMSTR 30

struct tCarro
{
	char modelo[TAMSTR];
	int ano;
	int codigomarca;
};

void inserirC(tCarro* C, int &n, char *mod, int ano, int codmarca);

void listagem(tMarca* M, int tamM, tCarro* C, int tamC);