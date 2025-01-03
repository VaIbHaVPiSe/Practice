import java.util.Scanner;

public class Pattern4{
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n;

        // user input
        do {
            n = sc.nextInt();
        }
        while (n <= 1 && n <= 1000);

        // Incremented Rectangle pattern logic
        for (int i = 0; i < n; i++) {   // column loop
            for (int j = 0; j < n; j++) {   // row loop
                System.out.print(j + 1 + " ");  // when you have to increase value in the same line, then use the variable of 2nd loop
            }
            System.out.println("");
        }
        sc.close();
    }
}