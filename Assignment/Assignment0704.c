//Assignment7>>Q.4
//Write a program which accept temperature in Fehrenhite and convert it into celsius(1 celsius =(Fehrenheit-32)*(5/9))
//Input    10          34
//Output  -12.2222    1.111111
#include<stdio.h>
double FhtoCs(float);
int main()
{
    float fvalue=0.0;
    double dRet=0.0;
    printf("Enter temperature in Fehrenhite\n");
    scanf("%f",&fvalue);
    dRet=FhtoCs(fvalue);
    printf("%lf",dRet);
    return 0;
}
double FhtoCs(float fTemp)
{
    double dCon=0.0;
    dCon=(fTemp-32)*5/9;
    return dCon;
}
