#include<stdio.h>
#include<stdlib.h>
int OddEvenFreqDiff(int Arr[],int iSize)
{
    int i=0,iEven=0,iOdd=0;
    for(i=0;i<iSize;i++)
    {
        if((Arr[i]%2)==0)
        {
            iEven++;
        }
        else if((Arr[i]%2)!=0)
        {
            iOdd++;
        }
    }
    printf("Frequency of even elements %d\n",iEven);
    printf("Frequency of odd elements %d\n",iOdd);
    return iEven-iOdd;
}
int main()
{
    int iLength=0,i=0,iRet=0;
    int *ptr=NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iLength);

    ptr=(int*)malloc(sizeof(int)*iLength);

    printf("Enter elements\n");
    
    for(i=0;i<iLength;i++)
    {
        scanf("%d",&ptr[i]);
    }
    iRet=OddEvenFreqDiff(ptr,iLength);
    
    printf("Difference of odd and even elements frequency is %d",iRet);

    free(ptr);

    return 0;
}