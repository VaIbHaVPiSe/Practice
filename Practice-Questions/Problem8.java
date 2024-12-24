import java.util.Scanner;

public class Problem8 {
    public static void main(String[] args) {
        Scanner scr = new Scanner(System.in);
        int n = scr.nextInt();
        int sum =0;
        while(n>0){
            sum+=n%10;
            n/=10;
        }
        System.out.println(sum + " sum of digits of given number ");
        scr.close();
    }
}
