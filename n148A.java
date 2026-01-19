import java.util.Scanner;

public class n148A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int k = sc.nextInt();
        int l = sc.nextInt();
        int m = sc.nextInt();
        int n = sc.nextInt();
        int d = sc.nextInt();
        int[] arr = new int[d];
        int count = 0;
        for (int i = 1; i <= arr.length; i++) {
            if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
                count++;
            }
        }
        System.out.println(count);
        sc.close();
    }
}
