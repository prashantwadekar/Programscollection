//change by reference array

import java.util.*;

class Searching
{
    public void Change(int Arr[])
    {
        for(int i=0;i<Arr.length;i++)
        {
            Arr[i]++;
        }
    }
}
class Program243
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

        Searching obj=new Searching();

        obj.Change(Arr);

        System.out.println("Data After function call");

        for(int i=0;i<Arr.length;i++)
        {
            System.out.println(Arr[i]);
        }

    }
}