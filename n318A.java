import java.util.Scanner;

public class n318A {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        long n, k;
        n = input.nextLong();
        k = input.nextLong();

        if (n % 2 != 0) {
            if (k <= (n/2)+1) {
                System.out.println((k*2)-1);
            }
            else
            {
                System.out.println((k-((n/2)+1))*2);
            }
        }
        else {
            if (k <= (n/2)) {
                System.out.println((k*2)-1);
            }
            else
            {
                System.out.println((k-(n/2))*2);
            }
        }
        input.close();
    }
}