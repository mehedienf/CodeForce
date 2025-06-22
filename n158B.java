import java.util.Scanner;

public class n158B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] s = new int[n];
        int temp, count = 0;

        for (int i = 0; i < s.length; i++) {
            s[i] = sc.nextInt();
            // if (s[i] == 4) {
            //     count++;
            // }
            // else if (s[i] == 3) {
            //     count3++;
            // }
            // else if (s[i] == 2) {
            //     count2++;
            // }
            // else {
            //     count1++;
            // }
        }
        for (int i = 0; i < s.length; i++) {
            for (int j = 0; j < s.length; j++) {
                if (s[j] < s[i]) {
                    temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                }
            }
        }

        for (int i = 0; i < s.length; i++) {
            for (int j = 0; j < s.length; j++) {
                if (s[i] == 4) {
                    count++;
                    s[i] = 0;
                    break;
                }
                else {
                    if (s[i]+s[j] <= 4 && i != j) {
                        s[i] += s[j];
                        s[j] = 0;
                        if (s[i] == 4) {
                            count++;
                            s[i] = 0;
                            break;
                        }
                    }
                }
            }
        }
        for (int i = 0; i < s.length; i++) {
            if (s[i] > 0) {
                count++;
            }
        }
        System.out.println(count);
        sc.close();
    }
}
//// 2 3 4 4 2 1 3 1 1 
//2 2 1 1