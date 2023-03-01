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
class Program150
{
    public static void main(String args[])
    {
        StringX sobj = new StringX();
        sobj.Accept();
        sobj.Display();       
    }
}