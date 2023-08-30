import java.util.Scanner;
import java.util.Vector;

public class A_Shifting_Stacks {
    public static void solve(Vector<Integer> a) {
        long sum = 0, need = 0;
        int n = a.size();
        for (int i = 0; i < n; ++i) {
            need += i;
            sum += a.get(i);
            if (sum < need) {
                System.out.println("NO");
                return;
            }
        }
        System.out.println("YES");
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            Vector<Integer> a = new Vector<Integer>(n);
            for (int i = 0; i < n; ++i)
                a.add(sc.nextInt());
            solve(a);
        }
        sc.close();
    }
}
