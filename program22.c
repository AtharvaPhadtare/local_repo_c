#include<stdio.h>

void display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1;iCnt<=iNo;iCnt++)
    {
        printf("Jai Hanuman.......\n");
    } 
}

int main()
{
    int iValue = 0;

    printf("Enter how many times you want to print the Jai Hanuman statement.");
    scanf("%d",&iValue);

    display(iValue);
    return 0;
}