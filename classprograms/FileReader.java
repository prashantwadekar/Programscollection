import java.io.*;
import java.util.Scanner;

class FileReader
{
    public static void main(String args[])
    {
        String filename;

       Scanner sc =new Scanner(System.in);

       System.out.println("Enter filename:");
       filename=sc.nextLine();

       try
       {  
         FileWriter fw=new FileWriter("C:\\Users\\Prashant\\Desktop\\"+filename);  
         fw.write("Educating for better tomorrow");  
         fw.close();  
        }
        catch(Exception e){System.out.println(e);}  
        System.out.println("success");  
       } 
}
