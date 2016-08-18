import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);
        String s1 = scan.next();
        String s2 = scan.next();
        
        BigInteger b1 = new BigInteger(s1);
        BigInteger b2 = new BigInteger(s2);
        
        BigInteger sum = b1.add(b2);
        BigInteger product = b1.multiply(b2);
        
        System.out.println(sum.toString());
        System.out.println(product.toString());
        
    }
}
