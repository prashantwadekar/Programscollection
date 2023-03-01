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
    public String ReverseX()
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
        return Arr.toString();
    }
}
class Program155
{
    public static void main(String args[])
    {
        Marvellous mobj = new Marvellous();
        mobj.Accept();
        mobj.Display();
        String s =mobj.ReverseX();
        System.out.println("Reverse string is "+s);
    }
}