import java.util.Scanner;

public class Pattern21{
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n;

        do {
            n = sc.nextInt();
        }
        while (n < 1);

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n - i; j++) {
                System.out.print(n - j + " ");
            }
            System.out.println("");
        }
        sc.close();
    }
}