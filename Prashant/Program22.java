import java.util.*;
class Program22
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt=0,iSize=0;

        System.out.println("Enter number of elements");
        iSize=sobj.nextInt();

        int Arr[]=new int[iSize];

        System.out.println("Enter elements");
        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            Arr[iCnt]=sobj.nextInt();
        }

        System.out.println("Entered elements are");
        {
            for(iCnt=0;iCnt<Arr.length;iCnt++)
            {
                System.out.println(Arr[iCnt]);
            }
        }
    }
}