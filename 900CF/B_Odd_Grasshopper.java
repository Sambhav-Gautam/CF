import java.util.Scanner;

public class B_Odd_Grasshopper {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        sc.nextLine(); // Consume the newline character after reading t
        while (t-- > 0) {
            long x = sc.nextLong();
            long n = sc.nextLong();

            if (n == 0) {
                System.out.println(x);
            } else {
                if (x % 2 == 0) {
                    if (n % 4 == 0) {
                        System.out.println(x);
                    } else if (n % 4 == 1) {
                        System.out.println(x - n);
                    } else if (n % 4 == 2) {
                        System.out.println(x + 1);
                    } else {
                        System.out.println(x + n + 1);
                    }
                } else {
                    if (n % 4 == 0) {
                        System.out.println(x);
                    } else if (n % 4 == 1) {
                        System.out.println(n + x);
                    } else if (n % 4 == 2) {
                        System.out.println(x - 1);
                    } else {
                        System.out.println(x - n - 1);
                    }
                }
            }
        }

        sc.close();
    }
}