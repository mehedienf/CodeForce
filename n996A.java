import java.util.Scanner;

public class n996A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int count = 0;
        // if (n % 100 == 0) {
        //     count++;
        //     n /= 100;
        // }
        // else if (n % ) {
            
        // }
        if (n / 100 > 0) {
            count += n / 100;
            n -= (n / 100) * 100;
        }
        if (n / 20 > 0) {
            count += n / 20;
            n -= (n / 20) * 20;
        }
        if (n / 10 > 0) {
            count += n / 10;
            n -= (n / 10) * 10;
        }
        if (n / 5 > 0) {
            count += n / 5;
            n -= (n / 5) * 5;
        }
        if (n / 1 > 0) {
            count += n / 1;
            n -= (n / 1) * 1;
        }
        System.out.println(count);
        sc.close();
    }
}
