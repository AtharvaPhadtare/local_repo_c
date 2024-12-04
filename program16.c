#include<stdio.h>

//User defined macro
#define RET_INVALID 1
#define RET_FAIL 2
#define RET_PASS 3

int displayresult(float fMarks)
{
    if((fMarks < 0.0f) || (fMarks >100.0f))     //Filter , it comes under input validation
    {
        return RET_INVALID;
    }
    if((fMarks>=0.0f) && (fMarks<35.0f))
    {
       return RET_FAIL; 
    }
    else
    {
        return RET_PASS;
    }   
}

int main()
{
    float fValue = 0.0f;
    int iRet = 0.0f;

    printf("Enter the marks:");
    scanf("%f",&fValue);

    iRet = displayresult(fValue);
    if (iRet == RET_INVALID)
    {
        printf("Invalid input.\n");   
    }
    else if(iRet == RET_FAIL)
    {
        printf("The student has failed the exam.\n");
    }
    else if(iRet == RET_PASS)
    {
        printf("The student has passed the exam.\n");
    }
    return 0;
}