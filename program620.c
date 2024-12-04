#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

bool Search(PNODE First, int No)
{
    bool bFlag = false;
    while (First != NULL)
    {
        if ((First->data) == No)
        {
            bFlag = true;
            break;
        }
        First = First->next;
    }
    return bFlag;
}

void SumDigits(PNODE First)
{
    int iNo = 0;
    int iDigit = 0;
    int iSum = 0;

    while (First != NULL)
    {
        iNo = First->data;
        iSum = 0;

        while (iNo != 0)
        {
            iDigit = iNo % 10;
            iSum += iDigit;
            iNo = iNo / 10;
        }

        printf("The addition of individual digits of %d is: %d\n", First->data, iSum);
        iSum = 0;

        First = First->next;
    }
}

void SumFactors(PNODE First)
{
    int iNo = 0;
    int iDigit = 0;
    int iSum = 0;

    while (First != NULL)
    {
        iNo = First->data;
        iSum = 0;
        int i = 1;

        for (i = 1; i <= iNo / 2; i++)
        {
            if (iNo % i == 0)
            {
                iSum += i;
            }
        }
        printf("The afactors of digit %d is: %d\n", First->data, iSum);
        iSum = 0;
        First = First->next;
    }
}

int DisplayMiddleElement(PNODE First)
{
    int iCnt = 0;
    PNODE temp = First;
    int iPos = 0;
    int i = 0;
    while (temp != NULL)
    {
        iCnt++;
        temp = temp->next;
    }

    iPos = iCnt / 2;

    for (i = 1; i <= iPos; i++)
    {
        First = First->next;
    }
    return First->data;
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;
    bool bRet = false;

    InsertFirst(&Head, 42);
    InsertFirst(&Head, 10);
    InsertFirst(&Head, 50);
    InsertFirst(&Head, 21);
    InsertFirst(&Head, 10);
    InsertFirst(&Head, 21);
    InsertFirst(&Head, 11);
    InsertFirst(&Head, 81);

    Display(Head);

    iRet = DisplayMiddleElement(Head);
    printf("Middle element is: %d\n", iRet);

    return 0;
}
