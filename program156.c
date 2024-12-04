#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(char ch)
{
    if((ch>= '0') && (ch <= '9'))
    {
        printf("It is a digit\n");
    }
    else
    {
        printf("It is not a digit.");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter one charater: ");
    scanf("%c",&cValue);

    CheckDigit(cValue);
    return 0;
}