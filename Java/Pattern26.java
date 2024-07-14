import java.util.Scanner;

public class Pattern26{
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n;

        do {
            n = sc.nextInt();
        }
        while(n < 1);

        // method 1

        // for(int i = 0; i < n; i++){
        //     for(int j = 1; j <= n; j++){
        //         if(j < n - i){
        //             System.out.print(" ");
        //         }
        //         else {
        //             System.out.print(j + i - n + 1);
        //         }
        //     }
        //     System.out.println("");
        // }

        // method 2
        
        for(int i = 0; i < n; i++){
            int k = 1;
            for(int j = 1; j <= n; j++){
                if(j < n - i){
                    System.out.print(" ");
                }
                else{
                    System.out.print(k++);
                }
            }
            System.out.println("");
        }
        sc.close();
    }
}