#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main()
{
    int fd = 0;
    char Filename[30];
    char Arr[100] = {'\0'};
    int iRet = 0;

    printf("Enter the file name that you want to open: \n");
    scanf("%s", Filename);

    fd = open(Filename, O_RDWR); // This is O meaning O not zero.

    if (fd == -1)
    {
        printf("Unable to open file\n");
        return 0;
    }

    iRet = read(fd, Arr, 10); // This 10 repersents reading first 10 characters

    printf("Data from file : %s\n", Arr);

    iRet = read(fd, Arr, 10);

    printf("Data from file : %s\n", Arr);

    close(fd);

    return 0;
}
