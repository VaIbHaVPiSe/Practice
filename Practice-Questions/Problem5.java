import java.util.Scanner;

public class Problem5 {
    public static void main(String[] args) {
        Scanner scr = new Scanner(System.in);
        int n = scr.nextInt();
        int m = scr.nextInt();
        int k;
        k=m;
        m=n;
        n=k;

        System.err.println(n +" " + m);
        
        scr.close();
    }
}
