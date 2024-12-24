import java.util.Scanner;

public class Problem12 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input: Two numbers
        System.out.print("Enter the first number: ");
        double num1 = scanner.nextDouble();

        System.out.print("Enter the second number: ");
        double num2 = scanner.nextDouble();

        // Input: Operation choice
        System.out.println("Choose an operation:");
        System.out.println("1. Addition (+)");
        System.out.println("2. Subtraction (-)");
        System.out.println("3. Multiplication (*)");
        System.out.println("4. Division (/)");
        System.out.print("Enter your choice (1-4): ");
        int choice = scanner.nextInt();

        // Perform operation using switch case
        switch (choice) {
            case 1:
                System.out.println("Result (Addition): " + (num1 + num2));
                break;
            case 2:
                System.out.println("Result (Subtraction): " + (num1 - num2));
                break;
            case 3:
                System.out.println("Result (Multiplication): " + (num1 * num2));
                break;
            case 4:
                if (num2 != 0) {
                    System.out.println("Result (Division): " + (num1 / num2));
                } else {
                    System.out.println("Error: Division by zero is not allowed.");
                }
                break;
            default:
                System.out.println("Invalid choice. Please select a valid operation (1-4).");
        }

        scanner.close();
    } 
}
