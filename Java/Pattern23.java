import java.util.Scanner;

public class Pattern23 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        char alpha = 65;
        int n;

        do {
            n = sc.nextInt();
        }
        while (n <= 1 && n <= 26);

        for(int i = 0; i < n; i++) {
            for(int j = 1; j <= n - i; j++) {
                System.out.print((char)(alpha + n - j) + " ");
            }
            System.out.println("");
        }
        sc.close();
    }
}