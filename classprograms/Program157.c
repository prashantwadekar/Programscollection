//Write a program in c which create new file
//create new Marvellous.txt in folder
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>

int main()
{
    int fd=0;
    fd=creat("Marvellous.txt",0777);

    if(fd==-1)
    {
        printf("Unable to create fie\n");
    }
    else
    {
        printf("File Sucessfully created\n");
    }
    return 0;
}