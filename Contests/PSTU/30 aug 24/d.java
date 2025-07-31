import java.util.Scanner;

public class d {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int flag = 0;
        int n;
        n = input.nextInt();
        while (n > 1) {
            if (n % 2 == 0) {
                n = n - (n/2);
            }
            else {
                n = n - 1;
            }
            if (n == 1) {
                break;
            }
        }
        if (flag == 0) {
            System.out.println("Mahmoud");
        }
        else {
            System.out.println("Bashar");
        }
        input.close();
    }
}
