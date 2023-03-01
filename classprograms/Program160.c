//write Marvellous 22 bytes and close file
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
    int fd=0,iRet=0;
    char Fname[30];
    char Data[]="Marvellous infosyatems";
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
    iRet=write(fd,Data,22);

    printf("%d bytes gets sucessfully written in file\n",iRet);
    return 0;
}