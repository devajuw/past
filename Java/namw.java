
import java.util.Scanner;

public class namw {

    public static void main(String args[]) {
        Scanner na = new Scanner(System.in);
        System.out.print("Enter your handsome name :\n");
        String name = na.nextLine();
        // for loop for obv reasons

        for (int i = 0; i <= name.length(); i++) {
            for (int j = 0; j <= i; j++) {
                System.out.print(name.charAt(j));
            }
            System.out.println();
        }
    }
}
