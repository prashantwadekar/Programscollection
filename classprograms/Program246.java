//sorting
//Selection Sort(settle element left to right)

import java.util.*;

class Sorting
{
    public void SelectionSort(int Arr[])
    {
        int i=0,j=0,minindex=0,temp=0;
        int size=Arr.length;
        for(i=0;i<size;i++)
        {
            minindex=i;
            for(j=i;j<size;j++)
            {
                if(Arr[minindex]>Arr[j])
                {
                    minindex=j;
                }
            }
            temp=Arr[i];
            Arr[i]=Arr[minindex];
            Arr[minindex]=temp;
        }
    }
}
class Program246
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

        Sorting obj=new Sorting();

        obj.SelectionSort(Arr);

        System.out.println("Data After Sorting");

        for(int i=0;i<Arr.length;i++)
        {
            System.out.println(Arr[i]);
        }

    }
}