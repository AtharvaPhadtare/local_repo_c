#include<stdio.h>

void display(int iNo)
{
    int iCnt = 0;

    iCnt = 1;                           //1
    while (iCnt<=iNo)                     //2
    {
        printf("%d : Jai Hanuman ......\n",iCnt); //4
        iCnt++;                         //3
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter number of times you want to print Jai Hanuman......\n");
    scanf("%d",&iValue);

    display(iValue);
    
    return 0;
}