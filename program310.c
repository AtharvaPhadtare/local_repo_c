#include <stdio.h>

// This is faltu and ghaan logic only 
//applicable for binary

int CountOne(int iNo)
{
    int iDigit = 0;
    int isum = 0;

    printf("Binary conversion is: ");

    while (iNo != 0)
    {
        iDigit = iNo % 2;
        isum += iDigit;
        iNo = iNo / 2;
    }
    return isum;
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
