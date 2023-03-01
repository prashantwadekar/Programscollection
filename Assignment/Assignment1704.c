//Assignment 17 
//Q.4
#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[],int iSize,int iNo)
{
    int i=0,index=-1;
    int iCnt=0;
    for(i=0;i<iSize;i++)
    {
        if(Arr[i]==iNo)
        {
            index=iCnt;
            iCnt++;
        }
    }
         return iCnt; 
}
int main()
{
    int iLength=0,i=0,iValue=11;
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
    iRet=Frequency(ptr,iLength,iValue);
    if(iRet==-1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf(" 11 Number is present in %d times \n",iRet);
    }
    free(ptr);

     return 0;
}