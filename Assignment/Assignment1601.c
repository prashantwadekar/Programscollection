//Assignment 16
//Q.1 Accept N numbers from user and return difference between summation of even elements and summation of odd elements
//Input:6
//Output:53(234-181)
#include<stdio.h>
#include<stdlib.h>
int Diffrence(int Arr[],int iSize) //difference between Max and Min
{
    int i=0,iMin=Arr[0],iSum=0,iEvenSum=0,iOddSum=0;
    for(i=0;i<iSize;i++)
    {
         if((Arr[i]%2)==0)
        {
            iEvenSum=iEvenSum+Arr[i];
        }
        else
        {
            iOddSum=iOddSum+Arr[i];
        }
    }
    return iEvenSum-iOddSum;
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
    iRet=Diffrence(ptr,iLength);
    printf("Difference is:%d\n",iRet);
    free(ptr);

     return 0;
}