#include<stdio.h>

void StrlwrX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') &&(*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}


int main()
{
    char Arr[30];

    printf("Enter the string: ");
    scanf("%[^'\n']s",Arr);

    StrlwrX(Arr);

    printf("Updated string is : %s\n",Arr);
    
    return 0;

}