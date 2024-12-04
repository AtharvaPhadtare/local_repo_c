#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main()
{
    int fd = 0;
    char Filename[30];
    char Buffer[100] = {'\0'};
    ssize_t iRet = 0;
    int iSum = 0;
    int i = 0;
    int iCount = 0;

    printf("Enter the file name that you want to open: \n");
    scanf("%29s", Filename); // Limit input to prevent buffer overflow

    fd = open(Filename, O_RDWR); // This is O meaning O not zero.

    if (fd == -1)
    {
        printf("Unable to open file\n");
        return 1; // Use non-zero return value for error
    }

    while ((iRet = read(fd, Buffer, sizeof(Buffer))) > 0)
    {
        for (i = 0; i < iRet; i++)
        {
            if ((Buffer[i] >= 'a') && (Buffer[i] <= 'z'))
            {
                iCount++;
            }
        }
    }

    if (iRet == -1)
    {
        printf("Error reading from file\n");
        close(fd);
        return 1;
    }

    printf("Number of small characters are:  %d\n", iCount);

    close(fd);

    return 0;
}
