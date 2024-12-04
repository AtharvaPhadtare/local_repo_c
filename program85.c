//Input: 5
//Output: -5 5 -4 4 -3 3 -2 -1


// 5 4 3 2 1
#include<stdio.h>

void Display(int iNo)
{
   
    int iCnt = 0;
    for(iCnt = -iNo ;iCnt < 0; iCnt++)
    {
        printf("%d\t",iCnt);
        printf("%d\t",-iCnt);
    }
    printf("\n");



    //Or other way 
    //for(iCnt = -iNo ;iCnt < 0; iCnt++)
    //{
   //     printf("%d\t%d\t",iCnt,-iCnt);
   //     p
   // }
}

int main()
{
    int iValue = 0;

    printf("Enter number of times you want to print number and *: \n");
    scanf("%d",&iValue);
    
    Display(iValue);
    return 0;
}