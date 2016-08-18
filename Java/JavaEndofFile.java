import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
           
        Scanner scan = new Scanner(System.in);
        String str;
       int i = 1;
        while(scan.hasNext()){
            str = scan.nextLine();
            System.out.printf("%d %s%n",i,str);
            i++;
        }
        
    }
}
