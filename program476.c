#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
    int fd = 0;
    char Filename[30];

    printf("Enter the file name that you want to open: \n");
    scanf("%s", Filename);

    fd = open(Filename, O_RDWR); // This is O meaning O not zero.

    if (fd == -1)
    {
        printf("Unable to open file\n");
        return 0;
    }

    write(fd, "Hello World", 11);

    return 0;
}
