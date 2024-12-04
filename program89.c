//Input: 5
//Output: A     B      C        D       E 


// 5 4 3 2 1
#include<stdio.h>

void Display(int iNo)
{
   
    int iCnt = 0;
    char ch = '\0';
    //      1                   2               3
    for(iCnt = 1 , ch = 'A'; iCnt <=iNo ; iCnt++,ch++)
    {
        printf("%c\t",ch);      //3
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number of times you want to print A , B , C ..... serially : \n");
    scanf("%d",&iValue);
    
    Display(iValue);
    return 0;
}