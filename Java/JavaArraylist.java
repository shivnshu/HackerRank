import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);
        int num, q, x, y;
        int n = scan.nextInt();
        ArrayList[] a = new ArrayList[n];
        
        for(int i=0;i<n;++i){
            num = scan.nextInt();
            a[i] = new ArrayList();
            for(int j=0;j<num;++j){
                a[i].add(scan.nextInt());
            }
            
        }
        
        q = scan.nextInt();
        
        for(int i=0;i<q;++i){
            x = scan.nextInt();
            y = scan.nextInt();
            
            try{
                System.out.println(a[x-1].get(y-1));
            } catch(Exception e){
                System.out.println("ERROR!");
            }
        }
        
    }
}
