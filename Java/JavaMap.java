//Complete this code or write your own from scratch
import java.util.*;
import java.io.*;

class Solution{
   public static void main(String []argh)
   {
      Scanner in = new Scanner(System.in);
      int n=in.nextInt();
      in.nextLine();
      Map m = new HashMap();
      for(int i=0;i<n;i++)
      {
         String name=in.nextLine();
         int phone=in.nextInt();
         m.put(name, phone);
         in.nextLine();
      }
      while(in.hasNext())
      {
         String s=in.nextLine();
         if(m.get(s)!=null)
              System.out.println(s+"="+m.get(s));
          else
              System.out.println("Not found");
         
      }
   }
}
