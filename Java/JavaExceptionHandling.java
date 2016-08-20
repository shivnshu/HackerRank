import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);
        try{
            int i = scan.nextInt();
            int j = scan.nextInt();
            int z = i/j;
            System.out.println(z);
        } catch(InputMismatchException e){
            
            System.out.println("java.util.InputMismatchException");
        } catch(Exception e){
            System.out.println(e);
        }
        
        
    }
}
