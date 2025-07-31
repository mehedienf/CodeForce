import java.util.Scanner;

public class n228A {
    public static void main(String[] args) {
        int count = 0;
        int[] s = new int[4];
        Scanner scanner = new Scanner(System.in);
        s[0] = scanner.nextInt();
        s[1] = scanner.nextInt();
        s[2] = scanner.nextInt();
        s[3] = scanner.nextInt();
        for (int i = 0; i < 3; i++) {
            for (int j = i; j < 4; j++) {
                if (s[i] == s[j] && i != j) {
                    count++;
                    break;
                }
            }
        }
        System.out.println(count);
        scanner.close();
    }
}
