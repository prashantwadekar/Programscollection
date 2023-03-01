//Assignment 16
//Q.3
//Display which are even and divisble by 5
//INPUT 6 {85 66 3 80 93 88}
//OUTput: 80
#include<stdio.h>
#include<stdlib.h>
int Display(int[],int);
int main()
{
    int *ptr=NULL;
    int iLength=0,i=0;
    printf("Enter number of elements\n");
    scanf("%d",&iLength);

    ptr=(int*)malloc(sizeof(int)*iLength);

    printf("Enter elements\n");
    
    for(i=0;i<iLength;i++)
    {
        scanf("%d",&ptr[i]);
    }
    Display(ptr,iLength);
    free(ptr);

    return 0;
}
int Display(int Arr[],int iSize)
{
    int i=0;
    for(i=0;i<iSize;i++)
    {
        if((Arr[i]%5)==0)
        {
            if((Arr[i]%2)==0)
          {
            printf("%d\t",Arr[i]);
          }
        }
    }
}
