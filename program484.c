#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main()
{
    int fd = 0;
    char Filename[30];
    char Buffer[100] = {'\0'};
    int iRet = 0;

    printf("Enter the file name that you want to open: \n");
    scanf("%s", Filename);

    fd = open(Filename, O_RDWR); // This is O meaning O not zero.

    if (fd == -1)
    {
        printf("Unable to open file\n");
        return 0;
    }

    while (iRet = read(fd, Buffer, sizeof(Buffer)) != 0)
    {
        printf("%d\n", iRet);
    }

    close(fd);

    return 0;
}
