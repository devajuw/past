import java.util.Scanner;

class name {

    public static void main(String args[]) {
        Scanner na = new Scanner(System.in);
        System.out.print("Enter the name :\n");
        String name = na.nextLine();
        System.out.print("\nYour handsome name : \n\n");
        
        // for loop

        for (int i = 0; i < name.length(); i++) {
            for (int j = 0; j <= i; j++) {
                System.out.print(name.charAt(j) + " ");
            }
            System.out.println();
        }
    }
}