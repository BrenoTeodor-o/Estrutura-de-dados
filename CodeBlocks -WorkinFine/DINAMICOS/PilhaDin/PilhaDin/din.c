#include <stdio.h>
#include <stdlib.h>
#include "din.h"

void startStack(no *stack){
   stack->next = NULL;
   size = 0;
}

int testEmpty(no *stack){
   if(stack->next == NULL) return 1;
   else return 0;
}

no *pusher(){
   no *new = (no*) malloc(sizeof(no));
   if(!new) printf("\nno memory\n\n");
   else{
       printf("\ntake a new number: "); scanf("%d", &new->number);
   }
   return new;
}

void push(no *stack){
   no *new = pusher();
   new->next = NULL;
   if(testEmpty(stack)){
      stack->next = new;
      size++;
   }else{
      temp = stack->next;
      while(temp->next != NULL){
         temp = temp->next;
      }
   temp->next = new;
   size++;
   }
}

no *pop(no *stack){
   if(testEmpty(stack)){
      printf("\n\nempty stack\n\n");
      return NULL;
   }else{
      no *last = stack->next;
      no *antlast = stack;

      while(last->next != NULL){
         antlast = last;
         last = last->next;
      }
   antlast->next = NULL;
   size--;
   return last;
   }
}

void showStack(no *stack){
   if(testEmpty(stack)){
      printf("\n\nempty stack\n\n");
   }else{
      temp = stack->next;
      printf("\n");
      while(temp != NULL){
         printf("%d ", temp->number);
         temp = temp->next;
      }
      printf("\nSize of stack: %d\n\n", size);
   }
}

void freeStack(no *stack){
   if(testEmpty(stack)){
      printf("\n\nempty stack\n\n");
   }else{
      no *node = stack->next,
         *nxtNode;

      while(node != NULL){
         nxtNode = node->next;
         free(node);
         node = nxtNode;
      } printf("\nstack cleaned\n\n");
   }
}

