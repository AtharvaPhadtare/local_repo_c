#include<stdio.h>

int main()
{
    int Arr[5] = {10,20,30,40,50};

    int iCnt = 0;
    //      1       2       3
    for(iCnt = 0;iCnt < 5;iCnt++)
    {
        printf("%d\n",Arr[iCnt]);//4
    }

    return 0;
}