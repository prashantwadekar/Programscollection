//Count letters in file
//File of size
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
   int fd=0,iRet=0,i=0;
   char fname[20];

   printf("Enter File Name\n");
   scanf("%s",fname);

   fd=open(fname,O_RDWR);
   if(fd==-1)
   {
       printf("Unable to open file\n");
       return -1;
   }
   iRet=lseek(fd,0,2);
   
   printf("Size of File is :%d\n",iRet);

   close(fd);

   return 0;
}