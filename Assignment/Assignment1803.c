//Assignment 18 
//Q.3
#include<stdio.h>
#include<stdlib.h>
int LastOccurance(int Arr[],int iSize,int iNo)
{
    int i=0,index=-1;
    for(i=0;i<iSize;i++)
    {
        if(Arr[i]==iNo)
        {
            index=i;
        }
    }
         return index; 
}
int main()
{
    int iLength=0,i=0,iValue=0;
    int *ptr=NULL;
    int iRet=0;

    printf("Enter number of elements\n");
    scanf("%d",&iLength);

    ptr=(int *)malloc(sizeof(int)*iLength);

    printf("Enter Elements\n");
    for(i=0;i<iLength;i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("Enter the element to Search:\n");
    scanf("%d",&iValue);

    iRet=LastOccurance(ptr,iLength,iValue);
    if(iRet==-1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("Number is there at index %d\n",iRet);
    }
    free(ptr);

     return 0;
}