public class pal {
    public static void main(String[] args) 
    {
        int number=0,reversed=0;
        for (int i = 10; i <= 1000; i++) {
        if (i>99)
        reversed = 0;
        number =i;
        while (number != 0)
         {
            int digit = number % 10;
            reversed = reversed * 10 + digit;
            number /= 10;
         }
        if (reversed==i) 
        System.out.println(i);
        }
        
    }
}
