#include<stdio.h>
#include<stdbool.h>
bool checkeven(int);
int main()
{
    int iNo=0;
    bool bRet=false;
    printf("Enter a number\n");
    scanf("%d",&iNo);
    
    bRet=checkeven(iNo);
    if(bRet==true)
    {
        printf("%d is")
    }
}