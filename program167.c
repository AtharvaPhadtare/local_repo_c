#include<stdio.h>

int StrlenX(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if((*str >= 65) && (*str <= 90))
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

    iRet = StrlenX(Arr);

    printf("Number of capital letters are: %d",iRet);
    return 0;
}