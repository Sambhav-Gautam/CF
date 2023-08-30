import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class B_Fibonaccharsis {
    public static void main(String[] args) {
        FastReader sc = new FastReader();

        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();
            int k = sc.nextInt();

            int fibonacci = getFibonacci(k + 1);

            if (n == 1) {
                fibonacci--; // Exclude the sequence [1, 1, ..., 1]
            }

            System.out.println(fibonacci);
        }
    }

    // Helper method to calculate the nth Fibonacci number
    static int getFibonacci(int n) {
        int a = 0, b = 1;
        for (int i = 0; i < n; i++) {
            int temp = a;
            a = b;
            b += temp;
        }
        return a;
    }

    static class FastReader {
        BufferedReader br;
        StringTokenizer st;

        public FastReader() {
            br = new BufferedReader(new InputStreamReader(System.in));
        }

        public String next() {
            while (st == null || !st.hasMoreElements()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }

        public int nextInt() {
            return Integer.parseInt(next());
        }
    }
}
