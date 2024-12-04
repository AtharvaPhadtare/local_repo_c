#include<stdio.h>
#include<stdbool.h>

bool CheckRange(int iNo)
{
    if((iNo>=10) && (iNo<<20))
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

    printf("Enter the number that you want:\n");
    scanf("%d",&iValue);

    bRet = CheckRange(iValue);
    if(bRet == true)
    {
        printf("%d : The number is in the range\n",iValue);
    }
    else
    {
        printf("%d : The number is not in the range\n",iValue);
    }
    return 0;
}