#include<stdio.h>
#include<stdlib.h>
int Maximum(int Arr[],int iSize) //Maximum Number(negative also)
{
    int i=0,iMax=Arr[0];
    for(i=0;i<iSize;i++)
    {
        if(Arr[i]>iMax)
        {
            iMax=Arr[i];
        }
    }
    return iMax;
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
    iRet=Maximum(ptr,iLength);
    printf("Maximum is:%d\n",iRet);
    free(ptr);

     return 0;
}