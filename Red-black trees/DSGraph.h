/*
+--------------------------------------------------------------------------------------+
|Federal University Of Juiz de Fora - UFJF - Minas Gerais - Brazil                     |
|Institute for Exact Sciences - ICE                                                    |
|Computer Science Departament - DCC                                                    |
|Project: Visual library to support Data Structures classes                            |
|Professor:Jairo Francisco de Souza    jairo.souza@ufjf.edu.br                         |
|Students......:Thiago Moratori Peixoto     thiagomoratori@gmail.com                   |
|               Sandro Athaide Coelho       sandroacoelho@gmail.com                    |
|               Ana Carolina G. Fidelis     acarolinafg@gmail.com                      |
|               Davi Guimaraes Silva        davi150889@gmail.com		               |
|               Maria Rosangela Almeida     rosangelajf2008@gmail.com                  |
|Created in......:March/31/2011                                                        |
|Objective: this file is the head of the library                                       |
|Latest updates                                                                        |
|                                                                                      |
|                                                                                      |
|                                                                                      |
|                                                                                      |
|                                                                                      |
|--------------------------------------------------------------------------------------+
*/
//BOF
#ifndef DSGRAPH__HEAD_FILE
#define DSGRAPH__HEAD_FILE


/**
* Set DSGraph data type
*/
#define setDataType(dt) setDSGraphDataType(sizeof(dt));

#ifndef __cplusplus
#include <stdlib.h>
//Main structure. You need to put it on the DSGraph.h
typedef struct NODE_STRUCTURE
{
    int valor;  //value (content)
    int marca;   //used on red-black tree
    struct NODE_STRUCTURE *proximo;   //right child
    struct NODE_STRUCTURE *anterior;  //left child
    struct NODE_STRUCTURE *pai; //middle child

} DATA_STRUCTURE;

// Ternary tree structure. You need to put it on the DSGraph.h
typedef struct NODE_TERNARY
{
    void *valor;  //value (content)

    struct NODE_TERNARY *direito;   //right child
    struct NODE_TERNARY *esquerdo ;  //left child
    struct NODE_TERNARY *centro; //middle child

} DATA_TERNARY;


// Quad Tree structure. You need to put it on the DSGraph.h
typedef struct NODE_QUADTREE
{
    void *valor;  //value (content)
    float x;
    float y;
    struct NODE_QUADTREE *filhos[4];   //children

} DATA_QUADTREE;
#endif

#ifdef __cplusplus

struct NODE_STRUCTURE
{
    int valor;  //value (content)
    int marca;   //used on red-black tree
    struct NODE_STRUCTURE *proximo;   //right child
    struct NODE_STRUCTURE *anterior;  //left child
    struct NODE_STRUCTURE *pai; //middle child

};

//Struct pai
struct DSGraphStr{

   public:

   virtual int getInfo(){return -1;};
   virtual DSGraphStr* getProx() { return NULL;};
   virtual DSGraphStr* getAnt() { return NULL;};
   virtual DSGraphStr* getPai() { return NULL;};
   virtual int getMarca(){return -1;};

};



template <typename T> class  DSGraph{
     T *t;
     T *aux;

     private:

         NODE_STRUCTURE *convertToDsGraph() {
         NODE_STRUCTURE *result = NULL;
         aux = t;
         while(aux!=NULL)
         {
                if (result == NULL){

                    result = new NODE_STRUCTURE();
                    result->valor    = aux->getInfo();
                    result->proximo  = NULL;
                    result->anterior = NULL;
                    result->pai      = NULL;


                }else{

                     NODE_STRUCTURE* temp = result;
                     while(temp->proximo != NULL)
                     {
                         temp = temp->proximo;
                     }
                     NODE_STRUCTURE* novo = new NODE_STRUCTURE();
                     novo->valor    = aux->getInfo();
                     novo->proximo  = NULL;
                     novo->anterior = NULL;
                     novo->pai      = NULL;
                     novo->marca    = aux->getMarca();
                     temp->proximo  = novo;
                }
             aux= aux->getProx();
         }

         return result;
        }
       int getInfo()  { return t->getInfo();}
        T* getProx()  { return t->getProx();}
        T* getAnt()   { return t->getAnt();}
        T* getPai()   { return t->getPai();}
       int getMarca() { return t->getMarca();}

     public:

      void showCPP(T *p, int n_args=0, ...)  {
           t= p;
           show(convertToDsGraph(), n_args);
        }

};


extern "C" {
#endif


//STRUCTURES
#define $PILHA                       1
#define $LISTA                       10
#define $VETOR                       20
#define $VETOR_MULTIDIMENSIONAL      30
#define $STRING                      40
#define $PONTEIRO                    50
#define $ARVORE_BINARIA              60
#define $LISTA_DESCRITOR             70
#define $ARVORE_VERMELHO_PRETO       80
#define $POINT_QUADTREE              90
#define $ARVORE_TERNARIA             100

//COLOR TREE RED_BLACK
#define $BLACK 1
#define $RED 2

/*
* Initialize the library with the structure
* @param: int typeOfStructure- Type of the structure
*/
void init(int typeOfStructure, ...);

/*
* Show the screen
* @param struct NODE_STRUCTURE *param - the parameter
*/
void show(void *param, int n_args, ...);

/*
* Set the sleep time
* @param seconds
*/
void setSleepTime(int seconds);

/*
* Init the node border color
* @param: red, green, blue
*/
void setBorderColor(int red, int green, int blue);

/*
* Init the node  color
* @param: red, green, blue
*/
void setNodeColor(int red, int green, int blue);

/*
* Finalize and clean all used DSGraph resources from memory
*/
void terminateDSGraph();

/*
* Set if DSGraphs need to show the memory address
* @param: value - 0  - doesn't show
*         value - 1  - show
*/
void setViewAddress(int value);


/*
* Set a text on screen
* @param string - a message
**/
void showComment(const char *string, ...);


/**
* Set DSGraph data type
* @param sizeOfDataType
*/
void setDSGraphDataType(int sizeOfDataType);

#ifdef __cplusplus
}
#endif


#endif

//EOF
