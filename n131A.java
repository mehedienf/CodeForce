import java.util.Scanner;

public class n131A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        int c1 = 0, c2 = 0;
        boolean flag = true;
        int flag2 = 0;
        for (int i = 0; i < s.length(); i++) {
            if (i == 0) {
                if (s.charAt(i) == s.toLowerCase().charAt(i)) {
                    flag = true;
                }
                else {
                    flag = false;
                }
            }
            else {
                if (flag == true) {
                    if (s.charAt(i) == s.toLowerCase().charAt(i)) {
                        // flag2 = 0;
                        c1++;
                    }
                    else {
                        // flag2 = 1;
                        // break;
                        c2++;
                    }
                }
                else {
                    if (s.charAt(i) == s.toUpperCase().charAt(i)) {
                        // flag2 = 2;
                        c1++;
                    }
                    else {
                        flag2 = 3;
                        break;
                    }
                }
            }
        }

        if (c1 == s.length()-1 && s.length() != 1) {
            System.out.println(s.toLowerCase());
        }
        else {
            flag2 = 2;
        }
        if (c2 == s.length()-1) {
            flag2 = 1;
        }
        // else {
        //     flag2 = 2;
        // }
        if (flag2 == 1 && s.length() != 1) {
            System.out.print(s.toUpperCase().charAt(0));
            System.out.print(s.toLowerCase().subSequence(1, s.length()));
        }
        else if (flag2 == 3 || flag2 == 2) {
            System.out.println(s);
        }
        if (s.length() == 1 && s.charAt(0) == s.toUpperCase().charAt(0)) {
            System.out.println(s.toLowerCase());
        }
        else if (s.length() == 1 && s.charAt(0) == s.toLowerCase().charAt(0)) {
            System.out.println(s.toUpperCase());
        }
        sc.close();
    }
}