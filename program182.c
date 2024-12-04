#include<stdio.h>
#include<stdbool.h>

int CheckFrequency(char *str,char cCheck)
{
    int iCnt = 1;
    while(*str != '\0')
    {
        if((*str == cCheck))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[100];
    int iRet = 0;
    char cValue;

    printf("Enter the String: \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character which you want to search: ");
    scanf(" %c",&cValue);

    iRet = CheckFrequency(Arr,cValue);
    
    printf("The letter occours %d times",iRet);
    
    return 0;
}