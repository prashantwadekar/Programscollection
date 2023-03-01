//open file
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
    int fd=0;
    char Fname[30];
    printf("Enter file name\n");
    scanf("%s",Fname);

    fd=open(Fname,O_RDWR);

    if(fd==-1)
    {
        printf("Unable to open fie\n");
    }
    else
    {
        printf("File Sucessfully opened with FD: %d\n",fd);
    }
    return 0;
}