//Count vowels in file
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

   printf("Enter File Name\n");
   scanf("%s",fname);

   fd=open(fname,O_RDWR);
   if(fd==-1)
   {
       printf("Unable to open file\n");
       return -1;
   }
   while((iRet=read(fd,Buffer,10))!=0) //10 10 2 0
   {
       for(i=0;i<iRet;i++) // 1 2 3 4 5 6 7 8 9
       {
           if((Buffer[i]=='a')||(Buffer[i]=='e')||(Buffer[i]=='i')||(Buffer[i]=='o')||(Buffer[i]=='u'))
           {
               iCnt++;
           }
       }
   }

   printf("Total Number of vowels are:%d\n",iCnt);

   close(fd);

   return 0;
}