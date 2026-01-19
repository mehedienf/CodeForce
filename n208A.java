import java.util.Scanner;

public class n208A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s = sc.nextLine();
        int flag = 2;
        int temp = 0;

        for (int i = 0; i < s.length() && i < s.length()-3; ) {
            if (s.charAt(i) == 'W' && s.charAt(i+1) == 'U' && s.charAt(i+2) == 'B') {
                i += 3;
                if (flag == 0) {
                    flag = 1;
                }
                // else {
                //     flag = 0;
                // }
            }
            else {
                if (flag == 0) {
                    System.out.print(s.charAt(i));
                    // flag = 1;
                }
                else if (flag == 2) {
                    System.out.print(s.charAt(i));
                    flag = 0;
                }
                else {
                    System.out.print(" " + s.charAt(i));
                    flag = 0;
                }
                i++;
            }
            temp = i;
        }
        // System.out.println(temp);
        // flag = 1;
        // else {
            for (int i = temp; i < s.length(); i++) {
                if ((s.length()-temp == 3) && s.charAt(s.length()-3) == 'W' && s.charAt(s.length()-2) == 'U' && s.charAt(s.length()-1) == 'B') {
                    // System.out.println();
                    break;

                }
                else {
                    if (flag == 1 || temp == s.length()-1) {
                        System.out.print(" " + s.charAt(i));
                        flag = 0;
                    }
                    else {
                        System.out.print(s.charAt(i));
                    }
                }
            }
        // }

        // for (int j = temp; j < s.length() && flag == false; j++) {
        //     System.out.print(s.charAt(j));
        // }
        System.out.println();
        sc.close();
    }
}

//WUBHDWUBJWUBWUBK