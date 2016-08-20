import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int k = scan.nextInt();
        scan.nextLine();
        
        BitSet B1 = new BitSet(n);
        BitSet B2 = new BitSet(n);
        
        for(int a0=0;a0<k;++a0){
            
            String s = scan.next();
            int x = scan.nextInt();
            int y = scan.nextInt();
            
            if(s.equals("AND")){
                
                if(x==1 && y==2){
                    B1.and(B2);
                }
                else
                    B2.and(B1);
                
            }
            else if(s.equals("OR")){
                
                if(x==1 && y==2){
                    B1.or(B2);
                }
                else
                    B2.or(B1);
                
            }
            else if(s.equals("XOR")){
                
                if(x==1 && y==2){
                    B1.xor(B2);
                }
                else
                    B2.xor(B1);
                
            }
            else if(s.equals("FLIP")){
               
                
                if(x==1)
                    B1.flip(y);
                else
                    B2.flip(y);
                
            }
            else if(s.equals("SET")){
                
                
                
                if(x==1)
                    B1.set(y);
                else
                    B2.set(y);
                
            }
            
            System.out.println(B1.cardinality()+" "+B2.cardinality());
            
        }
        
    }
}
