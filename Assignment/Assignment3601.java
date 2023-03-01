import java.util.*;
class Marvellous
{
    public void Pattern(int iRow,int iCol)
    {
        int i=0,j=0;
        char Ch='\0';
        for(i=0;i<iRow;i++)
        {
            for(j=1,Ch='A';j<=iCol;j++,Ch++)
            {
                System.out.print(Ch+"  ");
            }
            System.out.println("");
        }
    }
}
class Assignment3601
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int iValue1=0,iValue2=0;

        System.out.println("Enter number of Rows");
        iValue1=sc.nextInt();

        System.out.println("Enter number of coloumns");
        iValue2=sc.nextInt();

        Marvellous mobj = new Marvellous();
        mobj.Pattern(iValue1,iValue2);
    }
}