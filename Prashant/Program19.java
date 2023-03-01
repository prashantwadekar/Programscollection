//Addition of 2 numbers using java
import java.util.*;
class Marvellous
{
    public int Addition(int iNo1,int iNo2)
    {
        int iSum=0;
        iSum=iNo1+iNo2;
        return iSum;
    }
}
class Program19
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1=0,iValue2=0,iRet=0;
        
        System.out.println("Enter first Number:");
        iValue1=sobj.nextInt();

        System.out.println("Enter second Number:");
        iValue2=sobj.nextInt();

        Marvellous mobj = new Marvellous();

        iRet=mobj.Addition(iValue1,iValue2);

        System.out.println("Addition is:"+iRet);

    }
}