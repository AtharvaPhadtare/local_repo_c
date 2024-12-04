#include<stdio.h>
#include<stdlib.h>

int Search(int Arr[],int iSize,int iNo)
{
    int i = 0;
    int iFreq = 0;
    for(i=0; i< iSize;i++)
    {
        if((Arr[i] == iNo))
        {
            iFreq++;
        }
    } 
    return iFreq;
}

int main()
{
    int iCount = 0;
    int iValue = 0;
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

    printf("Enter the number that you want to search : ");
    scanf("%d",&iValue);

    iRet = Search(Brr,iCount,iValue);    //Addition(100,4)
    printf("The frequency of that number is: %d",iRet);
    free(Brr);

    return 0;
}
