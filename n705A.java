import java.util.Scanner;

public class n705A {
    public static void main(String[] args) {
        int n;
        Scanner scanner = new Scanner(System.in);

        n = scanner.nextInt();

        for (int i = 1; i <= n; i++) {
            if (i > 1) {
                System.out.print("that ");
            }
            if (i % 2 != 0) {
                System.out.print("I hate ");
            }
            else {
                System.out.print("I love ");
            }
        }
        System.out.println("it");
        scanner.close();
    }
}
