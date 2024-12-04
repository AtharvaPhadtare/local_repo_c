// Problem statement : accept 2 numbers from user and perform it's addition.
#include<stdio.h>

int main()
{
    //int i,j,k;
    int iValue1 = 0,iValue2 = 0,iResult = 0;
    
    printf("Enter first number:\n");
    scanf("%d",&iValue1);

    printf("Enter second number:\n");
    scanf("%d",&iValue2);

    iResult = iValue1 + iValue2;

    printf("Addition of two numbers is:%d\n",iResult);
    return 0;
}