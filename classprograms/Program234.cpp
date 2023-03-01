#include<iostream>
#include<stdio.h>
using namespace std;

int StrenlenI(char *str)
{
    int iCnt=0;

    while(*str!='\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}

int StrenlenR(char *str)
{
    static int iCnt=0;

    if(*str!='\0')
    {
        iCnt++;
        str++;
        StrenlenR(str);
    }
    return iCnt;
}
int main()
{
    char Arr[20];
    int iRet=0;

    cout<<"Enter String:\n";
    scanf("%[^\n]s",Arr);

    //iRet=StrenlenI(Arr);

    iRet=StrenlenR(Arr);

    cout<<"Length of string is:"<<iRet<<"\n";

    return 0;
}