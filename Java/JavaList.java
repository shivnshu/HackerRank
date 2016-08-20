import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);
        
        int n = scan.nextInt();
        int q, x, y;
        
        ArrayList a = new ArrayList();
        
        for(int i=0;i<n;++i){
            a.add(scan.nextInt());
        }
        
        q = scan.nextInt();
        
        for(int i=0;i<q;++i){
            
            String str = scan.next();
            
            if(str.equals("Insert")){
                x = scan.nextInt();
                y = scan.nextInt();
                a.add(x, y);
            }
            else{
                x = scan.nextInt();
                a.remove(x);
            }
            
        }
        
        Iterator itr = a.iterator();
        
        while(itr.hasNext()){
            System.out.print(itr.next()+" ");
        }
        
    }
}
