#include<stdio.h>
#include<stdbool.h>

//User is going to enter only positive inputs

// Algorithm
/*
        START
            Accept one number from user as no
            Divide the number no by 3 
            If remainder is 0
            Divide the number by 5
            If remainder is 0
            then print number is divisible by 3 and 5
            otherwise display the number is not divisible by 3 and 5 
        Stop
*/



/////////////////////////////////////////////
//                                         THIS IS CALLED THE FUNCTION HEADER AND IT CONTAIN'S 6 ELEMENTS
//  Function Name: checkdivisible
//  Description: Use to check whether number is divisible by 3 and 5
//  Input:  Integer
//  Output: Bool
//  Author: Atharva Hemant Phadtare
//  Date:   16/04/2024
//
////////////////////////////////////////////

bool checkdivisible(unsigned int iNo)
{
    if(((iNo % 3) ==0) && ((iNo % 5) == 0))
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

    bRet = checkdivisible(iValue1);
    if(bRet == true)
    {
        printf("%d is divisible by 3 and 5.\n",iValue1);
    }
    else
    {
        printf("%d is not divisible by either 3 or 5.\n",iValue1);
    }
    return 0;
}

/*
    Logical operator 

    First       Second       &&         ||
    true        true        true       true
    false       false       false      false
    true        false       false      true
    false       true        false      true

*/