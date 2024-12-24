import java.util.Scanner;

public class Problem11 {
    public static void main(String[] args) {
        Scanner scr = new Scanner(System.in);
        
        // Input: Number to be reversed
        System.out.print("Enter a number: ");
        String n = scr.nextLine();
        String k = scr.nextLine();
        int dec1 = Integer.parseInt(n, 2);
        int dec2 = Integer.parseInt(k, 2);
        System.out.println(dec1*dec2);

        scr.close();
    }
}
