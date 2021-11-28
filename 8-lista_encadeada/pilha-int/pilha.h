
/*definicao de tipos*/
 struct celula
{
    int chave;
    struct celula *prox;
};

/*prototipo das funcoes que manipulam sua estrutura*/


/*Fun��o recebe o ponteiro para o topo da pilha, cria um novo n�(c�lula) para
armazenar um caracter  e coloca esse n� como topo da pilha*/
void empilharI(int , celula *&);

/*Fun��o recebe o ponteiro para o topo da pilha, desempilha e retorna o valor do topo*/
int desempilharI(celula *&);

/*funcao para desalocar uma pilha*/
void desalocarP(celula *&);


/*Fun��o recebe o ponteiro para o topo da pilha e imprime todos os n�s (c�lulas)
da pilha*/
void imprimePI(celula *);

