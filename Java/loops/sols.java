import java.util.Scanner;
public class sols{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number: ");
        int n = sc.nextInt();
        int sum = 0;

  
        while (n > 0) {
            int digit = n % 10; // Get the last digit
            sum += digit; // Add it to the sum
            n = n / 10; // Remove the last digit
        }

        System.out.println("The sum of digits is: " + sum);
    }
} 