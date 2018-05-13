#ifndef DIN_H
#define DIN_H

#ifdef __cplusplus
extern "C" {
#endif

struct aluno{
    int mat;
};
typedef struct Deque Deque;

Deque* cria();
void libera(Deque* dq);
int tamanho(Deque* dq);
int vazio(Deque* dq);
int insereInicio(Deque* dq,struct aluno al);
int insereFinal(Deque* dq,struct aluno al);
int removeInicio(Deque* dq);
int removeFinal(Deque* dq);
void exibir(Deque* dq);

#ifdef __cplusplus
}
#endif

#endif
