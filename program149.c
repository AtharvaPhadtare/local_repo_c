#include <stdio.h>
#include <stdlib.h>

void Reverse(int Arr[], int iSize)
{
    //int iStart = 0;
    //int iEnd = 0;
    int Temp = 0;

    int iStart = 0;
    int iEnd = iSize - 1;

    while (iStart < iEnd)
    {
        Temp = Arr[iStart];
        Arr[iStart] = Arr[iEnd];
        Arr[iEnd] = Temp;

        iStart++;
        iEnd--;
    }
}

int main()
{
    int iCount = 0;
    int *Brr = NULL;
    int i = 0;

    printf("Enter the number of elements that you want to enter: "); // Step 1
    scanf("%d", &iCount);

    Brr = (int *)malloc(iCount * sizeof(int)); // Step 2

    printf("Enter the elements: \n"); // Step 3
    for (i = 0; i < iCount; i++)
    {
        scanf("%d", &Brr[i]);
    }

    Reverse(Brr, iCount); // Step 4

    printf("Elements after reverse are: \n");
    for (i = 0; i < iCount; i++)
    {
        printf("%d\n", Brr[i]);
    }

    free(Brr);

    return 0;
}



/*

#include <stdio.h>
#include <stdlib.h>

void Reverse(int Arr[], int iSize)
{
    int temp = 0;
    int Start = 0;
    int End = iSize - 1;

    while (Start < End)
    {
        temp = Arr[Start];
        Arr[Start] = Arr[End];
        Arr[End] = temp;

        Start++;
        End--;
    }
}

int main()
{
    int iValue = 0;
    int *Arr = NULL;
    int iCnt = 0;

    printf("Enter the number of elements you want to enter : ");
    scanf("%d", &iValue);

    Arr = (int *)malloc(iValue * sizeof(int));

    for (iCnt = 0; iCnt < iValue; iCnt++)
    {
        scanf("%d", &Arr[iCnt]);
    }

    Reverse(Arr, iValue);

    printf("The reversed elements are: \n");
    for (iCnt = 0; iCnt < iValue; iCnt++)
    {
        printf("%d\n", Arr[iCnt]);
    }

    free(Arr);

    return 0;
}


*/