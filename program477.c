#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main()
{
    int fd = 0;
    char Filename[30];
    char Arr[100];

    printf("Enter the file name that you want to open: \n");
    scanf("%s", Filename);

    fd = open(Filename, O_RDWR); // This is O meaning O not zero.

    if (fd == -1)
    {
        printf("Unable to open file\n");
        return 0;
    }

    printf("Enter the data that you want to write: \n");
    scanf(" %[^'\n']s", Arr);

    write(fd, Arr, strlen(Arr));

    return 0;
}
