#include<stdio.h>

int main()
{
    char Arr[50];

    printf("Enter you full name: \n");
    scanf("%[^'\n']s",Arr);

    printf("Hello: %s",Arr);
    
    return 0;
}



/*
#include<stdio.h>

int main()
{
    char Arr[30];

    printf("Enter you'r name: ");
    scanf("%[^'\n']s", Arr);

    printf("Hello: %s", Arr);

    return 0;
}

*/