//Linear Search

import java.util.*;

class Searching
{
    public boolean LinerSearch(int Arr[],int no)
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
class Program241
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter size of array");
        int size=sobj.nextInt();

        int Arr[]=new int [size];

        System.out.println("Enter the Elements");
        for(int i=0;i<Arr.length;i++)
        {
            Arr[i]=sobj.nextInt();
        }
        System.out.println("Enter element to search");
        int value=sobj.nextInt();

        Searching obj=new Searching();

        boolean bret=obj.LinerSearch(Arr,value);

        if(bret==true)
        {
            System.out.println("Element is there");
        }
        else
        {
            System.out.println("Element is not there");
        }

    }
}