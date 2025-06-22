import java.util.Scanner;

public class n144A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] a = new int[n];
        int count = 0, temp, minPos = 0, maxPos = 0;
        int min = Integer.MAX_VALUE;
        int max = Integer.MIN_VALUE;
        for (int i = 0; i < a.length; i++) {
            a[i] = sc.nextInt();
            if (a[i] <= min) {
                min = a[i];
                minPos = i;
            }
        }
        for (int i = minPos; a[n-1] != min; i++) {
            temp = a[i];
            a[i] = a[i + 1];
            a[i + 1] = temp;
            count++;
        }
        for (int i = n-1; i >= 0; i--) {
            if (a[i] >= max) {
                max = a[i];
                maxPos = i;
            }
        }
        for (int i = maxPos; a[0] != max; i--) {
            temp = a[i];
            a[i] = a[i - 1];
            a[i - 1] = temp;
            count++;
        }
        System.out.println(count);
        sc.close();
    }
}
