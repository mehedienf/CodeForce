import java.util.Scanner;

public class n1791A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        char s;

        for (int i = 0; i < n; i++) {
            s = sc.next().charAt(0);
            System.out.println(s);
            if (s == 'c' || s == 'o' || s == 'd' || s == 'e' || s == 'f' || s == 'r' || s == 's') {
                System.out.println("YES");
            }
            else {
                System.out.println("NO");
            }
        }
        sc.close();
    }
}
