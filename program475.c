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
    }
    else
    {
        printf("File successfully opened with fd %d\n", fd);
    }

    return 0;
}

/*
    Here all O stands for OPEN.
    
    O_RDONLY        READ MODE
    O_WRONLY        WRITE MODE
    O_RDWR          READ + WRITE MODE
    O_CREATE        CREATE MODE
    O_APPEND        APPEND MODE

*/