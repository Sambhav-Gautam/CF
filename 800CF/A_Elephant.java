import java.util.Scanner;

public class A_Elephant {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int count = 0;

        int[] strides = { 5, 4, 3, 2, 1 };
        for (int stride : strides) {
            if (t >= stride) {
                count += t / stride;
                t = t % stride;
            }
        }

        System.out.println(count);
        sc.close();
    }
}
