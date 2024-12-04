// Problem statement : accept 2 numbers from user and perform it's addition.
#include<stdio.h>

int main()
{
    //int i,j,k;
    float fValue1 = 0.0f,fValue2 = 0.0f,fResult = 0.0f;
    
    printf("Enter first number:\n");
    scanf("%f",&fValue1);

    printf("Enter second number:\n");
    scanf("%f",&fValue2);

    fResult = fValue1 + fValue2;

    printf("Addition of two numbers is:%f\n",fResult);
    return 0;
}