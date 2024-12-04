#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[] ,int iSize)
{
    int i = 0;
    int iMin = Arr[0];
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] < iMin)
        {
            iMin = Arr[i];
        }
    }
    return iMin;
}

int main()
{
    int iCount = 0;
    int *Brr = NULL;
    int i = 0;
    int iRet = 0;

    printf("Enter the number of elements that you want to enter: ");    //Step 1
    scanf("%d",&iCount);

    Brr = (int *)malloc(iCount * sizeof(int));                          //Step 2

    printf("Enter the elements: \n");                                   //Step 3
    for(i=0;i < iCount;i++)
    {
        scanf("%d",&Brr[i]);
    }

    iRet = Minimum(Brr,iCount);                                         // Step 4
    printf("The minimum number is : %d\n",iRet);

    free(Brr);

    return 0;
}