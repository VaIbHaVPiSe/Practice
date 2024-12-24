import java.util.Scanner;

public class Problem7 {
    public static void main(String[] args) {
        Scanner scr = new Scanner(System.in);
        int n = scr.nextInt();
        int sum =0;
        for(int i =0 ; i<n;i++){
        if(i%3==0 & i%5==0){
            sum+=i;
        }
    }
    System.out.println(sum +" Sum of all the number which is divisible by 3 and 5");
        scr.close();
    }
}
