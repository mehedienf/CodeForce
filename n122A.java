import java.util.Scanner;

public class n122A {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int n, flag = 0;
        int[] x = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
        n = input.nextInt();
        
        for (int i = 0; i < x.length; i++) {
            if (n % x[i] == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 1) {
            System.out.println("YES");
        }
        else {
            System.out.println("NO");
        }
        input.close();
    }
}
