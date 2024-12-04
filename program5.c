/*

        Step1: Understand the problem statement
        Step2: Write the algorithm 
        Step3: Decide the programming language
        Step4: Write the program
        Step5: Test the program

*/

//
// Problem statement: Accept two numbers and perform addition



// Step1 : Understand the problem statement 

//



#include<stdio.h>

float addition(float fno1 , float fno2)
{
    float fans = 0.0f;
    fans = fno1 + fno2;
    return fans;
}

int main()
{
    float fValue1 = 0.0f,fValue2 = 0.0f,fResult = 0.0f;
    
    printf("Enter first number:\n");
    scanf("%f",&fValue1);

    printf("Enter second number:\n");
    scanf("%f",&fValue2);

    fResult = addition(fValue1, fValue2);    

    printf("Addition of two numbers is:%f\n",fResult);
    return 0;
}

// Step5: Test the program 
//Input1 = 10.0 , Input2 = 20.0
//Result = 30.0