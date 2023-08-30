import java.util.Scanner;

public class A_Gift_Carpet {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine(); // Consume the newline character after reading t

        while (t-- > 0) {
            int n = sc.nextInt();
            int m = sc.nextInt();
            sc.nextLine(); // Consume the newline character after reading m

            char[][] carpet = new char[n][m];
            for (int i = 0; i < n; i++) {
                String row = sc.nextLine();
                carpet[i] = row.toCharArray();
            }

            boolean result = false;
            for (int c1 = 0; c1 < m; c1++) {
                for (int c2 = c1 + 1; c2 < m; c2++) {
                    for (int c3 = c2 + 1; c3 < m; c3++) {
                        for (int c4 = c3 + 1; c4 < m; c4++) {
                            boolean foundV = false, foundI = false, foundK = false, foundA = false;
                            for (int r = 0; r < n; r++) {
                                if (carpet[r][c1] == 'v') foundV = true;
                                if (carpet[r][c2] == 'i') foundI = true;
                                if (carpet[r][c3] == 'k') foundK = true;
                                if (carpet[r][c4] == 'a') foundA = true;
                            }
                            if (foundV && foundI && foundK && foundA) {
                                result = true;
                                break;
                            }
                        }
                        if (result) break;
                    }
                    if (result) break;
                }
                if (result) break;
            }

            System.out.println(result ? "YES" : "NO");
        }
        sc.close();
    }
}
