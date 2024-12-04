#include<stdio.h>
#include<stdlib.h>

int Updator(int Arr[] ,int iSize)
{
    int i = 0;
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] <  0)
        {
            Arr[i] = -Arr[i];
        }
    }
}

int main()
{
    int iCount = 0;
    int *Brr = NULL;
    int i = 0;

    printf("Enter the number of elements that you want to enter: ");    //Step 1
    scanf("%d",&iCount);

    Brr = (int *)malloc(iCount * sizeof(int));                          //Step 2

    printf("Enter the elements: \n");                                   //Step 3
    for(i=0;i < iCount;i++)
    {
        scanf("%d",&Brr[i]);
    }

    Updator(Brr,iCount);                                                // Step 4
                                             
    printf("Data After updation is :\n");
    for(i = 0; i < iCount ; i++)
    {
        printf("%d\n",Brr[i]);
    }

    free(Brr);

    return 0;
}