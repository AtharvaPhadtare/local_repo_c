#include<stdio.h>
#include<stdbool.h>

//User is going to enter only positive inputs

// Algorithm
/*
        START
            Accept one number from user as no
            Divide the number no by 2
            If remainder is 0
            Then display the result as even number 
            other display result as odd number 
        Stop
*/



/////////////////////////////////////////////
//                                         THIS IS CALLED THE FUNCTION HEADER AND IT CONTAIN'S 6 ELEMENTS
//  Function Name: checkevenodd
//  Description: Use to check whether number is even or odd
//  Input:  Integer
//  Output: Bool
//  Author: Atharva Hemant Phadtare
//  Date:   16/04/2024
//
////////////////////////////////////////////
bool checkevenodd(unsigned int iNo)
{
    if(iNo % 2 ==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    unsigned int iValue1 = 0;
    bool bRet = false;

    printf("Enter the positive number: \n");
    scanf("%d",&iValue1);

    bRet = checkevenodd(iValue1);
    if(bRet == true)
    {
        printf("%d is Even number.\n",iValue1);
    }
    else
    {
        printf("%d is Odd number.\n",iValue1);
    }
    return 0;
}