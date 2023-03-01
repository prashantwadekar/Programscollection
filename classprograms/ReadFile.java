import java.io.*;
import java.util.Scanner;

class ReadFile
{
    public static void main(String args[])
    {
        String filename;

       Scanner sc =new Scanner(System.in);

       System.out.println("Enter filename:");
       filename=sc.nextLine();

       try
        {  
          FileReader fr=new FileReader("C:\\Users\\Prashant\\Desktop\\"+filename);
            
         int i;  
         while((i=fr.read())!=-1)  
             System.out.println((char)i);   
        }
        catch(Exception e){System.out.println(e);}  
        System.out.println("success");  
      }  
}