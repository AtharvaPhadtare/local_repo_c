#include <stdio.h>

int Addition(int ptr[], int iSize)
{
    int i = 0;
    int iCount = 0;
    //      1       2       3
    for (i = 0; i < iSize; i++)
    {
        iCount += ptr[i];
    }
    return iCount++;
}

int main()
{
    int Arr[5];
    int iRet = 0;
    int i = 0;

    printf("Enter the elements: \n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &Arr[i]);
    }

    iRet = Addition(Arr, 5);
    printf("Addition is: %d\n", iRet);

    return 0;
}




















/*
#include <stdio.h>

int Addition(int str[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum += str[iCnt];
    }

    return iSum;
}
int main()
{
    int iValue1 = 0;
    int iRet = 0;
    int iCnt = 0;

    printf("Enter the number of elements you want to enter in the array: ");
    scanf("%d", &iValue1);

    int Arr[iValue1];

    for (iCnt = 0; iCnt < iValue1; iCnt++)
    {
        scanf("%d", &Arr[iCnt]);
    }

    iRet = Addition(Arr, iValue1);

    printf("The addition of all digits of array is: %d", iRet);

    return 0;
}

*/