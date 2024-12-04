#include<stdio.h>

// This is update String question

void DisplayArr(char str[])
{
    int iCnt = 0;
    for(iCnt = 0; str[iCnt] != '\0'; iCnt++)
    {
        printf("%c\n",str[iCnt]);
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