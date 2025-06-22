import java.util.Scanner;

public class c {
    public static void main(String[] args) {
        int n, temp = 0;
        Scanner input = new Scanner(System.in);

        n = input.nextInt();
        for (int i = 1; i <= 200; i++) {
            if (n % i == 0) {
                temp = i;
                break;
            }
        }
        System.out.println(temp +" " + (n/temp));
        input.close();
    }
}

