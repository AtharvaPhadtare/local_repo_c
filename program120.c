#include<stdio.h>

int Addition(int Arr[],int iSize)
{
    int i = 0;
    int iCount = 0;
    //      1       2       3
    for(i = 0;i < iSize;i++)
    {
        iCount+= Arr[i];
    }
    return iCount++;
}

int main()
{
    int Brr[5];
    int iRet = 0;
    int i = 0;

    printf("Enter the elements: \n");

    for(i = 0; i < 5;i++)
    {
        scanf("%d",&Brr[i]);
    }

    iRet = Addition(Brr,5);
    printf("Addition is: %d\n",iRet);

    return 0;
}