#include<stdio.h>
#include<stdbool.h>


// This is interview question

int CheckOccurence(char *str,char cCheck)
{
    int iCnt = 1, iPos = -1;
    while(*str != '\0')
    {
        if((*str == cCheck))
        {
            iPos = iCnt;
        }
        iCnt++;
        str++;
    }
    return iPos;
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
        printf("Last occurenec of the letter is: %d\n",iRet);
    }
    else
    {
        printf("There is no such letter\n");
    }
    return 0;
}