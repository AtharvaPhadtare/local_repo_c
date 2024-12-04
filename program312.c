#include <stdio.h>

int main()
{
    unsigned iNo1 = 0;
    unsigned iNo2 = 0;
    unsigned iRet = 0;

    printf("Enter first number: ");
    scanf("%u", &iNo1);

    printf("Enter second number: ");
    scanf("%u", &iNo2);

    iRet = iNo1 | iNo2;

    printf("The result of bitwise | (or oprator) is : %u", iRet);

    return 0;
}

/*

    OP1     OP2     RESULT
    1       1          1
    1       0          1
    0       1          1
    0       0          0


iNo1 = 11             0     0       0       0       1       0       1       1
iNo2 = 15             0     0       0       0       1       1       1       1
------------------------------------------------------------------------------
                      0     0       0       0       1       1       1       1
*/