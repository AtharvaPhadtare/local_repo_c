    /*
            Accept number as no
            Search all it's factors 
            Perform Addition of all factors
            If Addition is same as No 
            Then Display no is Perfect number
            Other 
            Display No is not perfect number
    */

#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo <0)      //Filter
    {
        printf("Please enter positive number:\n");
        return false;
    }
    for(iCnt = 1; iCnt <= (iNo/2) ; iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number you want:\n");
    scanf("%d", &iValue);

    bRet = CheckPerfect(iValue);
    if(bRet == true)
    {
        printf("The number %d is a perfect number", iValue);
    }
    else
    {
        printf("The number %d is not a perfect number", iValue);
    }
    return 0;
}
