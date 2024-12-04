#include<stdio.h>

// This is update String question

void DisplayArr(char *str)
{
    while(*str != '\0')
    {
        printf("%c\n",*str);
        str++;
    }
}

int main()
{
    char Arr[100];

    printf("Enter the String: \n");
    scanf("%[^'\n']s",Arr);

    DisplayArr(Arr);


    return 0;
}