/*Program to Check Whether a Given Number is Even or Odd */
import java.util.*;

public class Problem1 {
    public static void main(String[] args) {

    
        Scanner scr = new Scanner(System.in);
        System.out.print("Enter a number: ");

        
        int number = scr.nextInt();

        if(number%2==0){
            System.out.println("Number is Even");
        }else
        {
            System.out.println("Number is Odd");
        }
    }
}
