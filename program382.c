#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE First, PPNODE Last, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if ((*First == NULL) && (*Last == NULL))
    {
        *First = newn;
        *Last = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }
    (*Last)->next = *First;
}

void InsertLast(PPNODE First, PPNODE Last, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if ((*First == NULL) && (*Last == NULL))
    {
        *First = newn;
        *Last = newn;
    }
    else
    {
        (*Last)->next = newn;
        *Last = newn;
    }
    (*Last)->next = *First;
}

void Display(PNODE First, PNODE Last)
{
    if ((First == NULL) && (Last == NULL)) // This filter is written beacuse if we pass Display function
    {                                      // before passing any number it would generate an error.
        printf("Linked list is empty.");
        return;
    }
    do
    {
        printf("|%d|->", First->data);
        First = First->next;
    } while (First != Last->next);

    printf("\n");
}

int Count(PNODE First, PNODE Last)
{
    int iCount = 0;
    if ((First == NULL) && (Last == NULL))
    {
        return 0;
    }
    do
    {
        iCount++;
        First = First->next;
    } while (First != Last->next);

    return iCount;
}

void DeleteFirst(PPNODE First, PPNODE Last)
{
    if ((*First == NULL) && (*Last == NULL))
    {
        printf("Empty LL");
        return;
    }
    else if (*First == *Last)
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else
    {
        *First = (*First)->next;
        free((*Last)->next);
        (*Last)->next = *First;
    }
}

void DeleteLast(PPNODE First, PPNODE Last)
{
    PNODE temp = NULL;
    if ((*First == NULL) && (*Last == NULL)) // Emppty LL
    {
        printf("Empty LL");
        return;
    }
    else if (*First == *Last) // Single Node
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else
    {
        while (*First < *Last)
        {
            *First = (*First)->next;
        }
        (*First)->next = (*Last)->next;
        free(*Last);
        (*Last) = *First;
        (*Last)->next = *First;
    }
}

int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL; //$
    int iRet = 0;

    Display(Head, Tail);

    InsertFirst(&Head, &Tail, 51);
    InsertFirst(&Head, &Tail, 21);
    InsertFirst(&Head, &Tail, 11);

    InsertLast(&Head, &Tail, 101);
    InsertLast(&Head, &Tail, 111);
    InsertLast(&Head, &Tail, 121);

    Display(Head, Tail);

    iRet = Count(Head, Tail);
    printf("The number of elements are: %d\n", iRet);

    DeleteFirst(&Head, &Tail);
    Display(Head, Tail);
    iRet = Count(Head, Tail);
    printf("The number of elements are: %d\n", iRet);

    DeleteLast(&Head, &Tail);
    Display(Head, Tail);
    iRet = Count(Head, Tail);
    printf("The number of elements are: %d\n", iRet);

    return 0;
}