#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
    int fd=0,iRet=0;
    char Fname[30];
    char Data[]="Hello world";
    printf("Enter file name\n");
    scanf("%s",Fname);

    fd=open(Fname,O_RDWR);

    if(fd==-1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File opened sucessfully\n");
    }
    write(fd,Data,11);

    printf("%s at the end of %s",Data,Fname);
    return 0;
}