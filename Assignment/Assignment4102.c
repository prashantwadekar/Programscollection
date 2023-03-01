#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<io.h>
int main()
{
    int fd=0;
    char Fname[20];

    printf("Enter file name\n");
    scanf("%s",Fname);

    fd=creat(Fname,0777);
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