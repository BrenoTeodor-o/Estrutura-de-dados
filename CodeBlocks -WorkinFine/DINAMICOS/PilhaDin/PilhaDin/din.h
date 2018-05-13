#ifndef DIN_H
#define DIN_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct stackNode{
   int number;
   struct stackNode *next;
}no;

int size;
no *temp;
//==============================================================================
void startStack(no *stack);
int testEmpty(no *stack);
int testEmpty(no *stack);
void push(no *stack);
no *pop(no *stack);
void showStack(no *stack);
void freeStack(no *stack);


#ifdef __cplusplus
}
#endif

#endif
