#include<stdio.h>

int CountVowel(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e')|| (*str == 'i') || (*str == 'o')||(*str == 'u'))
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

    iRet = CountVowel(Arr);

    printf("The number of vowels are: %d",iRet);
    return 0;
}