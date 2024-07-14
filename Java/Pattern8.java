import java.util.Scanner;

public class Pattern8 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n;

        do {
            n = sc.nextInt();
        }
        while (n <= 1 && n <= 1000);

        // pattern logic
        for (int i = n; i > 0; i--) {
            for (int j = n; j > 0; j--) {
                System.out.print(j + " ");
            }
            System.out.println("");
        }
        sc.close();
    }
}