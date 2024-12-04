#include<stdio.h>

// This is update String question

void UpdateString(char *str)
{
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            *str = '*';
        }
        str++;
    }
}

int main()
{
    char Arr[100];

    printf("Enter the String: \n");
    scanf("%[^'\n']s",Arr);

    UpdateString(Arr);

    printf("Updates String is: %s\n",Arr);

    return 0;
}