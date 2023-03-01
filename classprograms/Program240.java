import java.util.*;

abstract class ArrayX
{
    public int Arr[];

    public ArrayX(int size)
    {
        Arr=new int[size];
    }
    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elements:");
        for(int i=0;i<Arr.length;i++)
        {
            Arr[i]=sobj.nextInt();
        }
    }

    public void Display()
    {
        System.out.println("Entered data is:");
        for(int i=0;i<Arr.length;i++)
        {
            System.out.println(Arr[i]);
        }
    }

    public abstract boolean search(int no);
}
class Searching extends ArrayX
{
    public Searching(int size)
    {
        Super(size);
    }
    public boolean search(int no);
    {
        int i=0;
        for(i=0;i<Arr.length;i++)
        {
            if(Arr[i]==no)
            {
                break;
            }
        }
        if(i==Arr.length)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}

class Program240
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter size of array");
        int size=sobj.nextInt();

        int Arr[]=new int[size];

        Searching obj = new Searching(size);

        obj.Accept();
        obj.Display();

        System.out.println("Enter the element to search");
        int no=sobj.nextInt();

        boolean bret=obj.search(no);
        if(bret==true)
        {
            System.out.println("Element is there in array");
        }
        else
        {
            System.out.println("There is no element in array");
        }
    }
}