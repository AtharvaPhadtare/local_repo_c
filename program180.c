#include<stdio.h>
#include<stdbool.h>

int CheckOccurence(char *str,char cCheck)
{
    int iCnt = 1;
    bool bFlag = false;
    while(*str != '\0')
    {
        if((*str == cCheck))
        {
            bFlag = true;
            break;
        }
        iCnt++;
        str++;
    }
    if(bFlag == true)
    {
        return iCnt;
    }
    else
    {
        return -1;
    }
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

    iRet = CheckOccurence(Arr,cValue);
    if(iRet != -1)
    {
        printf("Letter occurs at position %d\n",iRet);
    }
    else
    {
        printf("There is no such letter\n");
    }
    return 0;
}