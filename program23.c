#include<stdio.h>

void display()
{
    int iCnt = 0;

    iCnt = 1;                           //1
    while (iCnt<=5)                     //2
    {
        printf("Jai Hanuman ......\n"); //4
        iCnt++;                         //3
    }
    
}

int main()
{
    display();
    
    return 0;
}