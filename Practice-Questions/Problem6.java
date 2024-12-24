import java.util.Scanner;

public class Problem6 {
    public static void main(String[] args) {
        Scanner scr = new Scanner(System.in);
        int n = scr.nextInt();
        if(n%2==0){
            System.out.println(n + " is  divisible by 2");
        } else {
            System.out.println(n + " is  not divisible by 2 ");
        }
        scr.close();
    }
}
