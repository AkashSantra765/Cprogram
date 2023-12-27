import java.io.*;
public class abc
{
    public static void main(String [] args)
    {
        try
        {
            file obj=new file("javatext.txt");
            if(obj.createNewFile())
            {
                System.out.println("New file created");

            }
            else
            {
                System.out.println("File already exists");
            }
            catch(ioExcaption e)
            {
                e.printStackTrace();
            }
        }
    }
}
