
import java.util.Scanner;

public class Problem3 {
    public static void main(String[] args) {
        Scanner scr = new Scanner(System.in);
        int n = scr.nextInt();
        if(n>0){
            System.out.println("Number is  Positive");
        }else if (n<0){
            System.out.println("Number is Negative");
            
        } else {
            System.out.println("Number is 0");
        }
    }
}
