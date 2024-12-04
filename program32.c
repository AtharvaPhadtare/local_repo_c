#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo)
{
    if(iNo % 4 == 0)
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

    printf("Enter the number you want: \n");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue);

    if(bRet == true)
    {
        printf("%d : The number is divisible by 4\n",iValue);
    }
    else
    {
        printf("%d : The number is not divisible by 4\n",iValue);

    }
    return 0;
}