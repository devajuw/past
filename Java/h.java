public class h {
    public static void main(String[] args) {
        int n[] = { 0, 2, 1, 0, 2, 1 };
        int[] k = new int[6];
        for (int i = 0; i <= 2; i++) {
            for (int j = 0; j < 5; j++) {
                while (n[j] >= n[i]) {

                    k[j] = n[i];
                    System.out.print(k[j] + ",");
                }
            }
        }
    }
}
