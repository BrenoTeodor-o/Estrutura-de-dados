#ifndef DIN_H
#define DIN_H
#define MAX 10

#ifdef __cplusplus
extern "C" {
#endif

typedef struct{
    int chave;
}REGISTRO;

typedef struct aux{
    REGISTRO reg;
    struct aux* prox;
}ELEMENTO, *PONT;

typedef struct {
   PONT inicio;
   PONT fim;
}FILA;

void init(FILA* f);
void tam(FILA* f);
void exibir(FILA* f);
void inserir(FILA* f,int re);
void excluir(FILA* f);
void zerar(FILA* f);

#ifdef __cplusplus
}
#endif


#endif

