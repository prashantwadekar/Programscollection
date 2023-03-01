import java.util.*;

class Program252
{
    public static void main(String args[])
    {
        int i=0,j=0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enrer Number of Rows");
        int rows=sobj.nextInt();

        System.out.println("Enter Number of coloumns");
        int coloumns=sobj.nextInt();

        int Arr[][]=new int[rows][coloumns];

        System.out.println("Enter Elements");

        for(i=0;i<Arr[i].length;i++)
        {
            for(j=0;j<Arr[j].length;j++)
            {
                Arr[i][j]=sobj.nextInt();
            }
        }
        System.out.println("Enter elements are:");
         for(i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
               System.out.println(Arr[i][j]);
            }
        }
    }
}