//Assignment 16
//Q.5
//Display multiples of 11
//INPUT 6 {85 66 3 55 93 88}
//OUTput: 66 55 88
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
        if((Arr[i]%11)==0)
        {
            printf("%d\t",Arr[i]);
        }
    }
}