#include<stdio.h>

int CountEvenDigits(int iNo)
{
    int iCount = 0;
    int iDigit = 0;
    
    if(iNo< 0)
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if(iDigit % 2 == 0)
        {
            printf("%d\n",iDigit);
        } 
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    CountEvenDigits(iValue);
    printf("Number of even digits are : %d\n");

    return 0;
}
