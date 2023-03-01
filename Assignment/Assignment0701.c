//Assignment.7>>Q.1
//write a program which accept radius of circle from user and calculate its area PI=3.14(Area=PI*Radius*Radius)
//Input 10.4  339.622375
//5.3  88.202606
#include<stdio.h>
double CircleArea(float);
#define PI 3.14
int main()
{
    float fvalue=0.0;
    printf("Enter a radius\n");
    scanf("%f",&fvalue);
    CircleArea(fvalue);
    return 0;
}
double CircleArea(float fradius)
{
    float Area=0.0;
    Area=(PI*fradius)*fradius;
    printf("Area of circle is %f",Area);
}