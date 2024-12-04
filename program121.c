#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iCount = 0;
    int *Brr = NULL;
    int i = 0;

    // Step 1: Accept number of elements from user
    printf("Enter number of elements that you want: \n");
    scanf("%d", &iCount);

    // Step 2: Allocate dynamic memory for that number of elements
    Brr = (int *)malloc(iCount * sizeof(int));

    // Step 3: Accept the values from user and store it in memory
    printf("Enter the elements: \n");
    for (i = 0; i < iCount; i++)
    {
        scanf("%d", &Brr[i]);
    }

    printf("Entered elements are: \n");
    for (i = 0; i < iCount; i++)
    {
        printf("%d\n", Brr[i]);
    }

    // Step 4: Pass the address of that memory to the function(Any)

    // Step 5: After  using that memory deallocate it explicitly
    free(Brr);

    return 0;
}

/*

Step 1: Accept number of elements from user
Step 2: Allocate dynamic memory for that number of elements
Step 3: Accept the values from user and store it in memory
Step 4: Pass the address of that memory to the function(Any)
Step 5: After  using that memory deallocate it explicitly
*/

#include <stdio.h>
7
int Addition(int str[], int iSize)
{
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    int *Brr = NULL;

    printf("Enter the number of elements you want: ");
    scanf("%d", &iValue);

    return 0;
}