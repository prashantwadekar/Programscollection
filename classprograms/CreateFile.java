import java.io.*;
import java.util.Scanner;

class CreatFile 
{
    public static void main(String args[])
    {
        String filename;

        Scanner sc =new Scanner(System.in);

        System.out.println("Enter File name:");
        filename=sc.nextLine();

        File f=new File("C:\\Users\\Prashant\\Desktop\\"+filename);

        try
        {
            if(f.createNewFile())
            {
              System.out.println("File sucessfully created");
            }
            else
            {
              System.out.println("File Already exists..");
            }
        }
        catch(IOException i)
        {
            System.out.println("Exception handled...");
        }
    }
}
