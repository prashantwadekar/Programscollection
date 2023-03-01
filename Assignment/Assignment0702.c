//Assignment 7
//Q.2)write a program which accept width & height of rectangle from user and calculate its Area (Area=width*height)
//Input   5.3  9.78  
//output  51.834
#include<Stdio.h>
double RectArea(float,float);
int main()
{
    float fValue1=0.0;
    float fValue2=0.0;
    double dRet=0.0;
    printf("Enter height\n");
    scanf("%f",&fValue1);
    printf("Enter width\n");
    scanf("%f",&fValue2);
    dRet=RectArea(fValue1,fValue2);
    printf("Area of Rectangle is:%f\n",dRet);
    return 0;
}
double RectArea(float width,float height)
{
   double Area=0.0;
    Area=width*height;
    return Area;
}
