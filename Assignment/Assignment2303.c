//Assignment 23
//Q.3
#include<stdio.h>
void Strtogglex(char str[])
{
    int i=0;
    while(str[i] !='\0')
    {
       {
          if((str[i]>='A')&&(str[i]<='Z'))
           {
            str[i]=str[i]+32;
           }
          else if((str[i]>='a')&&(str[i]<='z'))
            {
                str[i]=str[i]-32;
            }
        }
        i++;
    }
    printf("Sring in  Togglecase is:\n%s",str);   
}
int main()
{
    char Arr[25];

    printf("Enter string:\n");
    scanf("%[^\n]s",Arr);
    Strtogglex(Arr);
    return 0;
}