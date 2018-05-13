#ifndef DEQ_H
#define DEQ_H
#define TAM 10

#ifdef __cplusplus
extern "C" {
#endif

    struct aluno {
        int id;
    };
    typedef struct aluno Aluno;

    struct deque {
        int inicio;
        int final;
        int quantidade;
        Aluno dados[TAM];
    };
    typedef struct deque Deque;
    Deque* de;

    Deque* init();
    void inserirInicio(Deque* de, Aluno a1);
    void excluirInicio(Deque* de);
    void inserirFinal(Deque* de, Aluno a1);
    void excluirFinal(Deque* de);
    int tamanhoDeque(Deque* de);
    void listarDeque(Deque* de);
    void excluirDeque(Deque* de);



#ifdef __cplusplus
}
#endif

#endif /* DEQUE_H */
