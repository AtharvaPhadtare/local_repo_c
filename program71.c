#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    //      1          2        3
    for(iCnt = 1;iCnt <=iNo; iCnt++)
    {
        printf("%d\t",iCnt);    //4
        printf("*\t");          //5
    }
    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter number of times you want to print number and *: \n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}