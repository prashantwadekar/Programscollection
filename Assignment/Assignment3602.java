import java.util.*;
class Marvellous
{
    public void Pattern(int iRow,int iCol)
    {
        int i=0,j=0;
        char Chcap='\0',Chsmall='\0';
        
        for(i=1;i<=iRow;i++)
        {
             for(j=1,Chsmall='a',Chcap='A';j<=iCol;j++,Chsmall++,Chcap++)
            {
                if((i%2)==0)
                {
                    System.out.print(Chsmall +"  ");
                }
                else
                {
                    System.out.print(Chcap +"  ");
                }
            }
            System.out.println( );
        }

    }
}
class Assignment3602
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int iValue1=0,iValue2=0;

        System.out.println("Enter number of rows:");
        iValue1=sc.nextInt();

        System.out.println("Enter number of coloumns:");
        iValue2=sc.nextInt();
        
        Marvellous mobj = new Marvellous();

        mobj.Pattern(iValue1,iValue2);
    }
}