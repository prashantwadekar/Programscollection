//6 bytes read from file on screen
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
    int fd=0,iRet=0;
    char Fname[30];
    char Data[7];

    printf("Enter file name\n");
    scanf("%s",Fname);

    fd=open(Fname,O_RDWR);

    if(fd==-1)
    {
        printf("Unable to open fie\n");
        return -1;  //return to OS
    }
    else
    {
        printf("File Sucessfully opened with FD: %d\n",fd);
    }
    iRet=read(fd,Data,6);

    printf("%d bytes gets sucessfully read from file\n",iRet);

    printf("Data from the file is:%s\n",Data);

    return 0;
}