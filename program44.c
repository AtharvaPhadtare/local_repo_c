#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = true;  //Here we have used flag case

    if(iNo <0)  //Updator
    {
        iNo = -iNo; //   -(-28)
    }
    //      1           2           3
    for(iCnt = 2; iCnt <= (iNo/2) ;iCnt++)
    {
        if((iNo % iCnt == 0))   //4
        {
            bFlag = false;
            break;
        }
    }
    return bFlag;  
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number you want:");
    scanf("%d", &iValue);

    bRet = CheckPrime(iValue);
    if(bRet == true)
    {
        printf("The number [%d] is a prime number.", iValue);
    }
    else
    {
        printf("The number [%d] is not a prime number.", iValue);
    }
    return 0;
}
