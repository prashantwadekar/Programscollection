#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
    int fd=0,iCnt=0,iRet=0,i=0;
    char fname[20];
    char Buffer[10];

    printf("enter file name:\n");
    scanf("%s",fname);

    fd=open(fname,O_RDWR);
    if(fd==-1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    while((iRet=read(fd,Buffer,10))!=0)
    {
        for(i=0;i<iRet;i++)
        {
            if((Buffer[i]='A')&&(Buffer[i]<='Z'))
            {
                iCnt++;
            }
        }
    }
    printf("Total number of capital letters are:%d\n",iCnt);

    close(fd);

    return 0;
}