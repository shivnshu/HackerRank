import java.io.*;
import java.util.*;

public class Solution {
    
    public static String reverseStr(String A, int l){
        
        if(l==0)
            return "";
        
        return A.substring(l-1, l) + reverseStr(A, l-1);
        
    }

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        
        String B = reverseStr(A, A.length());
        
        if(A.equals(B) == true)
            System.out.println("Yes");
        else
            System.out.println("No");
        
    }
}
