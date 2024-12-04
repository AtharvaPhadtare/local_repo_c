#include <stdio.h>
#include <stdbool.h>

bool Checkbit(int iNo)
{
    unsigned iMask = 8;
    unsigned iValue = 0;

    iValue = iNo & iMask;

    if (iValue == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    unsigned iValue = 0;
    bool bRet = false;

    printf("Enter number: ");
    scanf("%u", &iValue);

    bRet = Checkbit(iValue);

    if (bRet == true)
    {
        printf("4th bit is on.");
    }
    else
    {
        printf("4th bit is off");
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