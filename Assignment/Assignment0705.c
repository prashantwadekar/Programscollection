//Assignment7>>Q.5
//write a program which accept area in square feet and convert it into square meter(1 squarefeet=0.0929 squaremetere)
//Input      5            7
//Output    0.464684     0.650558
#include<stdio.h>
double SquareMeter(int);
int main()
{
    int iValue=0;
    double dRet=0.0;
    printf("Enter distance in Squarefeet\n");
    scanf("%d",&iValue);
    dRet=SquareMeter(iValue);
    printf("Distance in squaremeter:%lf\n",dRet);
    return 0;
 }
double SquareMeter(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    double dConv=0.0;
    dConv=iNo*0.093;
    dConv=iNo/10.76;
    return dConv;
}

