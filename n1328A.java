import java.util.Scanner;

public class n1328A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t, a, b, count;
        // count = 0;
        t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            a = sc.nextInt();
            b = sc.nextInt();
            if (a % b == 0) {
                count = 0;
            }
            else {
               count = b - (a % b); 
            }
            System.out.println(Math.abs(count));
        }
        sc.close();
    }
}