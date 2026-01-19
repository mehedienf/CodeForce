import java.util.Scanner;

public class n443A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s = sc.nextLine();
        String l = "abcdefghijklmnopqrstuvwxyz";
        int count = 0;
        for (int i = 0; i < l.length(); i++) {
            for (int j = 0; j < s.length(); j++) {
                if (l.charAt(i) == s.charAt(j)) {
                    count++;
                    break;
                }
            }
        }
        System.out.println(count);
        sc.close();
    }
}
