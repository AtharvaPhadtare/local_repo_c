#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char ch)
{
    if((ch>= 'a') && (ch <= 'z'))
    {
        printf("It is a small letter\n");
    }
    else
    {
        printf("It is not a small letter.");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter one character: ");
    scanf("%c",&cValue);

    CheckCapital(cValue);
    return 0;
}