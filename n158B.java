import java.util.Scanner;

public class n158B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] s = new int[n];
        int count1 = 0, count2 = 0, count3 = 0, count = 0;

        for (int i = 0; i < s.length; i++) {
            s[i] = sc.nextInt();
            if (s[i] == 4) {
                count++;
            }
            else if (s[i] == 3) {
                count3++;
            }
            else if (s[i] == 2) {
                count2++;
            }
            else {
                count1++;
            }
        }
        // System.out.println(count+""+count1+""+count2+""+count3);

        if (count1 >= count3) {
            count += count3;
            count1 -= count3;
            count3 -= count3;
            // System.out.println(1 + " " + count3);
        }
        else if (count1 < count3) {
            count += count1;
            count3 -= count1;
            count1 -= count1; 
            // System.out.println(2 + " " + count1);
        }
        if (count1/2 >= count2) {
            count += count2;
            count1 -= (count2*2);
            count2 -= count2;
            // System.out.println(1 + " " + count2);
        }
        else if (count1/2 < count2) {
            count += (count1/2);
            count2 -= (count1/2);
            count1 -= ((count1/2)*2);
        }
        count += count2/2;
        count2 -= count2/2;
        count += (count1 + count2 + count3);
        System.out.println(count+""+count1+""+count2+""+count3);
        sc.close();
    }
}
//// 2 3 4 4 2 1 3 1 1
//2 = 2, 3 = 2, 4 = 0, 1 = 1, t=2+2+
//1 2 4 3 3
/*
 * for (int j = i; j < s.length; j++) {
                if (s[i] == 4) {
                    count++;
                    s[i] = 0;
                    break;
                }
                else if (s[i] + s[j] == 4) {
                    count++;
                    s[j] = 0;
                    break;
                }
                else if (s[i] == 2 || s[i] == 1) {
                    // sum = s[i];
                    // if (s[j] <= s[i]) {
                    //     sum += s[j];
                    //     s[j] = 0;
                    // }
                    if (s[j] < 4 && s[j] > 0) {
                        sum += s[j];
                    }
                    if (sum == 4) {
                        count++;
                        sum = 0;
                        break;
                    }
                }
            }
 */