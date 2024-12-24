import java.util.Scanner;

public class Problem4 {
     public static void main(String[] args) {
        Scanner scr = new Scanner(System.in);
        int n = scr.nextInt();
        int m = scr.nextInt();
        if(n>m){
            System.out.println(n + " is  Greater than " + m);
        }else if (m<n){
            System.out.println(m + " is  Greater than " + n);
            
        } else {
            System.out.println(n + " is  Equal to " + m);
        }
        scr.close();
    }
}
