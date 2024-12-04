#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;          // 4bytes
    struct node *next; // 8bytes
};
// This structure is called self referntial structure.

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE First, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if (*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }
}

void InsertLast(PPNODE First, int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if (*First == NULL)
    {
        *First = newn;
    }
    else
    {
        temp = *First;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}

void Display(PNODE First)
{
    while (First != NULL)
    {
        printf("|%d|->", First->data);
        First = First->next;
    }
    printf("NULL\n");
}

int Count(PNODE First)
{
    int Icnt = 0;
    while (First != NULL)
    {
        Icnt++;
        First = First->next;
    }
    return Icnt;
}

void DeleteFirst(PPNODE First)
{
    PNODE temp = NULL;

    if (*First == NULL) // Case 1
    {
        printf("Unable to delete as linked list is empty.");
        return;
    }
    else if ((*First)->next == NULL) // Case 2
    {
        free(*First);  // This is used to delete the only available single node.
        *First = NULL; // This is used to delete the addrress of the Head pointer to NULL.
    }
    else // Case 3
    {
        temp = *First;
        *First = (*First)->next; // We are updating Head with 200 by replacing it with 100.
        free(temp);
    }
}

void DeleteLast(PPNODE First)
{
    PNODE temp = NULL;

    if (*First == NULL) // Case 1
    {
        printf("Unable to delete as linked list is empty.");
        return;
    }
    else if ((*First)->next == NULL) // Case 2
    {
        free(*First);  // This is used to delete the only available single node.
        *First = NULL; // This is used to delete the addrress of the Head pointer to NULL.
    }
    else // Case 3
    {
        temp = *First;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head, 51);
    InsertFirst(&Head, 21);
    InsertFirst(&Head, 11);

    InsertLast(&Head, 101);
    InsertLast(&Head, 111);
    InsertLast(&Head, 121);

    Display(Head);

    iRet = Count(Head);

    printf("The number of elements are: %d\n", iRet);

    

    return 0;
}

/*





*/