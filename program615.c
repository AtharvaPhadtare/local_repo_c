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

int SearchFirstOccurence(PNODE First, int No)
{
    int iCount = 0;
    while (First != NULL)
    {
        iCount++;
        if (First->data == No)
        {
            return iCount;
            break;
        }
        First = First->next;
    }
    return -1;
}

int SearchLastOccurence(PNODE First, int No)
{
    int iCount = 0;
    int iLastPos = -1;

    while (First != NULL)
    {
        iCount++;
        if (First->data == No)
        {
            iLastPos = iCount;
        }
        First = First->next;
    }
    return iLastPos;
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;
    bool bRet = false;

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
    printf("The Addition of elements is: %d\n", iRet);

    iRet = EvenCount(Head);
    printf("The number of even elements is: %d\n", iRet);

    iRet = OddCount(Head);
    printf("The number of odd elements is: %d\n", iRet);

    iRet = FrequencyCount(Head, iNo);
    printf("The number of times element %d occurs is: %d\n", iNo, iRet);

    bRet = Search(Head, iNo);
    if (bRet == false)
    {
        printf("Element not found.\n");
    }
    else
    {
        printf("Element found in LL.\n");
    }

    iRet = SearchFirstOccurence(Head, iNo);
    if (iRet == -1)
    {
        printf("There is no such element.\n");
    }
    else
    {
        printf("Occurrence of element is at: %d\n", iRet);
    }

    iRet = SearchLastOccurence(Head, iNo);
    if (iRet == -1)
    {
        printf("There is no such element.\n");
    }
    else
    {
        printf("last Occurrence of element is at: %d\n", iRet);
    }

    return 0;
}
