#include<stdio.h>

int displayresult(float fMarks)
{
    if((fMarks < 0.0f) || (fMarks >100.0f))     //Filter , it comes under input validation
    {
        return 1;
    }
    if((fMarks>=0.0f) && (fMarks<35.0f))
    {
       return 2; 
    }
    else
    {
        return 3;
    }
    
}

int main()
{
    float fValue = 0.0f;
    int iRet = 0.0f;

    printf("Enter the marks:");
    scanf("%f",&fValue);

    iRet = displayresult(fValue);
    if (iRet == 1)
    {
        printf("Invalid input.\n");   
    }
    else if(iRet == 2)
    {
        printf("The student has failed the exam.\n");
    }
    else if(iRet ==3)
    {
        printf("The student has passed the exam.\n");
    }
    return 0;
}