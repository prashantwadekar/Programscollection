//check armstrong numbers
import java.util.*;
class Marvellous
{
    public boolean CheckArmstrong(int iNo)
    {
        int iCnt=0,iTemp=0,iDigCnt=0,iDigit=0,iPower=1,iSum=0;

        if(iNo<0)
        {
            iNo=-iNo;
        }

        iTemp=iNo;
        while(iTemp != 0)
        {
            iDigCnt++;
            iTemp=iTemp/10;
        }

        iTemp=iNo;
        while(iTemp != 0)
        {
            iDigit=iTemp%10;
            for(iCnt=1;iCnt<=iDigCnt;iCnt++)
            {
                iPower=iPower*iDigit;
            }
            iSum=iSum+iPower;
            iPower=1;
            iTemp=iTemp/10;
        }
        if(iSum==iNo)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
class Program21
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue=0;
        boolean bRet=false;

        System.out.println("Enter number");
        iValue=sobj.nextInt();

        Marvellous mobj = new Marvellous();

        bRet=mobj.CheckArmstrong(iValue);

        if(bRet==true)
        {
            System.out.println("It is Armstrong");
        }
        else
        {
            System.out.println("It is not Armstrong");
        }
    }
}