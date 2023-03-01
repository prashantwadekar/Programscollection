//Assignment 22 
//Q.3
#include<stdio.h>
int Difference(char *Str)
{
    int iCnt=0;
    int iCapital,iSmall=0;
    while(*Str !='\0')
    {
        if((*Str>='A')&&(*Str<='Z'))
        {
            iCapital++;
        }
        else if((*Str>='a')&&(*Str<='z'))
        {
            iSmall++;
        }
        Str++;
    }
    return iSmall-iCapital;
}
int main()
{
    char Ch[25];
    int iDiff=0;
    printf("Enter a string :\n");
    scanf("%[^\n]s",Ch);
    iDiff=Difference(Ch);
    printf("Difference of  Small and Capital Character is:%d\n",iDiff);
    return 0;
}