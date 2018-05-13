#ifndef LIS_H
#define LIS_H
#define TAM 10

#ifdef __cplusplus
extern "C" {
#endif

void insereInicio(int valor);
void insereFim(int valor);
void insereMeio(int valor,int pos);
void remover(int valor);
void exibir();
void buscar(int valor);
void menu();




#ifdef __cplusplus
}
#endif

#endif /* DEQUE_H */
