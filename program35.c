#include<stdio.h>

///Factors code 

//Time complexity: O(n)

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    printf("Factors of %d are:\n ",iNo);

    for(iCnt = 1; iCnt < iNo ;iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    DisplayFactors(iValue);
    return 0;
}


////////////////
////////       Time Complexity: O(n/2)
/*

#include<stdio.h>

void Display_factors(int iNo)
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d,\t", iCnt);
        }
    }
}

int main()
{

    int iValue = 0;

    printf("Enter the number whose factors you want to find out: ");
    scanf("%d", &iValue);

    Display_factors(iValue);

    return 0;

}
*/