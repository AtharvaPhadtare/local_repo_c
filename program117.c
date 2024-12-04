#include<stdio.h>


//void Display(int *ptr,int iSize)
void Display(int ptr[],int iSize)
{
    int i = 0;
    //      1       2       3
    for(i = 0;i < iSize;i++)
    {
        printf("%d\n",ptr[i]);//4
        // printf("%d\n",*( ptr + i));
    }

}
int main()
{
    int Arr[5] = {10,20,30,40,50};
    Display(Arr,5);   //Display(100,5)

    return 0;
}


/*
#include<stdio.h>

void display(int *ptr, int iSize)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d", *ptr);
        ptr++;
    }
}

int main()
{
    int Arr[5] = {10, 20, 30, 40, 50};

    display(Arr, 5);
    return 0;
}
*/



/*
#include<stdio.h>


void display(int str[],int iSize)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n", str[iCnt]);
    }
}
int main()
{
    int Arr[5] = {10,20,30,40,50};

    display(Arr, 5);
    return 0;

}
*/