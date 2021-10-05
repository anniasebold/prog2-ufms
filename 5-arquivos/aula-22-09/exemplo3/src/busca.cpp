#include "../include/busca.h"

int busca_sequencial(int n, int v[MAX], int x) 
{
	int k;
	for (k = n - 1; k >= 0 && v[k] != x; k--)
		;

	return k; 
}



int busca_sequencial_R(int n, int v[MAX], int x) 
{
	if (n == 0) 
		return -1;
	else
		if (x == v[n - 1])
			return n - 1; 
		else
			return busca_sequencial_R(n - 1, v, x);
}


int busca_ordenada(int n, int v[MAX], int x) 
{
	int k;
	for (k = 0; k < n && v[k] < x; k++)
		;
	
	return k; 
}

int busca_binaria(int n, int v[MAX], int x) 
{
	int esq, dir, meio;
	
	esq = -1;
	dir = n;
	while (esq < dir - 1) 
	{
		meio = (esq + dir) / 2; 

		if (v[meio] < x)
	         esq = meio;
	    else
			dir = meio;
	}
	return dir; 
}


int busca_binaria_R(int esq, int dir, int v[MAX], int x) 
{
	int meio;
	if (esq == dir - 1) 
		return dir;
	else 
	{
		meio = (esq + dir) / 2; 
		if (v[meio] < x)
			return busca_binaria_R(meio, dir, v, x); 
		else
			return busca_binaria_R(esq, meio, v, x);
	}
}