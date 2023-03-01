//Assignment 18
//Q.5
#include<stdio.h>
#include<stdlib.h>
int OddMult(int Arr[],int iSize)
{
    int i=0,iodd=1;
    for(i=0;i<iSize;i++)
    {
         if((Arr[i]%2) !=0)
        {
            iodd=iodd*Arr[i];
        }
    }
    return iodd;
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
    iRet=OddMult(ptr,iLength);
    printf("Multiplication of odd element is:%d\n",iRet);
    free(ptr);

     return 0;
}