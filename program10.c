//Check the range of the numbers between 30 and 50

#include<stdio.h>
#include<stdbool.h>
/*
    START
        Accept one number as No
        If the number is greater than 30 and if it is less than 50.
        Then display the message as the number is in range 
        otherwise 
        display the message number not in range.
    STOP
*/

bool checkrange(int iNo)
{
    if ((iNo>= 30) && (iNo<=50))
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

    printf("Enter any number:");
    scanf("%d",&iValue);

    bRet = checkrange(iValue);
    if(bRet == true)
    {
        printf("[%d], is in the range 30 and 50\n",iValue);
    }
    else
    {
        printf("[%d], is not in the range 30 and 50\\n",iValue);
    }
    return 0;
}