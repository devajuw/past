public class gu {
    public static void main(String[] args) {
        for (int i = 100; i < 1000; i++) {
            if (isPalindrome(i)) {
                System.out.println(i);
            }
        }
    }

    public static boolean isPalindrome(int number) {
        int reversed = 0;
        int original = number;
        
        while (number != 0) {
            int digit = number % 10;
            reversed = reversed * 10 + digit;
            number /= 10;
        }
        
        return original == reversed;
    }
}

