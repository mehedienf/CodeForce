import java.util.Scanner;

public class n133A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        boolean flag = false;
        String p;
        p = scanner.nextLine();

        for (int i = 0; i < p.length(); i++) {
            if (p.charAt(i) == 'H' || p.charAt(i) == 'Q' || p.charAt(i) == '9') {
                System.out.println("YES");
                flag = true;
                break;
            }
        }
        if (flag == false) {
            System.out.println("NO");
        }
        scanner.close();
    }
}