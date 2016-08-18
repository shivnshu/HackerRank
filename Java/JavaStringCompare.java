import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);
        String str = scan.next();
        int n = scan.nextInt();
        
        String max = str.substring(0, n);
        String min = str.substring(0, n);
        
        for(int i=0;i<=str.length()-n;++i){
            
            if(max.compareTo(str.substring(i, i+n))<0)
                max = str.substring(i, i+n);
            
            if(min.compareTo(str.substring(i, i+n))>0)
                min = str.substring(i, i+n);
            
        }
        
        System.out.println(min);
        System.out.println(max);
        
    }
}
