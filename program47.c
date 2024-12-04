//Input: 5
//Output : 1*2*3*4*5 = 120

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    long int iFact = 1;
    for(iCnt = 1; iCnt <=iNo ;iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact; 

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number whose factorial you want to find:\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("The factorial of [%d] is [%d]:", iValue, iRet);
    return 0;
}