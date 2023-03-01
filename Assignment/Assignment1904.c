//Assignment 19
//Q.4
#include<stdio.h>
#include<stdlib.h>
int Display(int Arr[],int iSize) 
{
    int i=0;
    for(i=0;i<iSize;i++)
    {
        Arr[i]=Arr[i]%10;
    }
}
int main()
{
    int iLength=0,i=0,iRet=0;
    int *ptr=NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iLength);

    ptr=(int *)malloc(sizeof(int)*iLength);

    printf("Enter Elements\n");
    for(i=0;i<iLength;i++)
    {
        scanf("%d",&ptr[i]);
    }
    Display(ptr,iLength);
   
    free(ptr);

     return 0;
}