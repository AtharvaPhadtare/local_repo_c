#include<stdio.h>
#include<stdbool.h>

bool CheckOccurence(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if((*str == 'w'))
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

    printf("Enter the String: \n");
    scanf("%[^'\n']s",Arr);

    bRet = CheckOccurence(Arr);
    if(bRet == true)
    {
        printf("The sentence contains w in it.");
    }
    else
    {
        printf("The sentence does not contains w in it.");
    }
    return 0;
}