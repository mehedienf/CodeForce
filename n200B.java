import java.util.Scanner;

public class n200B {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int n;
        n = input.nextInt();

        double sum = 0;
        double[] arr = new double[n];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = input.nextDouble();
            sum += arr[i];
        }
        System.out.println(sum / n);
        input.close();
    }
}
