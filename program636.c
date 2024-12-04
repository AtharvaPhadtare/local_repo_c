// String1: hello
// string2: olhel

// String1: CAT
// String2: ACT

// String1: TAN
// String2: ANT

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void CalculateFrequency(char *str)
{
    int Count[26] = {0};
    int i = 0;
    while (*str != '\0')
    {
        Count[*str - 'a']++;
        str++;
    }

    for (i = 0; i < 26; i++)
    {
        if (Count[i] != 0)
        {
            printf("Frequency of %c is: %d\n", 'a' + i, Count[i]);
        }
    }
}

int main()
{
    char Arr1[10];

    printf("Enter the word: \n");
    scanf("%s", Arr1);

    CalculateFrequency(Arr1);

    return 0;
}