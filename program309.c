#include <stdio.h>

int CountOne(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    printf("Binary conversion is: ");

    while (iNo != 0)
    {
        iDigit = iNo % 2;
        if (iDigit == 1)
        {
            iCount++;
        }
        iNo = iNo / 2;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountOne(iValue);

    printf("The number of one's are: %d", iRet);

    return 0;
}
