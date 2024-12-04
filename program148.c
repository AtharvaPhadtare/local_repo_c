#include <stdio.h>

void Swap(int *p, int *q)
{
    int temp = 0;

    temp = *p;
    *p = *q;
    *q = temp;
}

int main()
{
    int A = 0;
    int B = 0;

    printf("Enter the first number: ");
    scanf("%d", &A);

    printf("Enter the last number: ");
    scanf("%d", &B);

    Swap(&A, &B); // Swap(100,200);

    printf("Value of A after swapping is: %d\n", A);
    printf("Value of B after swapping is: %d\n", B);

    return 0;
}


/*
#include <stdio.h>

int Display(int *p, int *q)
{
    int temp = 0;

    temp = *p;
    *p = *q;
    *q = temp;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the first number: ");
    scanf("%d", &iValue1);

    printf("Enter the second number: ");
    scanf("%d", &iValue2);

    Display(&iValue1, &iValue2);

    printf("The value after swapping at memory location are: %d and %d : ", iValue1, iValue2);

    return 0;
}

*/