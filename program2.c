// Problem statement : accept 2 numbers from user and perform it's addition.
#include<stdio.h>

int main()
{
    int i,j,k;
    
    printf("Enter first number:\n");
    scanf("%d",&i);

    printf("Enter second number:\n");
    scanf("%d",&j);

    k = i+j;

    printf("Addition of two numbers is:%d\n",k);
    return 0;
}

#include<stdio.h>

int main()
{
    int Ans, iValue1, iValue2 = 0;

    printf("Enter first number : ");
    scanf("%d", &iValue1);

    printf("Enter second number : ");
    scanf("%d", &iValue2);

    Ans = iValue1 + iValue2;

    printf("The addition of two number is: %d",Ans);
    return 0;

}