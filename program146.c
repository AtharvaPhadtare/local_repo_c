#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[] ,int iSize)
{
    int i = 0;
    printf("Displaying number in reverse order: \n");
    for(i = iSize - 1; i > -1; i--)
    {
        printf("%d\n",Arr[i]);
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

    Display(Brr,iCount);                                                // Step 4

    free(Brr);

    return 0;
}