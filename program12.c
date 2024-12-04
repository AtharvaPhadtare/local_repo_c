#include<stdio.h>
#include<stdbool.h>

bool displayresult(float fMarks)
{
    if((fMarks>=0.0f) && (fMarks<35.0f))
    {
        return false;
    }
    else if ((fMarks>=35) && (fMarks<=100))
    {
        return true;
    }
    
}

int main()
{
    float fValue = 0.0f;
    bool bRet = false;

    printf("Enter the marks:");
    scanf("%d",&fValue);

    bRet = displayresult(fValue);
    if (bRet == true)
    {
        printf("The student has passed the exam.");
    }
    else
    {
        printf("The student has failed the exam.");
    }
    return 0;
}