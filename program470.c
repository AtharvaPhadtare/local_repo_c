#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void Insert(PPNODE Root, int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if (*Root == NULL) // Tree is empty
    {
        *Root = newn;
    }
    else // Tree contains atleast one node.
    {
        temp = *Root;

        while (1)
        {
            if (temp->data == No)
            {
                printf("Unable to insert as element is already present\n");
                free(newn);
                break;
            }
            else if (No > temp->data)
            {
                if (temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;
                }
                temp = temp->rchild;
            }
            else if (No < temp->data)
            {
                if (temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }
                temp = temp->lchild;
            }
        }
    }
}

void Inorder(PNODE Root)
{
    if (Root != NULL)
    {
        Inorder(Root->lchild);
        printf("%d\n", Root->data);
        Inorder(Root->rchild);
    }
}

void Preorder(PNODE Root)
{
    if (Root != NULL)
    {
        printf("%d\n", Root->data);
        Inorder(Root->lchild);
        Inorder(Root->rchild);
    }
}

void Postorder(PNODE Root)
{
    if (Root != NULL)
    {
        Inorder(Root->lchild);
        Inorder(Root->rchild);
        printf("%d\n", Root->data);
    }
}

bool Search(PNODE Root, int No)
{
    bool bFlag = false;
    if (Root == NULL)
    {
        return false;
    }
    while (Root != NULL)
    {
        if (Root->data == No)
        {
            bFlag = true;
            break;
        }
        else if (No > Root->data)
        {
            Root = Root->rchild;
        }
        else if (No < Root->data)
        {
            Root = Root->lchild;
        }
    }
    return bFlag;
}

int CountLeaf(PNODE Root)
{
    static int iCnt = 0;
    if (Root != NULL)
    {
        if ((Root->rchild == NULL) && (Root->lchild == NULL))
        {
            iCnt++;
        }
        CountLeaf(Root->lchild);
        CountLeaf(Root->rchild);
    }
    return iCnt++;
}

int main()
{
    PNODE Head = NULL;
    bool bRet = false;
    int iRet = 0;

    Insert(&Head, 21);
    Insert(&Head, 34);
    Insert(&Head, 11);
    Insert(&Head, 98);
    Insert(&Head, 44);
    Insert(&Head, 28);
    Insert(&Head, 11);
    Insert(&Head, 7);
    Insert(&Head, 17);

    bRet = Search(Head, 99);
    if (bRet == true)
    {
        printf("Element is present in the BST\n");
    }
    else
    {
        printf("Element is not present in the BST\n");
    }

    iRet = CountLeaf(Head);
    printf("The number of leaf leaf are: %d", iRet);

    return 0;
}
