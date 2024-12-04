#include<stdio.h>
#include<stdbool.h>

bool CheckOccurence(char *str,char cCheck)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if((*str == cCheck))
        {
            return true;
        }
        str++;
    }
    return false;
}

int main()
{
    char Arr[100];
    int bRet = false;
    char cValue;

    printf("Enter the String: \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character which you want to search: ");
    scanf(" %c",&cValue);

    bRet = CheckOccurence(Arr,cValue);
    if(bRet == true)
    {
        printf("The sentence contains character in it.");
    }
    else
    {
        printf("The sentence does not contains character in it.");
    }
    return 0;
}