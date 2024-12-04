#include<stdio.h>
#include<stdlib.h>

int Maximun(int Arr[] ,int iSize)
{
    int i = 0;
    int iMax = 0;
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] > iMax)
        {
            iMax = Arr[i];
        }
    }
    return iMax;
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

    iRet = Maximun(Brr,iCount);                                         // Step 4
    printf("The maximum number is : %d\n",iRet);

    free(Brr);

    return 0;
}