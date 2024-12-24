import java.util.Scanner;

public class Problem9 {
    public static void main(String[] args) {
        Scanner scr = new Scanner(System.in);
        
        // Input: Number to be reversed
        System.out.print("Enter a number: ");
        int n = scr.nextInt();
        int reversedNumber = 0;

        // Reverse the number
        while (n > 0) {
            int digit = n % 10;                     // Extract the last digit
            reversedNumber = (reversedNumber * 10) + digit; // Build the reversed number
            n /= 10;                                // Remove the last digit
        }

        // Output: Reversed number
        System.out.println("Reversed Number: " + reversedNumber);

        scr.close();
    }
}
