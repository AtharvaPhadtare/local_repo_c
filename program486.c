#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main()
{
    int fdRead = 0;
    int fdWrite = 0;
    char Filename[30];
    char Buffer[100] = {'\0'};
    ssize_t iRet = 0;

    printf("Enter the existing file name that you want to open: \n");
    scanf("%29s", Filename); // Prevent buffer overflow by limiting input to 29 characters

    fdRead = open(Filename, O_RDWR); // This is O meaning O not zero.

    if (fdRead == -1)
    {
        printf("Unable to open file\n");
        return 1; // Use non-zero return value for error
    }

    printf("Enter the name of file that you want to create:\n");
    scanf("%29s", Filename); // Prevent buffer overflow by limiting input to 29 characters

    fdWrite = creat(Filename, 0777);
    if (fdWrite == -1)
    {
        printf("Unable to create new file\n");
        close(fdRead); // Close the opened file before returning
        return 1;      // Use non-zero return value for error
    }

    while ((iRet = read(fdRead, Buffer, sizeof(Buffer))) > 0)
    {
        write(fdWrite, Buffer, iRet);                                       // Understand this very properly.
        memset(Buffer, 0, sizeof(Buffer));                                  // Very important function.
    }

    if (iRet == -1)
    {
        printf("Error reading from file\n");
    }

    close(fdRead);
    close(fdWrite);

    return 0;
}
