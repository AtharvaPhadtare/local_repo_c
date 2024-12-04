#include<stdio.h>

int Count(int iNo)
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
        if(iDigit > 5)
        {
            iCount++;
        } 
        iNo = iNo / 10; 
    }
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    iRet = Count(iValue);
    printf("Number of even digits are : %d\n",iRet);

    return 0;
}
