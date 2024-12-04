#include <stdio.h>

int main()
{
    unsigned iNo = 0;
    unsigned iMask = 288;
    unsigned iValue = 0;

    printf("Enter number: ");
    scanf("%u", &iNo);

    iValue = iNo & iMask;

    if (iValue == iMask)
    {
        printf("6th and 9th bit's are on.");
    }
    else
    {
        printf("Bits are off");
    }

    return 0;
}

/*


Decimal         Binary          Hexadecimal
0               0000                0
1               0001                1
2               0010                2
3               0011                3
4               0100                4
5               0101                5
6               0110                6
7               0111                7
8               1000                8
9               1001                9
10              1010                A
11              1011                B
12              1100                C
13              1101                D
14              1110                E
15              1111                F

int no = 12;        1   1   0   0


0 0 0 0     0 0 0 0     0 0 0 0     0 0 0 0     0 0 0 0     0 0 0 0     0 0 0 0     1 1 0 0




















*/