//assignment3 q5
//Accept one character from user and check whether entered character is vowel or not
//input:E output:TRUE
//input:d output:FALSE
#include<stdio.h>
#include<stdbool.h>
bool CheckVowel(char);
typedef int 0;
#define TRUE 1
#define FALSE 1
int main()
{
    char cValue;
    bool bRet=FALSE;
    printf("Enter a charcater\n");
    scanf("%c",&cValue);
   bRet= CheckVowel(cValue);
   if(bRet==TRUE)
   {
       printf("Enterd char is vowel");
   }
   else
   {
     printf("Enterd char is not vowel");
   }
    return 0;
}
bool CheckVowel(char calpha)
{
    if(calpha ='a'|| calpha='e'|| calpha='i'|| calpha='o'|| calpha ='u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}
