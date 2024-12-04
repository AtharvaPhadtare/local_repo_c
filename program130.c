#include<stdio.h>
#include<stdlib.h>

int CountOdd(int Arr[],int iSize)
{
    int i = 0;
    int iFreq = 0;
    for(i=0; i< iSize;i++)
    {
        if(Arr[i] % 2 != 0)
        {
            iFreq++;
        }
    } 
    return iFreq;
}

int main()
{
    int iCount = 0;
    int *Brr = NULL;
    int i = 0;
    int iRet = 0;

    printf("Enter number of elements that you want: \n");
    scanf("%d",&iCount);

    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the elements: \n");
    for(i = 0;i < iCount;i++)
    {
        scanf("%d",&Brr[i]);
    }

    iRet = CountOdd(Brr,iCount);    //Addition(100,4)
    printf("The number of odd numbers is: %d",iRet);
    free(Brr);

    return 0;
}
