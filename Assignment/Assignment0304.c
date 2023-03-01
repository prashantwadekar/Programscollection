//assignment 3
//Q.4 Accept one character from user and convert case of that character
//Input:a Output:A
//Input:D output:d
#include<stdio.h>
void Displayconvert(char);
int main()
{
    char cValue;
    printf("Enter an alphabhet:\n");
    scanf("%c",&cValue);
   Displayconvert(cValue);
    return 0;
}
void Displayconvert(char chvalue)
{
    if(chvalue>='A' && chvalue<='Z')
    {
        chvalue=chvalue+32;
        printf("The convrtred alphabhet in lowercase is:\n%c",chvalue);
    }
    else
    if(chvalue>='a' && chvalue<='z')
    {
        chvalue=chvalue-32;
        printf("The alphbhet convered uppercase is:\n%c",chvalue);
    }
}