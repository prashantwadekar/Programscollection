//check whether number is prime or not
import java.util.*;
class Marvellous
{
    public boolean CheckPrime(int iNo)
    {
        int iCnt=0;
        boolean bFlag=true;

        for(iCnt=2;iCnt<=iNo/2;iCnt++)
        {
            if((iNo%iCnt==0))
            {
                bFlag=false;
                break;
            }
        }
        return bFlag;
    }
}
class Program20
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue=0;
        boolean bRet=false;

        System.out.println("Enter number");
        iValue=sobj.nextInt();

        Marvellous mobj = new Marvellous();

        bRet=mobj.CheckPrime(iValue);

        if(bRet==true)
        {
            System.out.println("Number is Prime");
        }
        else
        {
            System.out.println("Number is not prime");
        }
    }
}