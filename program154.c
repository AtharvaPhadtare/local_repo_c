#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char ch)
{
    if((ch>= 65) && (ch <= 90))
    {
        printf("It is a capital letter\n");
    }
    else
    {
        printf("It is not a capital letter.");
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