import java.util.*;
class Marvellous
{
    public void Pattern(int iRow,int iCol)
    {
        int i=0,j=0;
        for(i=1;i<=iRow;i++)
        {
            for(j=1;j<=iCol;j++)
            {
                if(i==1||i==iRow||j==1||j==iCol)
                {
                    System.out.print("  *");
                }
                else if((i+j)==(iRow+1))
                {
                    System.out.print("  *");
                }
                else
                {
                    System.out.print("  $");
                }
            }
            System.out.println();
        }
    }
}
class Assignment4004
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        int iValue1=0,iValue2=0;
        System.out.println("Enter number of rows");
        iValue1=sc.nextInt();

        System.out.println("Enter number of coloumns");
        iValue2=sc.nextInt();

        Marvellous mobj = new Marvellous();

        mobj.Pattern(iValue1,iValue2);
    }
}