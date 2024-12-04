#include<stdio.h>
#include <stdlib.h>

struct node
{
    int data;   //4 bytes
    struct node *next;  //8bytes
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int main()
{
    PNODE Head = NULL;
    //struct node * Head = NULL;   //8bytes

    NODE obj;
    //struct node obj;

    return 0;
}