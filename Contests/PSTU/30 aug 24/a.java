import java.util.Scanner;
public class a {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a, b, c;
        a = input.nextInt();
        b = input.nextInt();
        c = input.nextInt();
        if ((a+b) > c) {
            System.out.println("NO");
        }
        else {
            System.out.println("YES");
        }
        input.close();
    }
}
