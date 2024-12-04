#include<stdio.h>

int Power(int iNo1,int iNo2)
{
    int iCnt = 1;
    int iMul = 1;
    for(iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        iMul = iMul * iNo1;
    }
    return iMul;
    

}
int main()
{
    int X = 0;
    int Y = 0;
    int iRet = 0;

    printf("Enter the value: ");
    scanf("%d",&X);

    printf("Enter the rays to power value: ");
    scanf("%d",&Y);

    iRet = Power(X,Y);

    printf("Answer is: %d",iRet);


    return 0;

}