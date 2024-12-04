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
} // O(1)

void Display(PNODE First)
{
    while (First != NULL)
    {
        printf("| %d |->", First->data);
        First = First->next;
    }
    printf("NULL\n");
} // O(N)

int Count(PNODE First)
{
    int iCnt = 0;

    while (First != NULL)
    {
        iCnt++;
        First = First->next;
    }
    return iCnt;
} // O(N)

int Addition(PNODE First)
{
    int iSum = 0;

    while (First != NULL)
    {
        iSum = iSum + (First->data);
        First = First->next;
    }
    return iSum;
}

int EvenCount(PNODE First)
{
    int iCnt = 0;

    while (First != NULL)
    {
        if ((First->data) % 2 == 0)
        {
            iCnt++;
        }
        First = First->next;
    }
    return iCnt;
}

int OddCount(PNODE First)
{
    int iCnt = 0;

    while (First != NULL)
    {
        if ((First->data) % 2 != 0)
        {
            iCnt++;
        }
        First = First->next;
    }
    return iCnt;
}

int FrequencyCount(PNODE First, int No)
{
    int iCnt = 0;

    while (First != NULL)
    {
        if ((First->data) == No)
        {
            iCnt++;
        }
        First = First->next;
    }
    return iCnt;
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    int iNo = 0;
    printf("Enter the element you want to search: ");
    scanf("%d", &iNo);

    InsertFirst(&Head, 42);
    InsertFirst(&Head, 10);
    InsertFirst(&Head, 50);
    InsertFirst(&Head, 21);
    InsertFirst(&Head, 10);
    InsertFirst(&Head, 21);
    InsertFirst(&Head, 11);

    Display(Head);

    iRet = Addition(Head);
    printf("The Addition of elements are: %d\n", iRet);

    iRet = EvenCount(Head);
    printf("The number of even elements are: %d\n", iRet);

    iRet = OddCount(Head);
    printf("The number of odd elements are: %d\n", iRet);

    iRet = FrequencyCount(Head, iNo);
    printf("The number of times elements %d occours is: %d\n", iNo, iRet);

    return 0;
}
