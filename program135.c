#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[],int iSize,int iNo)
{
    int i = 0;
    for(i=0; i< iSize;i++)
    {
        if((Arr[i] == iNo))
        {
            break;
        }
    } 
    if(i == iSize)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int iCount = 0;
    int iValue = 0;
    int *Brr = NULL;
    int i = 0;
    bool bRet = false;

    printf("Enter number of elements that you want: \n");
    scanf("%d",&iCount);


    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the elements: \n");
    for(i = 0;i < iCount;i++)
    {
        scanf("%d",&Brr[i]);
    }

    printf("Enter the number that you want to search : ");
    scanf("%d",&iValue);

    bRet = Search(Brr,iCount,iValue);    //Addition(100,4)
    if(bRet == true)
    {
        printf("The number is present in the array");
    }
    else
    {
        printf("The number is not present in the array");
    }
    free(Brr);

    return 0;
}
