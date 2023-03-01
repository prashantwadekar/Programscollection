//open file write mode and write data(overwrite) end of file
//LB17.txt >> Marvellous
//Hellollous
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
   int fd=0;
   char Arr[]="Hello";
   fd=open("LB17.txt",O_RDWR);
   if(fd==-1)
   {
       printf("Unable to open file\n");
       return -1;
   }
   write(fd,Arr,5);

   close(fd);

    return 0;
}