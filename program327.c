#include <stdio.h>

int main()
{
    unsigned iNo = 0;
    unsigned iMask = 0xfffffff7;
    unsigned iValue = 0;

    printf("Enter number: ");
    scanf("%u", &iNo);

    iValue = iNo & iMask;

    printf("Updated result is: %d", iValue);

    return 0;
}
