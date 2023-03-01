import java.util.*;
class StringDemo
{
    public int Count(char Str[])
    {
       int iCnt=0;

       while(Str[] != '\0')
       {
           if((Str[]>='A')&&(Str[]<='Z'))
           {
               iCnt++;
           }
           Str++;
       }
       return iCnt;
    }
}
class Assignment120
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        char Arr[25];

        int iRet=0;

        System.out.println("Enter string:");

        Arr=sobj.nextInt();

        StringDemo fobj = new StringDemo();

        iRet=fobj.Count(Arr);

        System.out.println("Count is %d"+iRet);
    }
}