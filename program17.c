/*
    0 to 35     Fail class                          (35 is exclusive)
    35 to 50    Pass class                          (50 is exclusive)
    50 to 60    Second class                        (60 is exclusive)
    60 to 75    First class                         (75 is exclusive)
    75 to 100   First class with Distinction        (100 is inclusive)

*/

#include<stdio.h>

//User defined macro
#define RET_INVALID -1
#define RET_FAIL 1
#define RET_PASS 2
#define RET_SECOND_CLASS 3
#define RET_FIRST_CLASS 4
#define RET_FIRST_CLASS_DISTINCTION 5

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
    else if((fMarks>=35.0f) && (fMarks<50.0f))
    {
        return RET_PASS;
    }   
    else if((fMarks>=50.0f) && (fMarks < 60.0f))
    {
        return RET_SECOND_CLASS;
    }
    else if((fMarks>=60.0f) && (fMarks <75.0f))
    {
        return RET_FIRST_CLASS;
    }
    else if((fMarks>=75.0f) && (fMarks <=100.0f))
    {
        return RET_FIRST_CLASS_DISTINCTION;
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
    else if(iRet == RET_SECOND_CLASS)
    {
        printf("The student has passed the exam with second class.\n");
    }
    else if(iRet == RET_FIRST_CLASS)
    {
        printf("The student has passed the exam with first class.\n");
    }
    else if(iRet == RET_FIRST_CLASS_DISTINCTION)
    {
        printf("The student has passed the exam with first class with distinction.\n");
    }
    return 0;
}