import java.util.Scanner;

public class n405A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n, temp;
        n = scanner.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = scanner.nextInt();
        }
        for (int i = 0; i < a.length-1; i++) {
            for (int j = i; j < a.length; j++) {
                if (a[i] > a[j] && i != j) {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        for (int i = 0; i < a.length; i++) {
            System.out.print(a[i] + " ");
        }
        scanner.close();
    }
}
