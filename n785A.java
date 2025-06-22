import java.util.Scanner;

public class n785A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = 1 + sc.nextInt();
        int count = 0;
        String[] s = new String[n];

        for (int i = 0; i < n; i++) {
            s[i] = sc.nextLine().toLowerCase();
            if (s[i].equals("tetrahedron")) {
                count += 4;
            }
            else if (s[i].equals("cube")) {
                count += 6;
            }
            else if (s[i].equals("octahedron")) {
                count += 8;
            }
            else if (s[i].equals("dodecahedron")) {
                count += 12;
            }
            else if (s[i].equals("icosahedron")) {
                count += 20;
            }
        }
        System.out.println(count);
        sc.close();
    }
}