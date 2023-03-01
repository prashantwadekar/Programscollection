//Assignment 7
//Q.3)write a program which accept distance in kilometers and convert into meters (1 kilometer =1000meter)
//Input    5    12 
//Output 5000   12000
#include<stdio.h>
int KmtoMeter(int);
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter a distance\n");
    scanf("%d",&iValue);
    iRet=KmtoMeter(iValue);
    printf("Distance is :%d\n",iRet);
    return 0;
}
int KmtoMeter(int iNo)
{
    int iCon=0;
    iCon=iNo*1000;
    return iCon;
}