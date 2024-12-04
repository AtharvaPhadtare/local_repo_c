// String1: hello
// string2: olhel

// String1: CAT
// String2: ACT

// String1: TAN
// String2: ANT

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool CheckAnagram(char *str1, char *str2)
{
    int Count1[26] = {0};
    int Count2[26] = {0};
    int i = 0;

    while(*str1 != '\0')
    {
        Count1['a' - *str1]++;
        str1++;
    }

    while(*str2 != '\0')
    {
        Count1['a' - *str1]++;
        str2++;
    }

    for (i = 0; i < 26;i++)
    {
        if(Count1[i] != Count2[i])
        {
            break;
        }
    }

    if(i == 26)
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
    char Arr1[10];
    char Arr2[10];
    bool bRet = false;

    printf("Enter the word: \n");
    scanf("%s", Arr1);

    printf("Enter the word: \n");
    scanf("%s", Arr2);

    bRet = CheckAnagram(Arr1, Arr2);
    if (bRet == true)
    {
        printf("Strings are Anagram.\n");
    }
    else
    {
        printf("String's are not Anagram.\n");
    }

    return 0;
}