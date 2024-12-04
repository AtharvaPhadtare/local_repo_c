//Input: 5
//Output: A     B      C        D       E 


// 5 4 3 2 1
#include<stdio.h>

void Display(int iNo)
{
   
    int iCnt = 0;
    char ch = 'A';

    for(iCnt = 1 ;iCnt <=iNo; iCnt++)
    {
        printf("%c\t",ch);
        ch++;
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number of times you want to print alphabet: \n");
    scanf("%d",&iValue);
    
    Display(iValue);
    return 0;
}