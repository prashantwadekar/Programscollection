#include<stdio.h>
#include<stdlib.h>
int SumOdd(int Arr[],int iSize)
{
    int iSum=0,i=0;
    for(i=0;i<iSize;i++)
    {
        if(Arr[i]%2 !=0)
        {
            iSum=iSum+Arr[i];
        }
    }
    return iSum;
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
    iRet=SumOdd(ptr,iLength);
    printf("Addition is:%d\n",iRet);
    free(ptr);

     return 0;
}