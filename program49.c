//Input: 5
//Output : 1*2*3*4*5 = 120

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    unsigned long int iFact = 1;

    iCnt = 1;
    while(iCnt <=iNo)
    {
        iFact = iFact * iCnt;
        iCnt++;
    }
    return iFact; 
}

int main()
{
    int iValue = 0;
    unsigned long int iRet = 0;

    printf("Enter the number whose factorial you want to find:\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("The factorial of [%d] is [%lu]:", iValue, iRet);
    return 0;
}


///This program has one complexity as it shows factorial of number upto only 32   , so optimize it. agaian