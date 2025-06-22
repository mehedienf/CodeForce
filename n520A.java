import java.util.Scanner;

public class n520A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int flag = 0;
        String alphabet = "abcdefghijklmnopqrstuvwxyz";

        int n = sc.nextInt();
        String s = sc.nextLine();
        s = sc.nextLine();
        s = s.toLowerCase();

        if (n < 26) {
            flag = 1;
        }
        for (int i = 0; (i < alphabet.length()) && (flag == 0); i++) { 
            for (int j = 0; j < s.length(); j++) {
                if (alphabet.charAt(i) == s.charAt(j)) {
                    flag = 0;
                    break;
                }
                else {
                    flag = 1;
                }
            }
        }
        System.out.println(flag == 0 ? "YES" : "NO");
        sc.close();
    }
}