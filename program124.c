#include<stdio.h>
#include<stdlib.h>

___ _________(int Arr[],int iSize)
{
    
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


    iRet = _________(Brr,iCount);    //Addition(100,4)

    free(Brr);

    return 0;
}
