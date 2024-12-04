#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
    int fd = 0;
    char Filename[30];

    printf("Enter the file name that you want to craete: \n");
    scanf("%s", Filename);

    fd = creat(Filename, 0777);

    if (fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File successfully created with fd %d\n", fd);
    }

    return 0;
}
