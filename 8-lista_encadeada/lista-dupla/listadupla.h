

struct celula
{
    int chave;
    struct celula *ant;
    struct celula *prox;
};


/*Função recebe o ponteiro para primeiro nó da lista e imprime todos os nós (células)
da lista*/
void imprime_lista(celula *lst);


/*Funcao insere um novo no sempre no inicio da lista*/
void inserir_inicio(int x, celula*&L);


/*Funcao insere um novo no fim da lista*/
void inserir_fim(int x, celula*&L);


/*Procura e remove um no com valor x*/
void remover(int x, celula*&lst);


/*Funcao que apaga todos os nos da lista L*/
void desalocar(celula*&L);
