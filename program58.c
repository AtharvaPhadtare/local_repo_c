#include<stdio.h>

int DisplayOddDigits(int iNo)
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
        if(iDigit % 2 != 0)
        {
            printf("%d\n",iDigit);
        } 
        iNo = iNo / 10; 
    }
    return iCount++;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    iRet = DisplayOddDigits(iValue);
    printf("Number of even digits are : %d\n",iRet);

    return 0;
}
