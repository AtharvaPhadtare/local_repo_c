#include<stdio.h>

void display()
{
    int iCnt = 1;
    while(iCnt<=5)
    {
        printf("%d\n",iCnt);
        iCnt++;
    }
}
int main()
{
    display();
    return 0;
}