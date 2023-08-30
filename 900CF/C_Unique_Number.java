import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class C_Unique_Number {
    public static void solve(int x) {
        ArrayList<Integer> ans = new ArrayList<>();
        int sum = 0, last = 9;
        while (sum < x && last > 0) {
            ans.add(Math.min(x - sum, last));
            sum += last;
            last--;
        }
        if (sum < x) {
            System.out.println(-1);
        } else {
            Collections.reverse(ans);
            for (int i : ans) {
                System.out.print(i);
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        for (int i = 0; i < t; i++) {
            int x = scanner.nextInt();
            solve(x);
        }
    }
}
