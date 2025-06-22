import java.util.Scanner;

public class n61A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String n1, n2;
        n1 = scanner.nextLine();
        n2 = scanner.nextLine();

        for (int i = 0; i < n1.length(); i++) {
            if (n1.charAt(i) == n2.charAt(i)) {
                System.out.print('0');
            }
            else
            {
                System.out.print("1");
            }
        }
        scanner.close();
    }
}
