#include<stdio.h>
#include<stdlib.h>

int CountOdd(int Arr[],int iSize)
{
    int i = 0;
    int iFreq = 0;
    for(i=0; i< iSize;i++)
    {
        if((Arr[i] % 5 == 0) && (Arr[i] % 3 == 0))
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
    printf("The number of elements divisible by 5 and 3 are: %d",iRet);
    free(Brr);

    return 0;
}
