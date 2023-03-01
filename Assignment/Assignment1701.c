//Assignment 17
//Q.1
//Return frequency of even numbers
//INPUT 6 {85 66 3 80 93 88}
//OUTput: 3
#include<stdio.h>
#include<stdlib.h>
int Display(int[],int);
int main()
{
    int *ptr=NULL;
    int iLength=0,i=0,iRet=0;
    printf("Enter number of elements\n");
    scanf("%d",&iLength);

    ptr=(int*)malloc(sizeof(int)*iLength);

    printf("Enter elements\n");
    
    for(i=0;i<iLength;i++)
    {
        scanf("%d",&ptr[i]);
    }
    iRet=Display(ptr,iLength);
    printf("frequency of even numbers:%d",iRet);
    free(ptr);

    return 0;
}
int Display(int Arr[],int iSize)
{
    int i=0,iCnt=0;
    for(i=0;i<iSize;i++)
    {
        if((Arr[i]%2)==0)
        {
            iCnt++;
        }
    }
    return iCnt;
}