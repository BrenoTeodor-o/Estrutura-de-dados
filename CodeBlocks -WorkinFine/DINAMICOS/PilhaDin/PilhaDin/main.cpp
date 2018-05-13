#include <stdio.h>
#include <stdlib.h>
#include "din.h"

int main(int argc, char *argv[]){
   no *stack = (no*) malloc(sizeof(no));

   if(!stack) printf("\nno memory\n");
   else startStack(stack);

      int opt;
      do{
      printf("0 -> quit\n");
      printf("1 -> push\n");
      printf("2 -> pop\n");
      printf("3 -> show stack\n");
      printf("4 -> free stack\n");
      printf("opt: "); scanf("%d", &opt);

      switch(opt){
         case 1:
             system("cls");
            push(stack);
            break;
         case 2:
             system("cls");
            temp = pop(stack);
             if(temp != NULL){
             printf("\nelement removed: %d\n\n", temp->number);
             free(temp);
             } break;

         case 3:
             system("cls");
            showStack(stack);
            break;

         case 4:
             system("cls");
            freeStack(stack);
            startStack(stack);
            break;
         default:
            if(opt != 0) printf("take valid option\n\n");

         }
      }while(opt != 0);
   }
