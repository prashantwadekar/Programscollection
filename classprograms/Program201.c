#include<stdio.h>
#include<stdlib.h> //malloc(),calloc() DMA
struct node
{
    int data;
    struct node *next;  //self refrencal structure
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;
int main()
{
    PNODE First=NULL;
   //struct node* First=NULL;


    return 0;
}