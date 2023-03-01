import java.util.*;
class Marvellous
{
    public void Pattern(int iRow,int iCol)
    {
        int i=0,j=0;
        char Ch='\0';
        for(i=1,Ch='A';i<=iRow;i++,Ch++)
        {
           for(j=1;j<=iCol;j++)
            {
               System.out.print(Ch +"  ");
            }
            System.out.println();
        }
    }
}
class Assignment3603
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