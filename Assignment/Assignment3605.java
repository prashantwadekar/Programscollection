import java.util.*;
class Marvellous
{
    int i=0,j=0,iCount=0;
    public void Pattern(int iRow,int iCol)
    {
        for(i=1;i<=iRow;i++)
        {
            for(j=1;j<=iCol;j++)
            {
                iCount=iCount+1;
                System.out.print("    "+iCount);
            }
            System.out.println();
        }
    }
}
class Assignment3605
{
    public static void main(String args[])
    {
        int iValue1=0,iValue2=0;
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number of Rows");
        iValue1=sc.nextInt();

        System.out.println("Enter number of coloumns");
        iValue2=sc.nextInt();

        Marvellous mobj = new Marvellous();
        mobj.Pattern(iValue1,iValue2);
    }
}