import java.util.Arrays;
import java.util.Scanner;

public class n469A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n, l, count = 1;
        
        n = sc.nextInt();
        l = sc.nextInt();
        int[] a = new int[l];
        for (int i = 0; i < a.length; i++) {
            a[i] = sc.nextInt();
        }

        l = sc.nextInt();
        int[] a2 = Arrays.copyOf(a, a.length+l);
        for (int i = a.length; i < a2.length; i++) {
            a2[i] = sc.nextInt();
        }
        Arrays.sort(a2);

        for (int i = 0; i < a2.length-1; i++) {
            if (a2[i] != a2[i+1]) {
                count++;
            }
            if (count == n) {
                break;
            }
        }
        if (a2.length == 0) {
            count = 0;
        }
        if (count >= n) {
            System.out.println("I become the guy.");
        }
        else {
            System.out.println("Oh, my keyboard!");
        }
        sc.close();
    }
}