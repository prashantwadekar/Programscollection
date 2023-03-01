import java.util.*;
class Marvellous
{
    public void Pattern(int iRow,int iCol)
    {
        int i=0,j=0;
        for(i=iRow;i>0;i--)
        {
            for(j=1;j<=iCol;j++)
            {
                System.out.print("   "+i);
            }
            System.out.println();
        }
    }
}
class Assignment3604
{
    public static void main(String args[])
    {
        int iValue1=0,iValue2=0;

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter Number of Rows");
        iValue1=sc.nextInt();

        System.out.println("Enter Number of coloumns");
        iValue2=sc.nextInt();

        Marvellous mobj = new Marvellous();
        mobj.Pattern(iValue1,iValue2);
    }
}