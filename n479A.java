import java.util.Scanner;

public class n479A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        int[] temp = new int[5];

        temp[0] = a + (b * c);
        temp[1] = a * (b + c);
        temp[2] = a * b * c;
        temp[3] = (a + b) * c;
        temp[4] = a + b + c;
        int max = Integer.MIN_VALUE;

        for (int i = 0; i < temp.length; i++) {
            if (temp[i] > max) {
                max = temp[i];
            }
        }
        System.out.println(max);
        sc.close();
    }
}
