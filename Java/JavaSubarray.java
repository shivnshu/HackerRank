import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    
    public static int sum(int[] a, int i, int j){
        int sum = 0;
        for(int p=i;p<j;++p){
            sum += a[p];
        }
        
        return sum;
        
    }

    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[] a = new int[n];
        for(int i=0;i<n;++i){
            
            a[i] = scan.nextInt();
            
        }
        int count = 0;
        for(int i=0;i<n;++i){
            for(int j=i+1;j<=n;++j){
                
                if(sum(a, i, j)<0)
                    count++;
                
            }
        }
        
        System.out.println(count);
        
    }
}
