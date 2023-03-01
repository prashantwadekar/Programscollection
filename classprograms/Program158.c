//Accept file name from user and create new file in folder 
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>

int main()
{
    int fd=0;
    char Fname[30];
    printf("Enter file name\n");
    scanf("%s",Fname);

    fd=creat(Fname,0777);

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