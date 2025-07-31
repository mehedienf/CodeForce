import java.util.Scanner;

public class n580A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        // int[] a = new int[n];
        int a, temp, count = 1, maxCount = 1;
        a = sc.nextInt();
        temp = a;
        for (int i = 0; i < n-1; i++) {
            a = sc.nextInt();
            if (a >= temp) {
                count++;
                if (count > maxCount) {
                    maxCount = count;
                }
            }
            else {
                count = 1;
            }
            temp = a;
        }
        System.out.println(maxCount);
        sc.close();
    }
}
