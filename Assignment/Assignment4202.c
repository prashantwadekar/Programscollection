#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<io.h>
int main()
{
    int fd=0,iRet=0,iCnt=0,i=0;
    char fname[30];
    char Buffer[10];

    printf("Enter file name:\n");
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
            if((Buffer[i]>='a')&&(Buffer[i]<='z'))
            {
                iCnt++;
            }
        }
    }

    printf("Total number of small letters are %d",iCnt);

    close(fd);

    return 0;
}