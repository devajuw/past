public class UniqueNumberFinder {
    public static void main(String[] args) {
        // Example array where all numbers except one appear twice
        int[] numbers = {4, 2, 1, 1 , 3, 2, 3, 4};

        // Variable to hold the unique number
        int unique = 0;

        // Iterate over the array
        for (int n : numbers) {
            // XOR the current number with the unique number
            unique ^= n;
        }
if(true)
        // At the end, 'unique' will hold the single number that does not repeat
        System.out.println("The unique number is: " + unique);
       else
           System.out.println("NAHi");

    }
}
