#include <stdio.h>

int main()
{
    unsigned iNo = 0;
    unsigned iMask = 0x00000c00;
    unsigned iValue = 0;

    printf("Enter number: ");
    scanf("%u", &iNo);

    iValue = iNo & iMask;

    if (iValue == iMask)
    {
        printf("11th and 12th bit's are on.");
    }
    else
    {
        printf("Bits are off");
    }

    return 0;
}
















/*
--------------------------------------------------------
    OP1     OP2     &       |       ^
--------------------------------------------------------
    1       1       1       1       0
    1       0       0       1       1
    0       1       0       1       1
    0       0       0       0       0
---------------------------------------------------------


iNo1 = 11             0     0       0       0       1       0       1       1
iNo2 = 15             0     0       0       0       1       1       1       1
------------------------------------------------------------------------------
                      0     0       0       0       1       1       1       1
*/