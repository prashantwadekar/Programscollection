#include<stdio.h>
#include<stdlib.h>
void Range(int Arr[],int iSize,int iStart,int iEnd)
{
    int i=0;
    for(i=0;i<iSize;i++)
    {
        if((Arr[i]>iStart)&&(Arr[i]<iEnd))
        {
            printf("%d\t",Arr[i]);
        }
    }
}
int main()
{
    int iValue1=0,iValue2=0,iLength=0,i=0;
    int *ptr=NULL;

    printf("Enter number of elements:\n");
    scanf("%d",&iLength);

    printf("Enter starting point:\n");
    scanf("%d",&iValue1);

    printf("Enter ending point:\n");
    scanf("%d",&iValue2);

    ptr=(int*)malloc(sizeof(int)*iLength);

    printf("Enter elements:\n");
    for(i=0;i<iLength;i++)
    {
        scanf("%d",&ptr[i]);
    }
    Range(ptr,iLength,iValue1,iValue2);

    free(ptr);
    return 0;
}