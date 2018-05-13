#ifndef PIL_H
#define PIL_H
#define MAX 10

#ifdef __cplusplus
extern "C" {
#endif


typedef struct{
  int valor[MAX];
  int topo;
}Tpilha;

typedef Tpilha *Ppilha;

  Ppilha cria();
  int push(Ppilha p,int val);
  void pop(Ppilha p);
  int peek(Ppilha p);
  void libera(Ppilha p);
  void mostra(Ppilha p);

#ifdef __cplusplus
}
#endif


#endif

