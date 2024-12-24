import java.util.Scanner;

public class Problem2 {
    public static void main(String[] args) {

    
        Scanner scr = new Scanner(System.in);
        System.out.print("Enter a number: ");

        
        int number = scr.nextInt();
        for(int i = 0; i<number ; i++){
        if(i%2!=0){
            System.out.println(i);
        }
    }
    }
}
