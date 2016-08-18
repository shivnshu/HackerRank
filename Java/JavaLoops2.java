import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        int sum;
        for(int i=0;i<t;i++){
            sum = 0;
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            sum = a;
            for(int j=0;j<n;++j){
                sum += b * ((int)(Math.pow(2,j)));
                System.out.printf("%d ",sum);
            }
            System.out.printf("%n");
        }
        in.close();
    }
}
