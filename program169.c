#include<stdio.h>

int StrlenSmallX(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if((*str >= 97) && (*str <= 122))
        {
            iCount++;
        } 
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the String: \n");
    scanf("%[^'\n']s",Arr);

    iRet = StrlenSmallX(Arr);

    printf("The number of small characters are: %d",iRet);
    return 0;
}