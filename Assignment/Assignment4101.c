//Q.1
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<io.h>
int main()
{
    int fd=0;
    char Fname[30];
    printf("Enter file name\n");
    scanf("%s",Fname);

    fd=open(Fname,O_RDWR);

    if(fd==-1)
    {
        printf("unable to open file\n");
    }
    else
    {
        printf("File opened sucessfully\n");
    }
    return 0;
}