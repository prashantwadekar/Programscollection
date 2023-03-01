import java.util.*;
class StringX
{
    public String Str;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter string");
        Str=sobj.nextLine();
    }
    public void Display()
    {
        System.out.println("String is :"+Str);
    }
}
class Marvellous extends StringX
{
    public boolean CheckPalindrome()
    {
        char Arr[]=Str.toCharArray();
        int iStart=0,iEnd=Arr.length-1;
        char temp;
        while(iStart<iEnd)
        {
            temp=Arr[iStart];
            Arr[iStart]=Arr[iEnd];
            Arr[iEnd]=temp;
            iStart++;
            iEnd--;
        }
        String newstr = new String(Arr);
        boolean bRet =newstr.equals(Str);
        return bRet;
    }
}
class Program156
{
    public static void main(String args[])
    {
        Marvellous mobj = new Marvellous();
        mobj.Accept();
        mobj.Display();
        boolean bRet;
        bRet=mobj.CheckPalindrome();
        if(bRet==true)
        {
            System.out.println("String is palindrome");
        }
        else
        {
            System.out.println("String is not palindrome");
        }
    }
}