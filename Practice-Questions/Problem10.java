import java.util.Scanner;

public class Problem10 {
    public static void main(String[] args) {
        Scanner scr = new Scanner(System.in);
        
        // Input: Number to be reversed
        System.out.print("Enter a number: ");
        int n = scr.nextInt();
        int k = n;
        int reversedNumber = 0;

        // Reverse the number
        while (n > 0) {
            int digit = n % 10;                     // Extract the last digit
            reversedNumber = (reversedNumber * 10) + digit; // Build the reversed number
            n /= 10;                                // Remove the last digit
        }

        if (reversedNumber == k) {
            System.out.println("It is an Paladrome");
        }else{
            System.out.println("It is not an Palandrome");
        }
        

        scr.close();
    }
}
