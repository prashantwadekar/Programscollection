#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
   int fd=0,iValue=0;
   char Arr[10];
   char fname[30];
   printf("Enter file name:\n");
   scanf("%s",fname);

   fd=open(fname,O_RDWR);
   if(fd==-1)
   {
       printf("Unable to open file\n");
       return -1;
   }
   printf("Enter number of characters:\n");
   scanf("%d",&iValue);

   lseek(fd,0,0);

   read(fd,Arr,iValue);

   printf("Data from file is:\n");
   
   write(1,Arr,iValue);

   close(fd);

    return 0;
}