#include<stdio.h>
void Pattern(int iNo)
{
    int i=0;

    for(i=1;i<=iNo;i++)
    {
         printf("%d\t",i*2);
    }
}
int main()
{
    int iValue=0;

    printf("enter number of elements\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}