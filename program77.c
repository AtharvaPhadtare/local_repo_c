//Input: 5
//Output: 11 22 3
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 0;iCnt <=iNo; iCnt++)
    {
        printf("%d\t%d\t",iCnt,iCnt);    
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