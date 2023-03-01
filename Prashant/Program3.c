//Enter 2 values from user and perform addition
//input 1 2
//output 3
#include<stdio.h>
int Addition(int,int);
int main()
{
    int ivalue1=0;
    int ivalue2=0;
    int iRet=0;
    printf("Enter a First number:\n");
    scanf("%d",&ivalue1);
    printf("Enter a second number:\n");
    scanf("%d",&ivalue2);
    iRet=Addition(ivalue1,ivalue2);
    printf("Addition is:%d\n",iRet);
    return 0;
}
int Addition(int iNo1,int iNo2)
{
     int isum=0;
    isum=iNo1+iNo2;
    return isum;
}